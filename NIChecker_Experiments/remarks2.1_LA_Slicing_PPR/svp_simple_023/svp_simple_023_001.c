/*
 * racebench2.1_remarks
 * Filename:svp_simple_023_001
 * Template File:svp_simple_023
 * Created by Beijing Sunwise Information Technology Ltd. on 19/11/25.
 * Copyright © 2019年 Beijing Sunwise Information Technology Ltd. All rights reserved.
 * [说明]:
 * 主程序入口:svp_simple_023_001_main
 * 中断入口:svp_simple_023_001_isr_1
 * 中断间的优先级以中断号作为标准，中断号越高，中断优先级越高。
 *
 *
 *
 *
 */

#include "../common.h"

volatile int svp_simple_023_001_global_var;
void svp_simple_023_001_func_1(int x);
void svp_simple_023_001_init();

void svp_simple_023_001_main() {
  svp_simple_023_001_init();
  svp_simple_023_001_func_1(svp_simple_023_001_global_var);  
}
void svp_simple_023_001_init() {
  svp_simple_023_001_global_var = nondet_rand();

  init();
}

void svp_simple_023_001_func_1(int var) {
  if (var > 0 && var < 12) {
    svp_simple_023_001_global_var = svp_simple_023_001_global_var + 1;  
  }
}
//priority 1
void svp_simple_023_001_isr_1() {
  svp_simple_023_001_global_var = nondet_rand();//svp_simple_023_001_global_var = 0; 
}

void idlerun() {
  int i = 0;
  for (i = 0; i <= 100; i++) {
    //		print2("Running....");
  }
}

void init() { enable_isr(-1); }
// bug点：
// 1.svp_simple_023_001_global_var <R, #25>, <W, #39>, <R, #35> 
// 2.svp_simple_023_001_global_var <R, #35>, <W, #39>, <W, #35> 