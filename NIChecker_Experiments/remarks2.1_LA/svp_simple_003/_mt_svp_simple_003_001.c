typedef int pthread_t;
/*
 * racebench2.1_remarks
 * Filename:svp_simple_003_001
 * Template File:svp_simple_003
 * Created by Beijing Sunwise Information Technology Ltd. on 19/11/25.
 * Copyright © 2019年 Beijing Sunwise Information Technology Ltd. All rights reserved.
 * [说明]:
 * 主程序入口:svp_simple_003_001_main
 * 中断入口:svp_simple_003_001_isr_1,svp_simple_003_001_isr_2
 * 中断间的优先级以中断号作为标准，中断号越高，中断优先级越高。
 *
 *
 *
 *
 */

#include "../common.h"

#define MAX_LENGTH 10000
#define TRIGGER 9999

volatile int svp_simple_003_001_global_var1;
volatile int svp_simple_003_001_global_var2;

volatile int svp_simple_003_001_global_flag = 0;
volatile int svp_simple_003_001_global_flag1 = 0;
void *main_task(void *arg) {
  //init();
  int reader1, reader2;
  int reader3, reader4;
  idlerun();
 

  disable_isr(1);
  disable_isr(2);
   
  for (int i = 0; i < MAX_LENGTH; i++) {
    if (i == TRIGGER) {
      reader3 = svp_simple_003_001_global_var2;
    }
  }

  for (int j = MAX_LENGTH; j > 0; j--) {
    if (j == TRIGGER) {
      reader4 = svp_simple_003_001_global_var2;
    }
  }
  
  enable_isr(1);
  for (int i = 0; i < MAX_LENGTH; i++) {
    if (i == TRIGGER) {
      reader1 = svp_simple_003_001_global_var1;
    }
  }
  for (int j = MAX_LENGTH; j > 0; j--) {
    if (j == TRIGGER) {
      reader2 = svp_simple_003_001_global_var1;
    }
  }
}
//priority 1
void *svp_simple_003_001_isr_1(void *arg) {
  enable_isr(2);
  svp_simple_003_001_global_var2 = 999;

  if (svp_simple_003_001_global_flag == 1) {
    svp_simple_003_001_global_var1 = 999;
  } else if (svp_simple_003_001_global_flag1 == 2) {
    svp_simple_003_001_global_var1 = 888;
  }
}
//priority 2
void *svp_simple_003_001_isr_2(void *arg) {
  idlerun();
  svp_simple_003_001_global_flag = 1;
}

void idlerun() {
  int i = 0;
  for (i = 0; i <= 100; i++) {
    //		print2("Running....");
  }
}

void init() { enable_isr(-1); }
//bug点:
//1.svp_simple_003_001_global_var1<R#50>,<W#65>,<R#55>
//误报点:
//1.svp_simple_003_001_global_var2<R#38>,<W#62>,<R#43>
//2.svp_simple_003_001_global_var1<R#50>,<W#67>,<R#55>

int main(){
  pthread_t t0, t1, t2;
  pthread_create(&t0, 0, main_task, 0);
  pthread_create(&t1, 0, svp_simple_003_001_isr_1, 0);
  pthread_create(&t2, 0, svp_simple_003_001_isr_2, 0);
}