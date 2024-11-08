typedef int pthread_t;
/*
 * racebench2.1_remarks
 * Filename:svp_simple_016_001
 * Template File:svp_simple_016
 * Created by Beijing Sunwise Information Technology Ltd. on 19/11/25.
 * Copyright © 2019年 Beijing Sunwise Information Technology Ltd. All rights reserved.
 * [说明]:
 * 主程序入口:svp_simple_016_001_main
 * 中断入口:svp_simple_016_001_isr_1
 * 中断间的优先级以中断号作为标准，中断号越高，中断优先级越高。
 *
 *
 *
 *
 */

#include "../common.h"

volatile int svp_simple_016_001_global_var1;

void *main_task(void *arg) {
  init();
  int reader1;
  svp_simple_016_001_global_var1 = 0x01;
  reader1 = svp_simple_016_001_global_var1 +
            svp_simple_016_001_global_var1 +
            svp_simple_016_001_global_var1;

}
//priority 1
void *svp_simple_016_001_isr_1(void *arg) {
  idlerun();
  svp_simple_016_001_global_var1 = 0x09;
}

void idlerun() {
  int i = 0;
  for (i = 0; i <= 100; i++) {
    //		print2("Running....");
  }
}

void init() { enable_isr(-1); }
//bug点:
//1.svp_simple_016_001_global_var1<W#24>,<W#33>,<R#25>
//2.svp_simple_016_001_global_var1<R#25>,<W#33,<R#26>
//3.svp_simple_016_001_global_var1<R#26>,<W#33>,<R#27>
int main(){
  pthread_t t0, t1;
  pthread_create(&t0, 0, main_task, 0);
  pthread_create(&t1, 0, svp_simple_016_001_isr_1, 0);
}
