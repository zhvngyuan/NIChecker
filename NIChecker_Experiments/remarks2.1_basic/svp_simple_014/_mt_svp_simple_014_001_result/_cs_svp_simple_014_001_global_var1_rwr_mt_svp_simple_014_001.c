/***
 ***  generated by CSeq [ 0000 / 0000 ] 2024-09-27 09:09:32
 ***
 ***                      2CA0 2020.03.24 core/merger
 ***                      5028 2020.05.28 core/module
 ***                      A857 2020.11.25 core/parser
 ***                      690A 2020.03.28 core/parser_old
 ***                      25CA 2020.04.14 core/utils
 ***
 ***  params:
 ***    --input /home/dell/zyworkspace/nichecker/Experiment/remarks2.1_basic/svp_simple_014/_mt_svp_simple_014_001.c --unwind 2 --rounds 2 --contexts 0 --cores 4
 ***
 ***  mode:
 ***    rwr
 ***    int
 ***    svp_simple_014_001_global_var1
 ***
 ***  use loop abstraction:
 ***    False
 ***
 ***  modules:
 ***    48DE workarounds (sv-comp)
 ***    5FB8 functiontracker ()
 ***    AFDA preinstrumenter (sv-comp error-label)
 ***    6C2E spinlock ()
 ***    5A58 funcunwind ()
 ***    D804 preinliner ()
 ***    C103 inliner (atomic-parameters simplify-args)
 ***    9824 slice ()
 ***    81FC switchtransformer ()
 ***    43C1 dowhileconverter ()
 ***    B6D9 LoopAbstraction ()
 ***    1B3E conditionextractor ()
 ***    4E14 varnames ()
 ***    74B2 unroller (unwind unwind-while unwind-for unwind-for-max softunwindbound varnamesmap varscopesmap extra-tracking unwind-check)
 ***    EAC4 selfop ()
 ***    CAA3 constants (deep-propagation)
 ***    E0BD duplicator (threads)
 ***    03B2 condwaitconverter ()
 ***    EDBA insertLabel ()
 ***    49F0 lazyseq (rounds contexts threads schedule deadlock norobin preanalysis nondet-condvar-wakeups)
 ***    7D6B instrumenter (backend bitwidth header well-nested-locks emptystructs)
 ***    2136 replacegoto ()
 ***    50F3 mapper (backend contexts unwind cores no-simplify reuse-dimacs)
 ***    0175 feeder (backend time llvm depth slevel no-simplify unwind contexts unwind 32 show-backend-output extrargs from to)
 ***    6041 cex (backend cex threadnamesmap threadindexes threadindextoname varnamesmap coordstofunctions sv-comp witness entry threadsizes threadendlines loopheads unwind-check)
 ***
 ***/
#define __cs_MUTEX_INITIALIZER -1
#define __cs_COND_INITIALIZER -1
#define __cs_RWLOCK_INITIALIZER -1
#define __cs_BARRIER_SERIAL_THREAD 0
#define __cs_CANCEL_ASYNCHRONOUS 0
#define __cs_CANCEL_ENABLE 0
#define __cs_CANCEL_DEFERRED 0
#define __cs_CANCEL_DISABLE 0
#define __cs_CANCELED 0
#define __cs_CREATE_DETACHED 0
#define __cs_CREATE_JOINABLE 0
#define __cs_EXPLICIT_SCHED 0
#define __cs_INHERIT_SCHED 0
#define __cs_MUTEX_DEFAULT 0
#define __cs_MUTEX_ERRORCHECK 0
#define __cs_MUTEX_NORMAL 0
#define __cs_MUTEX_RECURSIVE 0
#define __cs_MUTEX_ROBUST 0
#define __cs_MUTEX_STALLED 0
#define __cs_ONCE_INIT 0
#define __cs_PRIO_INHERIT 0
#define __cs_PRIO_NONE 0
#define __cs_PRIO_PROTECT 0
#define __cs_PROCESS_SHARED 0
#define __cs_PROCESS_PRIVATE 0
#define __cs_SCOPE_PROCESS 0
#define __cs_SCOPE_SYSTEM 0
int __VERIFIER_nondet_int();
int nondet_int();
unsigned int __VERIFIER_nondet_uint();
unsigned int nondet_uint();
_Bool __VERIFIER_nondet_bool();
_Bool nondet_bool();
char __VERIFIER_nondet_char();
char nondet_char();
unsigned char __VERIFIER_nondet_uchar();
unsigned char nondet_uchar();
//#include <stdio.h>
//#include <stdlib.h>
#define THREADS 4
#define ROUNDS 2
#define STOP_VOID(A) return;
#define STOP_NONVOID(A) return 0;
#define IF(T,A,B) if ((__cs_pc[T] > A)  |  (A >= __cs_pc_cs[T])) goto B;
#ifndef NULL
#define NULL 0
#endif
                         
                         _Bool __cs_loop_check = (1);
                         
                         unsigned __CPROVER_bitvector[1] __cs_active_thread[THREADS + 1] = {1};
                         
                         unsigned __CPROVER_bitvector[3] __cs_pc[THREADS + 1];
                         
                         unsigned __CPROVER_bitvector[3] __cs_pc_cs[THREADS + 1];
                         
                         unsigned __CPROVER_bitvector[3] __cs_thread_index;

                         unsigned __CPROVER_bitvector[1] __cs_disable_thread[THREADS+1] = {0};   //add
                         int rwr_tmp1;
                         int rwr_tmp2;
                         int rwr_tmp3;
                         int rwr_tmp4;
                         int rwr_tmp1_num;
                         int rwr_tmp2_num;
                         int rwr_tmp3_num;
                         int rwr_tmp4_num;
                         int rwr_r1;
                         int rwr_r2;
                         int rwr_r3;
                         int rwr_r4;

                         
                         unsigned __CPROVER_bitvector[3] __cs_last_thread;
                         
                         unsigned __CPROVER_bitvector[3] __cs_thread_lines[] = {4, 2, 7, 3, 1};
                         
                         void *__cs_threadargs[THREADS + 1];
                         
                         typedef int cspthread_key_t;
                         
                         cspthread_key_t __cs_keys[1][THREADS + 2];
                         
                         void (*__cs_key_destructor[1])(void *);
                         
                         void pthread_exit(void *__cs_value_ptr)
                         {
                                   
                                   if ((__cs_key_destructor[0] != 0) && (__cs_keys[0][__cs_thread_index + 1] != 0))
                                   {
                                             
                                             __cs_key_destructor[0]((void *) __cs_keys[0][__cs_thread_index + 1]);
                                   }
                         
                         }
                         
                         
                         typedef int pthread_t;
                         
                         typedef unsigned char unsigned8;
                         
                         typedef unsigned short unsigned16;
                         
                         typedef unsigned int unsigned32;
                         
                         typedef unsigned long long unsigned64;
                         
                         typedef signed char signed8;
                         
                         typedef signed short signed16;
                         
                         typedef signed int signed32;
                         
                         typedef signed long long signed64;
                         
                         void idlerun();
                         
                         void enable_isr(int);
                         
                         void disable_isr(int);
                         
                         void init();
                         
                         int rand();
                         
                         int svp_simple_014_001_global_var1 = (0x01);
                         
                         int svp_simple_014_001_global_var2 = (0x02);
                         
                         int svp_simple_014_001_global_flag1 = (0);
                         
                         int svp_simple_014_001_global_flag2 = (1);
                         
                         void *main_task_0(void *__cs_param_main_task_arg)
                         {
                                   {
                                             
IF(1,0,tmain_task_0_1)
                                             
                                             enable_isr(- 1);
                                             
                                             __cs_disable_thread[2] = 0;
                         
                                             
                                             __cs_disable_thread[3] = 0;
                         
                                             
                                             __cs_disable_thread[4] = 0;
                         
                                             
                                             __cs_disable_thread[0] = 0;
                         
                                             
                                             ;
                                   }
                                   
                                   ;
                                   {
                                             
                                             static int __cs_local_main_task_i;
                                             __cs_local_main_task_i = 0;
                         
                                             
                                             __cs_local_main_task_i = 0;
                         
                                             {
                                             }
                                             
                                             ;
                                             
                                             __cs_local_main_task_i = __cs_local_main_task_i + 1;
                         
                                             {
                                             }
                                             
                                             ;
                                             
                                             __cs_local_main_task_i = __cs_local_main_task_i + 1;
                         
                                             
                                             static _Bool __cs_loop_1;
                                             __cs_loop_1 = __cs_local_main_task_i <= 100;
                         
                                             
tmain_task_0_1: IF(1,1,tmain_task_0_2)
                                             
                                             __CPROVER_assume(! __cs_loop_1);
                                             
                                             __exit_loop_1:
                                             __CPROVER_assume(__cs_pc_cs[1] >= 2);
                         
                                             
                                             ;
                                             ;
                                   }
                                   
                                   ;
                                   
                                   __exit_main_task:
                                   __CPROVER_assume(__cs_pc_cs[1] >= 2);
                         
                                   
                                   ;
                                   ;
                                   
tmain_task_0_2: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *svp_simple_014_001_isr_1_0(void *__cs_param_svp_simple_014_001_isr_1_arg)
                         
                         {
                                   
IF(2,0,tsvp_simple_014_001_isr_1_0_1)
                                   
                                   disable_isr(3);
                                   
                                   __cs_disable_thread[4] = 1;
                                   
                                   ;
                                   
                                   static int __cs_local_svp_simple_014_001_isr_1_reader1;
                                   
                                   static int __cs_local_svp_simple_014_001_isr_1_reader2;
                                   
                                   static int __cs_local_svp_simple_014_001_isr_1_reader3;
                                   
                                   static int __cs_local_svp_simple_014_001_isr_1_reader4;
                         
                                             {
                                             
                                             static int __cs_local_svp_simple_014_001_isr_1_i;
                                             
                                             __cs_local_svp_simple_014_001_isr_1_i = 0;
                         
                                                                 {
                                                       
                                                       static _Bool __cs_local_svp_simple_014_001_isr_1___cs_tmp_if_cond_0;
                                                       
                                                       __cs_local_svp_simple_014_001_isr_1___cs_tmp_if_cond_0 = __cs_local_svp_simple_014_001_isr_1_i == 99;
                                                       
                                                       if (__cs_local_svp_simple_014_001_isr_1___cs_tmp_if_cond_0)
                         
                                                                                     {
                                                                 
tsvp_simple_014_001_isr_1_0_1: IF(2,1,tsvp_simple_014_001_isr_1_0_2)
                                                                 
                                                                 __cs_local_svp_simple_014_001_isr_1_reader1 = svp_simple_014_001_global_var1;
                         
                                             rwr_r1 = svp_simple_014_001_global_var1; //add
                                             if(rwr_tmp2_num != 0){  //add
                                             	 assert(rwr_r1 == rwr_tmp2);
                                             }
                                             rwr_tmp2_num++;
                                             rwr_tmp2 = rwr_r1; 
                         
                                                       }
                         
                                                       
                                                       __CPROVER_assume(__cs_pc_cs[2] >= 2);
                                                       ;
                                             }
                                             
                                             ;
                                             
                                             __cs_local_svp_simple_014_001_isr_1_i = __cs_local_svp_simple_014_001_isr_1_i + 1;
                         
                                                                 {
                                                       
                                                       static _Bool __cs_local_svp_simple_014_001_isr_1___cs_tmp_if_cond_0;
                                                       
                                                       __cs_local_svp_simple_014_001_isr_1___cs_tmp_if_cond_0 = __cs_local_svp_simple_014_001_isr_1_i == 99;
                                                       
                                                       if (__cs_local_svp_simple_014_001_isr_1___cs_tmp_if_cond_0)
                         
                                                                                     {
                                                                 
tsvp_simple_014_001_isr_1_0_2: IF(2,2,tsvp_simple_014_001_isr_1_0_3)
                                                                 
                                                                 __cs_local_svp_simple_014_001_isr_1_reader1 = svp_simple_014_001_global_var1;
                         
                                             rwr_r2 = svp_simple_014_001_global_var1; //add
                                             if(rwr_tmp2_num != 0){  //add
                                             	 assert(rwr_r2 == rwr_tmp2);
                                             }
                                             rwr_tmp2_num++;
                                             rwr_tmp2 = rwr_r2; 
                         
                                                       }
                         
                                                       
                                                       __CPROVER_assume(__cs_pc_cs[2] >= 3);
                                                       ;
                                             }
                                             
                                             ;
                                             
                                             __cs_local_svp_simple_014_001_isr_1_i = __cs_local_svp_simple_014_001_isr_1_i + 1;
                                             
                                             static _Bool __cs_loop_2;
                                             __cs_loop_2 = __cs_local_svp_simple_014_001_isr_1_i < 100;
                                             
tsvp_simple_014_001_isr_1_0_3: IF(2,3,tsvp_simple_014_001_isr_1_0_4)
                                             
                                             __CPROVER_assume(! __cs_loop_2);
                                             
                                             __exit_loop_2:
                                             __CPROVER_assume(__cs_pc_cs[2] >= 4);
                         
                                             
                                             ;
                                             ;
                                   }
                                   
                                   ;
                                   
tsvp_simple_014_001_isr_1_0_4: IF(2,4,tsvp_simple_014_001_isr_1_0_5)
                                   
                                   __cs_local_svp_simple_014_001_isr_1_reader2 = svp_simple_014_001_global_var1;
                         
                                             rwr_r3 = svp_simple_014_001_global_var1; //add
                                             if(rwr_tmp2_num != 0){  //add
                                             	 assert(rwr_r3 == rwr_tmp2);
                                             }
                                             rwr_tmp2_num++;
                                             rwr_tmp2 = rwr_r3; 
                         
                                   
tsvp_simple_014_001_isr_1_0_5: IF(2,5,tsvp_simple_014_001_isr_1_0_6)
                                   
                                   __cs_local_svp_simple_014_001_isr_1_reader3 = svp_simple_014_001_global_var2;
                                   
tsvp_simple_014_001_isr_1_0_6: IF(2,6,tsvp_simple_014_001_isr_1_0_7)
                                   
                                   __cs_local_svp_simple_014_001_isr_1_reader4 = svp_simple_014_001_global_var2;
                                   
                                   __exit_svp_simple_014_001_isr_1:
                                   __CPROVER_assume(__cs_pc_cs[2] >= 7);
                         
                                   
                                   ;
                                   ;
                                   
tsvp_simple_014_001_isr_1_0_7: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *svp_simple_014_001_isr_2_0(void *__cs_param_svp_simple_014_001_isr_2_arg)
                         
                         {
                                   
IF(3,0,tsvp_simple_014_001_isr_2_0_1)
                                   
                                   svp_simple_014_001_global_flag1 = 1;
                                   
tsvp_simple_014_001_isr_2_0_1: IF(3,1,tsvp_simple_014_001_isr_2_0_2)
                                   
                                   svp_simple_014_001_global_flag2 = 0;
                                   
                                   enable_isr(3);
                                   
                                   __cs_disable_thread[4] = 0;
                                   
                                   ;
                         
                                             {
                                             
                                             static int __cs_local_svp_simple_014_001_isr_2_i;
                                             __cs_local_svp_simple_014_001_isr_2_i = 0;
                                             
                                             __cs_local_svp_simple_014_001_isr_2_i = 0;
                         
                                                                 {
                                             }
                                             
                                             ;
                                             
                                             __cs_local_svp_simple_014_001_isr_2_i = __cs_local_svp_simple_014_001_isr_2_i + 1;
                         
                                                                 {
                                             }
                                             
                                             ;
                                             
                                             __cs_local_svp_simple_014_001_isr_2_i = __cs_local_svp_simple_014_001_isr_2_i + 1;
                                             
                                             static _Bool __cs_loop_3;
                                             __cs_loop_3 = __cs_local_svp_simple_014_001_isr_2_i <= 100;
                                             
tsvp_simple_014_001_isr_2_0_2: IF(3,2,tsvp_simple_014_001_isr_2_0_3)
                                             
                                             __CPROVER_assume(! __cs_loop_3);
                                             
                                             __exit_loop_3:
                                             __CPROVER_assume(__cs_pc_cs[3] >= 3);
                         
                                             
                                             ;
                                             ;
                                   }
                                   
                                   ;
                                   
                                   __exit_svp_simple_014_001_isr_2:
                                   __CPROVER_assume(__cs_pc_cs[3] >= 3);
                         
                                   
                                   ;
                                   ;
                                   
tsvp_simple_014_001_isr_2_0_3: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *svp_simple_014_001_isr_3_0(void *__cs_param_svp_simple_014_001_isr_3_arg)
                         
                         {
                                   
IF(4,0,tsvp_simple_014_001_isr_3_0_1)
                                   
                                   static _Bool __cs_local_svp_simple_014_001_isr_3___cs_tmp_if_cond_1;
                                   
                                   __cs_local_svp_simple_014_001_isr_3___cs_tmp_if_cond_1 = svp_simple_014_001_global_flag1 == 1;
                                   
                                   if (__cs_local_svp_simple_014_001_isr_3___cs_tmp_if_cond_1)
                         
                                             {
                                             svp_simple_014_001_global_var1 = 0x09;
                                   }
                         
                                   
                                   ;
                                   
                                   static _Bool __cs_local_svp_simple_014_001_isr_3___cs_tmp_if_cond_2;
                                   
                                   __cs_local_svp_simple_014_001_isr_3___cs_tmp_if_cond_2 = svp_simple_014_001_global_flag2 == 1;
                                   
                                   if (__cs_local_svp_simple_014_001_isr_3___cs_tmp_if_cond_2)
                         
                                             {
                                             
                                             svp_simple_014_001_global_var2 = 0x09;
                                   }
                         
                                   
                                   ;
                                   
                                   __exit_svp_simple_014_001_isr_3:
                                   
                                   ;
                         
                                   
                                   ;
                                   
tsvp_simple_014_001_isr_3_0_1: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         
                         int main(void)
                         {
                                   
/* round  0 */
                                   
/* main_task_0 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t1_r0;
                                   
                                   if (__cs_disable_thread[1] != 1)
                                   {
                                             __cs_thread_index = 1;
                                             
                                             __cs_pc_cs[1] = __cs_tmp_t1_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] > 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 2);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                             
                                             __cs_pc[1] = __cs_pc_cs[1];
                                   }
                         
                                   
/* svp_simple_014_001_isr_1_0 random prio:1 */
                                   
                                   unsigned __CPROVER_bitvector[3] __cs_tmp_t2_r0;
                                   
                                   if ((__cs_disable_thread[2] != 1) && ((__cs_pc[3] == 0) || (__cs_pc[3] == 3)))
                                   {
                                             
                                             __cs_thread_index = 2;
                                             
                                             __cs_pc_cs[2] = __cs_tmp_t2_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] <= 7);
                                             
                                             svp_simple_014_001_isr_1_0(__cs_threadargs[2]);
                                             
                                             __cs_pc[2] = __cs_pc_cs[2];
                                   }
                         
                                   
/* svp_simple_014_001_isr_2_0 random prio:2 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t3_r0;
                                   
                                   if (__cs_disable_thread[3] != 1)
                                   {
                                             
                                             __cs_thread_index = 3;
                                             
                                             __cs_pc_cs[3] = __cs_tmp_t3_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] <= 3);
                                             
                                             svp_simple_014_001_isr_2_0(__cs_threadargs[3]);
                                             
                                             __cs_pc[3] = __cs_pc_cs[3];
                                   }
                         
                                   
/* svp_simple_014_001_isr_3_0 random prio:3 */
                                   
                                   unsigned __CPROVER_bitvector[1] __cs_tmp_t4_r0;
                                   
                                   if (__cs_disable_thread[4] != 1)
                                   {
                                             
                                             __cs_thread_index = 4;
                                             
                                             __cs_pc_cs[4] = __cs_tmp_t4_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[4] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[4] <= 1);
                                             
                                             svp_simple_014_001_isr_3_0(__cs_threadargs[4]);
                                             
                                             __cs_pc[4] = __cs_pc_cs[4];
                                   }
                         
                                   
/* round  1 */
                                   
/* main */
                                   
/* main_task_0 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t1_r1;
                                   
                                   if (((__cs_disable_thread[1] != 1) && ((__cs_pc[2] == 0) || (__cs_pc[2] == 7))) && ((__cs_pc[3] == 0) || (__cs_pc[3] == 3)))
                                   {
                                             
                                             __cs_thread_index = 1;
                                             
                                             __cs_pc_cs[1] = __cs_tmp_t1_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 2);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                             
                                             __cs_pc[1] = __cs_pc_cs[1];
                                   }
                         
                                   
/* svp_simple_014_001_isr_1_0 random prio: 1 */
                                   
                                   unsigned __CPROVER_bitvector[3] __cs_tmp_t2_r1;
                                   
                                   if ((__cs_disable_thread[2] != 1) && ((__cs_pc[3] == 0) || (__cs_pc[3] == 3)))
                                   {
                                             
                                             __cs_thread_index = 2;
                                             
                                             __cs_pc_cs[2] = __cs_tmp_t2_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] <= 7);
                                             
                                             svp_simple_014_001_isr_1_0(__cs_threadargs[2]);
                                             
                                             __cs_pc[2] = __cs_pc_cs[2];
                                   }
                         
                                   
/* svp_simple_014_001_isr_2_0 random prio: 2 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t3_r1;
                                   
                                   if (__cs_disable_thread[3] != 1)
                                   {
                                             
                                             __cs_thread_index = 3;
                                             
                                             __cs_pc_cs[3] = __cs_tmp_t3_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] >= __cs_pc[3]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] <= 3);
                                             
                                             svp_simple_014_001_isr_2_0(__cs_threadargs[3]);
                                             
                                             __cs_pc[3] = __cs_pc_cs[3];
                                   }
                         
                                   
/* svp_simple_014_001_isr_3_0 random prio: 3 */
                                   
                                   unsigned __CPROVER_bitvector[1] __cs_tmp_t4_r1;
                                   
                                   if (__cs_disable_thread[4] != 1)
                                   {
                                             
                                             __cs_thread_index = 4;
                                             
                                             __cs_pc_cs[4] = __cs_tmp_t4_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[4] >= __cs_pc[4]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[4] <= 1);
                                             
                                             svp_simple_014_001_isr_3_0(__cs_threadargs[4]);
                                             
                                             __cs_pc[4] = __cs_pc_cs[4];
                                   }
                         
                                   
                                   unsigned int __cs_tmp_t1_r2;
                                   
                                   if (__cs_disable_thread[1] != 1)
                                   {
                                             
                                             __cs_thread_index = 1;
                                             
                                             __cs_pc_cs[1] = __cs_tmp_t1_r2;
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 2);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                   }
                         
                                   
                                   return (0);
                         }
                         
                         

