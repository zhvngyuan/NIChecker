typedef int pthread_t;
/*
 * racebench2.1_remarks
 * Filename:svp_simple_018_001
 * Template File:svp_simple_018
 * Created by Beijing Sunwise Information Technology Ltd. on 19/11/25.
 * Copyright © 2019年 Beijing Sunwise Information Technology Ltd. All rights reserved.
 * [说明]:
 * 主程序入口:svp_simple_018_001_main
 * 中断入口:svp_simple_018_001_isr_1，svp_simple_018_001_isr_2
 * 中断间的优先级以中断号作为标准，中断号越高，中断优先级越高。
 *
 *
 *
 *
 */

//#include "../common.h"

//void svp_simple_018_001_main();

float svp_simple_018_001_func1();

float svp_simple_018_001_func2();

void svp_simple_018_001_i_func1();

volatile float svp_simple_018_001_para1;
volatile float svp_simple_018_001_para2;

void *main_task(void *arg) {
  init();
  float svp_simple_018_001_perimete = 0;
  float svp_simple_018_001_area = 0;
  svp_simple_018_001_perimete = svp_simple_018_001_func1();
  svp_simple_018_001_area = svp_simple_018_001_func2();
}

float svp_simple_018_001_func1() {
  float perimete = 0.0;
  perimete = 2 * svp_simple_018_001_para1 *
             svp_simple_018_001_para2;
  return perimete;
}

float svp_simple_018_001_func2() {
  float area = 0.0;
  area = svp_simple_018_001_para1 *
         svp_simple_018_001_para2 *
         svp_simple_018_001_para2;
  return area;
}

void svp_simple_018_001_ifunc1() {
  svp_simple_018_001_para2 = 1.0;
}
//priority 1
void *svp_simple_018_001_isr_1(void *arg) {
  idlerun();
  svp_simple_018_001_para1 = 2.0;
}
//priority 2
void *svp_simple_018_001_isr_2(void *arg) {
  idlerun();
  svp_simple_018_001_ifunc1();
}

void idlerun() {
  int i = 0;
  for (i = 0; i <= 100; i++) {
    //		print2("Running....");
  }
}

void init() { enable_isr(-1); }
//bug点:
//1.svp_simple_018_001_para1<R#40>,<W#59>,<R#47>
//2.svp_simple_018_001_para2<R#41>,<W#54>,<R#48>
//3.svp_simple_018_001_para2<R#48>,<W#54>,<R#49>
int main(){
  pthread_t t0, t1, t2;
  pthread_create(&t0, 0, main_task, 0);
  pthread_create(&t1, 0, svp_simple_018_001_isr_1, 0);
  pthread_create(&t2, 0, svp_simple_018_001_isr_2, 0);
}
