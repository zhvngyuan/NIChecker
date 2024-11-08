/***
 ***  generated by CSeq [ 0000 / 0000 ] 2023-10-22 13:21:08
 ***
 ***                      5860 2020.03.24 core/merger
 ***                      F847 2020.05.28 core/module
 ***                      A857 2020.11.25 core/parser
 ***                      690A 2020.03.28 core/parser_old
 ***                      AA19 2020.04.14 core/utils
 ***
 ***  params:
 ***    --input /home/dell/zyworkspace/nichecker/Experiment/Testrealpro/logger1/_mt_main.c --unwind 2 --rounds 2
 ***
 ***  mode:
 ***    rww
 ***    int
 ***    tickCounter
 ***
 ***  use loop abstraction:
 ***    True
 ***
 ***  modules:
 ***    48DE workarounds (sv-comp)
 ***    5FB8 functiontracker ()
 ***    AFDA preinstrumenter (sv-comp error-label)
 ***    6C2E spinlock ()
 ***    D804 preinliner ()
 ***    12E0 inliner (atomic-parameters simplify-args)
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
 ***    0ECE lazyseq (rounds contexts threads schedule deadlock norobin preanalysis nondet-condvar-wakeups)
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
#define THREADS 3
#define ROUNDS 2
#define STOP_VOID(A) return;
#define STOP_NONVOID(A) return 0;
#define IF(T,A,B) if ((__cs_pc[T] > A)  |  (A >= __cs_pc_cs[T])) goto B;
#ifndef NULL
#define NULL 0
#endif
                         
                         _Bool __cs_loop_check = (1);
                         
                         unsigned __CPROVER_bitvector[1] __cs_active_thread[THREADS + 1] = {1};
                         
                         unsigned __CPROVER_bitvector[2] __cs_pc[THREADS + 1];
                         
                         unsigned __CPROVER_bitvector[2] __cs_pc_cs[THREADS + 1];
                         
                         unsigned __CPROVER_bitvector[3] __cs_thread_index;

                         unsigned __CPROVER_bitvector[1] __cs_disable_thread[THREADS+1] = {0};   //add
                         int rww_r_tmp1;
                         int rww_r_tmp2;
                         int rww_r_tmp3;
                         int rww_r_tmp1_num;
                         int rww_r_tmp2_num;
                         int rww_r_tmp3_num;
                         int rww_w1;
                         int rww_w2;
                         int rww_w3;

                         
                         unsigned __CPROVER_bitvector[3] __cs_last_thread;
                         
                         unsigned __CPROVER_bitvector[2] __cs_thread_lines[] = {1, 2, 3, 1};
                         
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
                         
                         int numberOfRecords;
                         
                         int records[64];
                         
                         int msgBuffer[64];
                         
                         int intervalCounter;
                         
                         int tickCounter;

                         int* __cs_variable_address = &tickCounter;   //add 
                         
                         int interval;
                         
                         int startTime;
                         
                         int decodingStatus;
                         
                         int cmd;
                         
                         int sendit;
                         
                         int systemState;
                         
                         int rspStatus;
                         
                         int cnt1;
                         
                         int cnt2;
                         
                         int cnt3;
                         
                         void *task_communicate_isr_0(void *__cs_param_task_communicate_isr_arg)
                         
                         {
                                   
IF(3,0,ttask_communicate_isr_0_1)
                                   
                                   static int __cs_local_task_communicate_isr__startTime;
                                   __cs_local_task_communicate_isr__startTime = 1;
                                   
                                   static int __cs_local_task_communicate_isr__interval;
                                   __cs_local_task_communicate_isr__interval = 1;
                                   
                                   cmd = nondet_rand();
                                   
                                   rspStatus = nondet_rand();
                                   
                                   static _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_0;
                                   
                                   __cs_local_task_communicate_isr___cs_tmp_if_cond_0 = rspStatus == 1;
                                   
                                   if (__cs_local_task_communicate_isr___cs_tmp_if_cond_0)
                         
                                             {
                                             
                                             static _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_1;
                                             
                                             __cs_local_task_communicate_isr___cs_tmp_if_cond_1 = cmd == 2;
                                             
                                             if (__cs_local_task_communicate_isr___cs_tmp_if_cond_1)
                         
                                                                 {
                                                       
                                                       static _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_2;
                                                       
                                                       __cs_local_task_communicate_isr___cs_tmp_if_cond_2 = systemState != 1;
                                                       
                                                       if (__cs_local_task_communicate_isr___cs_tmp_if_cond_2)
                         
                                                                                     {
                                                       }
                                                       else
                         
                                                                                     {
                                                                 
                                                                 systemState = 0;
                                                       }
                         
                                                       
                                                       ;
                                             }
                         
                                             
                                             ;
                                             
                                             static _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_3;
                                             
                                             __cs_local_task_communicate_isr___cs_tmp_if_cond_3 = cmd == 0;
                                             
                                             if (__cs_local_task_communicate_isr___cs_tmp_if_cond_3)
                         
                                                                 {
                                                       
                                                       static _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_4;
                                                       
                                                       __cs_local_task_communicate_isr___cs_tmp_if_cond_4 = systemState != 0;
                                                       
                                                       if (__cs_local_task_communicate_isr___cs_tmp_if_cond_4)
                         
                                                                                     {
                                                       }
                                                       else
                         
                                                                                     {
                                                                 
                                                                 static int __cs_local_task_communicate_isr_tmp_num;
                                                                 __cs_local_task_communicate_isr_tmp_num = numberOfRecords + 1;
                                                                 tickCounter = 1;
                                                                 
                                                                 systemState = 1;
                                                       }
                         
                                                       
                                                       ;
                                             }
                         
                                             
                                             ;
                                   }
                         
                                   
                                   ;
                                   
                                   __exit_task_communicate_isr:
                                   
                                   ;
                         
                                   
                                   ;
                                   
ttask_communicate_isr_0_1: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *main_task_0(void *__cs_param_main_task_arg)
                         {
                                   
IF(1,0,tmain_task_0_1)
                                   
                                   systemState = 0;
                         
                                   
tmain_task_0_1: IF(1,1,tmain_task_0_2)
                                   
                                   goto __exit_main_task;
                                   ;
                                   
                                   ;
                                   ;
                                   
                                   __exit_main_task:
                                   
                                   ;
                         
                                   
                                   ;
                                   
tmain_task_0_2: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *task_measure_isr_0(void *__cs_param_task_measure_isr_arg)
                         
                         {
                                   
IF(2,0,ttask_measure_isr_0_1)
                                   
                                   static int __cs_temporary_0;
                                   __cs_temporary_0 = 0;
                                   
                                   __cs_temporary_0 = tickCounter + 1;
                         
                                             rww_r_tmp2_num++; //add
                                             rww_r_tmp2 = tickCounter; //add
                         
                                   
ttask_measure_isr_0_1: IF(2,1,ttask_measure_isr_0_2)
                         
                                             rww_w1 = tickCounter; //add
                                             if(rww_r_tmp2_num != 0){
                                             	 assert(rww_w1==rww_r_tmp2);
                                             	 rww_r_tmp2_num = 0;
                                             }
                         
                                   tickCounter = __cs_temporary_0;
                                   
                                   static int __cs_local_task_measure_isr_tmp_tickCounter;
                                   __cs_local_task_measure_isr_tmp_tickCounter = tickCounter;
                         
                                             rww_r_tmp2_num++; //add
                                             rww_r_tmp2 = tickCounter; //add
                         
                                   
ttask_measure_isr_0_2: IF(2,2,ttask_measure_isr_0_3)
                                   
                                   static int __cs_local_task_measure_isr_tmp_interval;
                                   __cs_local_task_measure_isr_tmp_interval = interval;
                                   
                                   static int __cs_local_task_measure_isr_value;
                                   __cs_local_task_measure_isr_value = 1;
                         
                                             rww_w2 = tickCounter; //add
                                             if(rww_r_tmp2_num != 0){
                                             	 assert(rww_w2==rww_r_tmp2);
                                             	 rww_r_tmp2_num = 0;
                                             }
                         
                                   tickCounter = 0;
                                   
                                   __exit_task_measure_isr:
                                   
                                   ;
                         
                                   
                                   ;
                                   
ttask_measure_isr_0_3: 
                                   
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
                         
                                   
/* task_measure_isr_0 random prio:2 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t2_r0;
                                   
                                   if (__cs_disable_thread[2] != 1)
                                   {
                                             
                                             __cs_thread_index = 2;
                                             
                                             __cs_pc_cs[2] = __cs_tmp_t2_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] <= 3);
                                             
                                             task_measure_isr_0(__cs_threadargs[2]);
                                             
                                             __cs_pc[2] = __cs_pc_cs[2];
                                   }
                         
                                   
/* task_communicate_isr_0 random prio:5 */
                                   
                                   unsigned __CPROVER_bitvector[1] __cs_tmp_t3_r0;
                                   
                                   if (__cs_disable_thread[3] != 1)
                                   {
                                             
                                             __cs_thread_index = 3;
                                             
                                             __cs_pc_cs[3] = __cs_tmp_t3_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] <= 1);
                                             
                                             task_communicate_isr_0(__cs_threadargs[3]);
                                             
                                             __cs_pc[3] = __cs_pc_cs[3];
                                   }
                         
                                   
/* round  1 */
                                   
/* main */
                                   
/* main_task_0 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t1_r1;
                                   
                                   if ((__cs_disable_thread[1] != 1) && ((__cs_pc[2] == 0) || (__cs_pc[2] == 3)))
                                   {
                                             
                                             __cs_thread_index = 1;
                                             
                                             __cs_pc_cs[1] = __cs_tmp_t1_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 2);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                             
                                             __cs_pc[1] = __cs_pc_cs[1];
                                   }
                         
                                   
/* task_measure_isr_0 random prio: 2 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t2_r1;
                                   
                                   if (__cs_disable_thread[2] != 1)
                                   {
                                             
                                             __cs_thread_index = 2;
                                             
                                             __cs_pc_cs[2] = __cs_tmp_t2_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] <= 3);
                                             
                                             task_measure_isr_0(__cs_threadargs[2]);
                                             
                                             __cs_pc[2] = __cs_pc_cs[2];
                                   }
                         
                                   
/* task_communicate_isr_0 random prio: 5 */
                                   
                                   unsigned __CPROVER_bitvector[1] __cs_tmp_t3_r1;
                                   
                                   if (__cs_disable_thread[3] != 1)
                                   {
                                             
                                             __cs_thread_index = 3;
                                             
                                             __cs_pc_cs[3] = __cs_tmp_t3_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] >= __cs_pc[3]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] <= 1);
                                             
                                             task_communicate_isr_0(__cs_threadargs[3]);
                                             
                                             __cs_pc[3] = __cs_pc_cs[3];
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
                         
                         

