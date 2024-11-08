typedef int pthread_t;
/*
 * racebench2.1_remarks
 * Filename:svp_simple_022_001
 * Template File:svp_simple_022
 * Created by Beijing Sunwise Information Technology Ltd. on 19/11/25.
 * Copyright © 2019年 Beijing Sunwise Information Technology Ltd. All rights reserved.
 * [说明]:
 * 主程序入口:svp_simple_022_001_main
 * 中断入口:svp_simple_022_001_isr_1
 * 中断间的优先级以中断号作为标准，中断号越高，中断优先级越高。
 *
 *
 *
 *
 */

#include "../common.h"

volatile int svp_simple_022_001_global_var1;
volatile int svp_simple_022_001_global_var2;
volatile int svp_simple_022_001_global_var3;
volatile int svp_simple_022_001_global_array[256];
void svp_simple_022_001_func_1();
void svp_simple_022_001_func_2();
void svp_simple_022_001_func_3();
void svp_simple_022_001_func_4();
void svp_simple_022_001_init();

void *main_task(void *arg) {
  svp_simple_022_001_init();

  svp_simple_022_001_global_var1 = 0;  
  svp_simple_022_001_func_1();
  int i;
  for (i = 0; i < 256; i++) {
    svp_simple_022_001_global_array[i] = 0;
  }
  svp_simple_022_001_func_2();
  svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
}

void svp_simple_022_001_init() {
  svp_simple_022_001_global_var1 = nondet_rand();
  svp_simple_022_001_global_var2 = nondet_rand();
  svp_simple_022_001_global_var3 = nondet_rand();

  init();
}

void svp_simple_022_001_func_1() { svp_simple_022_001_func_3(); }

void svp_simple_022_001_func_2() { svp_simple_022_001_func_4(); }

void svp_simple_022_001_func_3() {
  if (svp_simple_022_001_global_var1 >= 12) { 
    svp_simple_022_001_global_var1 = 12;       
  } else {
    svp_simple_022_001_global_var1 = 0;  
  }
}
void svp_simple_022_001_func_4() {
  svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1;  
}
//priority 1
void *svp_simple_022_001_isr_1(void *arg) {
  svp_simple_022_001_global_var1 = nondet_rand(); 
}

void idlerun() {
  int i = 0;
  for (i = 0; i <= 100; i++) {
    //		print2("Running....");
  }
}

void init() { enable_isr(-1); }

// 1: svp_simple_022_001_global_var1 <W, #32>, <W,#66>, <R,#55>
// 2: svp_simple_022_001_global_var1 <R, #55>, <W,#66>, <W,#56>
// 3: svp_simple_022_001_global_var1 <W, #56>, <W,#66>, <R,#63>
// 4: svp_simple_022_001_global_var1 <R, #63>, <W,#66>, <R,#39>

// 可能误报
// 1: svp_simple_022_001_global_var1 <W, #32>, <W,#66>, <R,#39>
// 2: svp_simple_022_001_global_var1 <R, #55>, <W,#66>, <R,#56>
// 3: svp_simple_022_001_global_var1 <R, #55>, <W,#66>, <R,#63>

int main(){
  pthread_t t0, t1;
  pthread_create(&t0, 0, main_task, 0);
  pthread_create(&t1, 0, svp_simple_022_001_isr_1, 0);
}
