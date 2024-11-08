typedef int pthread_t;
/*
 * racebench2.1_remarks
 * Filename:svp_simple_024_001
 * Template File:svp_simple_024
 * Created by Beijing Sunwise Information Technology Ltd. on 19/11/25.
 * Copyright © 2019年 Beijing Sunwise Information Technology Ltd. All rights reserved.
 * [说明]:
 * 主程序入口:svp_simple_024_001_main
 * 中断入口:svp_simple_024_001_isr_1
 * 中断间的优先级以中断号作为标准，中断号越高，中断优先级越高。
 *
 *
 *
 *
 */

#include "../common.h"
union bytetoword {
  unsigned char bytedata[2];
  unsigned int worddata;
};

volatile int svp_simple_024_001_global_var;
volatile int *svp_simple_024_001_global_array[100];
volatile unsigned8 svp_simple_024_001_reset_RT;
unsigned int svp_simple_024_001_RTData(int *array, int size);
void svp_simple_024_001_init();

void *main_task(void *arg) {
  union bytetoword svp_simple_024_001_local_a, svp_simple_024_001_local_b;
  svp_simple_024_001_init();
  svp_simple_024_001_local_a.worddata = svp_simple_024_001_RTData(svp_simple_024_001_global_array, 0);  
  svp_simple_024_001_local_b.worddata = svp_simple_024_001_RTData(svp_simple_024_001_global_array, 1);  
  int svp_simple_024_001_local_casereg =
      svp_simple_024_001_local_a.worddata | svp_simple_024_001_local_b.worddata & 0x02f0;

  switch (svp_simple_024_001_local_casereg) {
    case 0x02f0:
      svp_simple_024_001_reset_RT = 1;
      break;
    case 0x0390:
      svp_simple_024_001_reset_RT = 0;
      break;
    default:
      break;
  }
}
void svp_simple_024_001_init() {
  svp_simple_024_001_global_var = nondet_rand();

  init();
}

unsigned int svp_simple_024_001_RTData(int *array, int index) {
  union bytetoword svp_simple_024_001_local_r;
  svp_simple_024_001_local_r.bytedata[0] = array[index + 1];  
  svp_simple_024_001_local_r.bytedata[1] = array[index];      

  return svp_simple_024_001_local_r.worddata;
}
//priority 1
void *svp_simple_024_001_isr_1(void *arg) {
  for (int i = 0; i < 100; i++) {
    svp_simple_024_001_global_array[i] = 10; 
  }
}

void idlerun() {
  int i = 0;
  for (i = 0; i <= 100; i++) {
    //		print2("Running....");
  }
}

void init() { enable_isr(-1); }
// bug点：
// 1.svp_simple_024_001_global_array[1] <R, #56>, <W, #63>, <R, #57>
int main(){
  pthread_t t0, t1;
  pthread_create(&t0, 0, main_task, 0);
  pthread_create(&t1, 0, svp_simple_024_001_isr_1, 0);
}
