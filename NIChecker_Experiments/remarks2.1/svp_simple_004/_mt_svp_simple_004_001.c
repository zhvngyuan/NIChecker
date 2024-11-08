typedef int pthread_t;
/*
 * racebench2.1_remarks
 * Filename:svp_simple_004_001
 * Template File:svp_simple_004
 * Created by Beijing Sunwise Information Technology Ltd. on 19/11/25.
 * Copyright © 2019年 Beijing Sunwise Information Technology Ltd. All rights reserved.
 * [说明]:
 * 主程序入口:svp_simple_004_001_main
 * 中断入口:svp_simple_004_001_isr_1,svp_simple_004_001_isr_2
 * 中断间的优先级以中断号作为标准，中断号越高，中断优先级越高。
 *
 *
 *
 *
 */

#include "../common.h"

#define MAX_LENGTH 10000
#define TRIGGER 9999

volatile int svp_simple_004_001_condition1 = 1;
volatile int svp_simple_004_001_condition2 = 1;
volatile int svp_simple_004_001_condition3 = 1;
volatile int svp_simple_004_001_condition4 = 1;
volatile int svp_simple_004_001_condition5 = 1;
volatile int svp_simple_004_001_condition6 = 1;

volatile int svp_simple_004_001_global_var1 = 0x11;
volatile int svp_simple_004_001_global_var2 = 0x22;
volatile int svp_simple_004_001_global_var3 = 0x33;

void *main_task(void *arg) {
  init();
  int reader1, reader2;
  int reader3, reader4;
  int reader5, reader6;
  disable_isr(2);

  if (svp_simple_004_001_condition1 == 1) {
    reader1 = svp_simple_004_001_global_var1;
    reader5 = svp_simple_004_001_global_var3;
  }

  if (svp_simple_004_001_condition2 == 1) {
    reader2 = svp_simple_004_001_global_var1;
    reader6 = svp_simple_004_001_global_var3;
  }

  if (svp_simple_004_001_condition4 == 1) reader3 = svp_simple_004_001_global_var2;

  if (svp_simple_004_001_condition5 == 1) reader4 = svp_simple_004_001_global_var2;
}
//priority 1
void *svp_simple_004_001_isr_1(void *arg) {
  svp_simple_004_001_condition6 = 0;

  if (svp_simple_004_001_condition3 == 1)
    svp_simple_004_001_global_var1 = 0xaa;
  else
    svp_simple_004_001_global_var3 = 0xcc;

  enable_isr(2);
}
//priority 2
void *svp_simple_004_001_isr_2(void *arg) {
  if (svp_simple_004_001_condition6 == 1)
    svp_simple_004_001_global_var2 = 0x22;
}

void idlerun() {
  int i = 0;
  for (i = 0; i <= 100; i++) {
    //		print2("Running....");
  }
}

void init() { enable_isr(-1); }

//bug点:
//1.svp_simple_004_001_global_var1<R#41>,<W#59>,<R#46>
//误报点:
//1.svp_simple_004_001_global_var3<R#42>,<W#61>,<R#47>
//2.svp_simple_004_001_global_var2<R#50>,<W#68>,<<R#52>
int main(){
  pthread_t t0, t1, t2;
  pthread_create(&t0, 0, main_task, 0);
  pthread_create(&t1, 0, svp_simple_004_001_isr_1, 0);
  pthread_create(&t2, 0, svp_simple_004_001_isr_2, 0);
}
