typedef int pthread_t;
/*
 * racebench2.1_remarks
 * Filename:svp_simple_006_001
 * Template File:svp_simple_006
 * Created by Beijing Sunwise Information Technology Ltd. on 19/11/25.
 * Copyright © 2019年 Beijing Sunwise Information Technology Ltd. All rights reserved.
 * [说明]:
 * 主程序入口:svp_simple_006_001_main
 * 中断入口:svp_simple_006_001_isr_1
 * 中断间的优先级以中断号作为标准，中断号越高，中断优先级越高。
 *
 *
 *
 *
 */

//#include "../common.h"

#define MAX_LENGTH 10000
#define TRIGGER 9999

volatile int svp_simple_006_001_global_var1;
volatile int svp_simple_006_001_global_var2;
volatile unsigned char flag = 0x55;
void *main_task(void *arg) {
  //init();
  int reader1, reader2, reader3;
  
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++) {
      if (i == j) {
        if (i == 0){
            reader1 = svp_simple_006_001_global_var1;
        }else if (i == 4){
          reader2 = svp_simple_006_001_global_var1;
        }else if(i == 6) {
          reader2 = svp_simple_006_001_global_var1;
        }
      }
    }
  }
  
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++) {
      if (((i + j) == 6) && (i < j))
        svp_simple_006_001_global_var2 = 0x02;
    }
  }
}
//priority 1
void *svp_simple_006_001_isr_1(void *arg) {
  int reader2;
  idlerun();

  svp_simple_006_001_global_var1 = 1;
  reader2 = svp_simple_006_001_global_var2;
}

void idlerun() {
  int i = 0;
  for (i = 0; i <= 100; i++) {
    //		print2("Running....");
  }
}

void init() { enable_isr(-1); }

//bug点:
//1.svp_simple_006_001_global_var1<R#33>,<W#52>,<R#35>
//误报点:
//1.svp_simple_006_001_global_var1<R#35>,<W#52>,<R#37>
//2.svp_simple_006_001_global_var2<W#44>,<R#53>,<W#44>
int main(){
  pthread_t t0, t1;
  pthread_create(&t0, 0, main_task, 0);
  pthread_create(&t1, 0, svp_simple_006_001_isr_1, 0);
}
