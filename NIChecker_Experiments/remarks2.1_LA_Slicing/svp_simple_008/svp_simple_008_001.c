/*
 * racebench2.1_remarks
 * Filename:svp_simple_008_001
 * Template File:svp_simple_008
 * Created by Beijing Sunwise Information Technology Ltd. on 19/11/25.
 * Copyright © 2019年 Beijing Sunwise Information Technology Ltd. All rights reserved.
 * [说明]:
 * 主程序入口:svp_simple_008_001_main
 * 中断入口:svp_simple_001_008_isr_1
 * 中断间的优先级以中断号作为标准，中断号越高，中断优先级越高。
 *
 *
 *
 *
 */

#include "../common.h"

void svp_simple_008_001_func_1();

#define MAX_LENGTH 10000
#define TRIGGER 9999

volatile int svp_simple_008_001_global_var;

volatile int svp_simple_008_001_global_array[100];

void svp_simple_008_001_main() {
  init();
  int p = 1;
  int q = 2;

  svp_simple_008_001_global_array[p + q] = 0x09;

  svp_simple_008_001_global_array[40] = 0x01;

  svp_simple_008_001_func_1();
}

void svp_simple_008_001_func_1() {
  int reader1, reader2;
  int i = 1;
  int j = 2;
  int p = 1;
  int q = 3;
  reader1 = svp_simple_008_001_global_array[i * 20 + j * 10];

  reader2 = svp_simple_008_001_global_array[p + q];
}
//priority 1
void svp_simple_008_001_isr_1() {
  for (int k = 0; k < 100; k++) svp_simple_008_001_global_array[k] = 0x05;
}

void idlerun() {
  int i = 0;
  for (i = 0; i <= 100; i++) {
    //		print2("Running....");
  }
}

void init() { enable_isr(-1); }

//bug点:
//1.svp_simple_008_001_global_array<W#35>,<W#52>,<R#46>
//误报点:
//1.svp_simple_008_001_global_array<W#33>,<W#52>,<R#48>