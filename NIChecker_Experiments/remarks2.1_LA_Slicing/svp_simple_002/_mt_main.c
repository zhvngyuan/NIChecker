typedef int pthread_t;
/*
 * racebench2.1_remarks
 * Filename:svp_simple_002_001
 * Template File:svp_simple_002
 * Created by Beijing Sunwise Information Technology Ltd. on 19/11/25.
 * Copyright © 2019年 Beijing Sunwise Information Technology Ltd. All rights reserved.
 * [说明]:
 * 主程序入口:svp_simple_002_001_main
 * 中断入口:svp_simple_002_001_isr_1,svp_simple_002_001_isr_2
 * 中断间的优先级以中断号作为标准，中断号越高，中断优先级越高。
 *
 *
 *
 *
 */

#include "../common.h"

#define MAX_LENGTH 10000
#define TRIGGER 9999

volatile int svp_simple_002_001_global_array[MAX_LENGTH];
volatile int casee2_global_var;

void *main_task(void *arg) {
  init();
  idlerun();
}
//priority 1
void *svp_simple_002_001_isr_1(void *arg) {
  int mininum, maxnum;
  for (int i = 0; i < MAX_LENGTH; i++) {
    if (i == TRIGGER) svp_simple_002_001_global_array[TRIGGER] = 1;
    if (i == MAX_LENGTH + 1)
      svp_simple_002_001_global_array[TRIGGER] = 1;
  }
  mininum = svp_simple_002_001_global_array[TRIGGER] - 10;

  maxnum = svp_simple_002_001_global_array[0] + 10;
}
//priority 2
void *svp_simple_002_001_isr_2(void *arg) {
  idlerun();
  svp_simple_002_001_global_array[TRIGGER] = 999;

}

void idlerun() {
  int i = 0;
  for (i = 0; i <= 100; i++) {
    //		print2("Running....");
  }
}

void init() { enable_isr(-1); }

//bug点:
//1.svp_simple_002_001_global_array<W#33>,<W#44><R#37>
//误报点:
//1.svp_simple_002_001_global_array<W#35>,<W#44>,<R#37>
//2.svp_simple_002_001_global_array<R#37>,<W#44>,<R#39>
//3.svp_simple_002_001_global_array<R#33>,<W#44>,<R#35>
int main(){
  pthread_t t0, t1, t2;
  pthread_create(&t0, 0, main_task, 0);
  pthread_create(&t1, 0, svp_simple_002_001_isr_1, 0);
  pthread_create(&t2, 0, svp_simple_002_001_isr_2, 0);
}
