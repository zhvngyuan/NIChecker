typedef int pthread_t;
/*
 * racebench2.1_remarks
 * Filename:svp_simple_011_001
 * Template File:svp_simple_011
 * Created by Beijing Sunwise Information Technology Ltd. on 19/11/25.
 * Copyright © 2019年 Beijing Sunwise Information Technology Ltd. All rights reserved.
 * [说明]:
 * 主程序入口:svp_simple_011_001_main
 * 中断入口:svp_simple_011_001_isr_1
 * 中断间的优先级以中断号作为标准，中断号越高，中断优先级越高。
 *
 *
 *
 *
 */

#include "../common.h"

int svp_simple_011_001_global_var1;
int svp_simple_011_001_global_var2;
int svp_simple_011_001_global_var3;

volatile int *svp_simple_011_001_u;

void *main_task(void *arg) {
  init();
  int *p = &svp_simple_011_001_global_var1;
  int *q = &svp_simple_011_001_global_var1;

  *p = 0x01;
  *q = 0x02;

  svp_simple_011_001_u = &svp_simple_011_001_global_var2;
  *svp_simple_011_001_u = 0x01;
  svp_simple_011_001_u = &svp_simple_011_001_global_var3;
  *svp_simple_011_001_u = 0x02;
}
//priority 1
void *svp_simple_011_001_isr_1(void *arg) {
  int reader1, reader2;
  int *m = &svp_simple_011_001_global_var1;
  reader1 = *m;
  reader2 = *svp_simple_011_001_u;
}
void idlerun() {
  int i = 0;
  for (i = 0; i <= 100; i++) {
    //		print2("Running....");
  }
}

void init() { enable_isr(-1); }
//bug点:
//1.svp_simple_011_001_global_var1 <W#30>,<R#42>,<W#31>//*p<W#30>,<R#42>,<W#31>
//误报点:
//1.*u<W#34>,<R#43>,<W#36>
int main(){
  pthread_t t0, t1;
  pthread_create(&t0, 0, main_task, 0);
  pthread_create(&t1, 0, svp_simple_011_001_isr_1, 0);
}
