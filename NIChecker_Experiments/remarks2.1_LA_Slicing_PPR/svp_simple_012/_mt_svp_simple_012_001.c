typedef int pthread_t;
/*
 * racebench2.1_remarks
 * Filename:svp_simple_012_001
 * Template File:svp_simple_012
 * Created by Beijing Sunwise Information Technology Ltd. on 19/11/25.
 * Copyright © 2019年 Beijing Sunwise Information Technology Ltd. All rights reserved.
 * [说明]:
 * 主程序入口:svp_simple_012_001_main
 * 中断入口:svp_simple_012_001_isr_1
 * 中断间的优先级以中断号作为标准，中断号越高，中断优先级越高。
 *
 *
 *
 *
 */

#include "../common.h"

int svp_simple_012_001_global_var;

int svp_simple_012_001_global_pointer;

void *main_task(void *arg) {
  init();
  int *p = &svp_simple_012_001_global_var;

  svp_simple_012_001_global_var = 0x01;

  *p = 0x02;
}
//priority 1
void *svp_simple_012_001_isr_1(void *arg) {
  int reader1;
  reader1 = svp_simple_012_001_global_var;
}

void idlerun() {
  int i = 0;
  for (i = 0; i <= 100; i++) {
    //		print2("Running....");
  }
}

void init() { enable_isr(-1); }
//bug点:
//1.svp_simple_012_001_global_var<W#27>,<R#34>,<W#29>
int main(){
  pthread_t t0, t1;
  pthread_create(&t0, 0, main_task, 0);
  pthread_create(&t1, 0, svp_simple_012_001_isr_1, 0);
}
