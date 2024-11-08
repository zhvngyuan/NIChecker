/***
 ***  generated by CSeq [ 0000 / 0000 ] 2023-10-22 13:21:58
 ***
 ***                      5860 2020.03.24 core/merger
 ***                      F847 2020.05.28 core/module
 ***                      A857 2020.11.25 core/parser
 ***                      690A 2020.03.28 core/parser_old
 ***                      AA19 2020.04.14 core/utils
 ***
 ***  params:
 ***    --input /home/dell/zyworkspace/nichecker/Experiment/Testrealpro/blink3/_mt_main.c --unwind 2 --rounds 2
 ***
 ***  mode:
 ***    wwr
 ***    int
 ***    timerCount
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
#define THREADS 6
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
                         int wwr_w_tmp1;
                         int wwr_w_tmp2;
                         int wwr_w_tmp3;
                         int wwr_w_tmp4;
                         int wwr_w_tmp5;
                         int wwr_w_tmp6;
                         int wwr_w_tmp1_num;
                         int wwr_w_tmp2_num;
                         int wwr_w_tmp3_num;
                         int wwr_w_tmp4_num;
                         int wwr_w_tmp5_num;
                         int wwr_w_tmp6_num;
                         int wwr_r1;
                         int wwr_r2;
                         int wwr_r3;
                         int wwr_r4;

                         
                         unsigned __CPROVER_bitvector[3] __cs_last_thread;
                         
                         unsigned __CPROVER_bitvector[3] __cs_thread_lines[] = {1, 3, 4, 2, 2, 2, 1};
                         
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
                         
                         unsigned int timerCount = (0);
                         
                         int P1OUT;
                         
                         int LED_0;
                         
                         int LED_1;
                         
                         int WDTCLT;
                         
                         int WDTPW;
                         
                         int WDTCTL;
                         
                         int WDTHOLD;
                         
                         int LED_DIR;
                         
                         int LED_OUT;
                         
                         int CCTL0;
                         
                         int CCIE;
                         
                         int TACTL;
                         
                         int TASSEL_2;
                         
                         int MC_2;
                         
                         int cnt1;
                         
                         int cnt2;
                         
                         int cnt3;
                         
                         int cnt4;
                         
                         int cnt5;
                         
                         void *Timer_Reset_isr_0(void *__cs_param_Timer_Reset_isr_arg)
                         
                         {
                                   
IF(6,0,tTimer_Reset_isr_0_1)
                                   timerCount = 0;
                                   
                                   __exit_Timer_Reset_isr:
                                   
                                   ;
                         
                                   
                                   ;
                                   
tTimer_Reset_isr_0_1: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *Timer_B_isr_0(void *__cs_param_Timer_B_isr_arg)
                         
                         {
                                   
IF(3,0,tTimer_B_isr_0_1)
                                   timerCount = 1;
                         
                                             wwr_w_tmp3_num++; //add
                                             wwr_w_tmp3 = timerCount; //add
                         
                                   
tTimer_B_isr_0_1: IF(3,1,tTimer_B_isr_0_2)
                                   
                                   static _Bool __cs_local_Timer_B_isr___cs_tmp_if_cond_1;
                                   
                                   __cs_local_Timer_B_isr___cs_tmp_if_cond_1 = timerCount == 1;
                         
                                             wwr_r1 = timerCount; //add
                                             if(wwr_w_tmp3_num != 0){
                                             	 assert(wwr_r1==wwr_w_tmp3);
                                             	 wwr_w_tmp3_num = 0;
                                             }
                         
                                   
                                   if (__cs_local_Timer_B_isr___cs_tmp_if_cond_1)
                         
                                             {
                                   }
                         
                                   
                                   ;
                                   
                                   __exit_Timer_B_isr:
                                   
                                   ;
                         
                                   
                                   ;
                                   
tTimer_B_isr_0_2: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *main_task_0(void *__cs_param_main_task_arg)
                         {
                                   
IF(1,0,tmain_task_0_1)
                                   
                                   disable_isr(- 1);
                                   
                                   __cs_disable_thread[5] = 1;
                         
                                   
                                   __cs_disable_thread[6] = 1;
                         
                                   
                                   __cs_disable_thread[4] = 1;
                         
                                   
                                   __cs_disable_thread[3] = 1;
                         
                                   
                                   __cs_disable_thread[2] = 1;
                         
                                   
                                   __cs_disable_thread[0] = 1;
                         
                                   
                                   ;
                                   timerCount = 0;
                         
                                             wwr_w_tmp1_num++; //add
                                             wwr_w_tmp1 = timerCount; //add
                         
                         
                                   
tmain_task_0_1: IF(1,1,tmain_task_0_2)
                                   
                                   enable_isr(- 1);
                                   
                                   __cs_disable_thread[5] = 0;
                         
                                   
                                   __cs_disable_thread[6] = 0;
                         
                                   
                                   __cs_disable_thread[4] = 0;
                         
                                   
                                   __cs_disable_thread[3] = 0;
                         
                                   
                                   __cs_disable_thread[2] = 0;
                         
                                   
                                   __cs_disable_thread[0] = 0;
                         
                                   
                                   ;
                                   
tmain_task_0_2: IF(1,2,tmain_task_0_3)
                                   
                                   goto __exit_main_task;
                                   ;
                                   
                                   ;
                                   ;
                                   
                                   __exit_main_task:
                                   
                                   ;
                         
                                   
                                   ;
                                   
tmain_task_0_3: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *Timer_Force_isr_0(void *__cs_param_Timer_Force_isr_arg)
                         
                         {
                                   
IF(5,0,tTimer_Force_isr_0_1)
                                   
                                   static unsigned int __cs_temporary_0;
                                   __cs_temporary_0 = 0;
                                   
                                   __cs_temporary_0 = timerCount + 1;
                         
                                                                 if(wwr_w_tmp5_num != 0){
                                             	 assert(wwr_r1==wwr_w_tmp5);
                                             	 wwr_w_tmp5_num = 0;
                                             }
                         
                                   timerCount = __cs_temporary_0;
                         
                                             wwr_w_tmp5_num++; //add
                                             wwr_w_tmp5 = timerCount; //add
                         
                                   
tTimer_Force_isr_0_1: IF(5,1,tTimer_Force_isr_0_2)
                                   
                                   __exit_Timer_Force_isr:
                                   
                                   ;
                         
                                   
                                   ;
                                   
tTimer_Force_isr_0_2: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *Timer_C_isr_0(void *__cs_param_Timer_C_isr_arg)
                         
                         {
                                   
IF(4,0,tTimer_C_isr_0_1)
                                   timerCount = 1;
                         
                                             wwr_w_tmp4_num++; //add
                                             wwr_w_tmp4 = timerCount; //add
                         
                                   
tTimer_C_isr_0_1: IF(4,1,tTimer_C_isr_0_2)
                                   
                                   static _Bool __cs_local_Timer_C_isr___cs_tmp_if_cond_0;
                                   
                                   __cs_local_Timer_C_isr___cs_tmp_if_cond_0 = timerCount == 1;
                         
                                             wwr_r2 = timerCount; //add
                                             if(wwr_w_tmp4_num != 0){
                                             	 assert(wwr_r2==wwr_w_tmp4);
                                             	 wwr_w_tmp4_num = 0;
                                             }
                         
                                   
                                   if (__cs_local_Timer_C_isr___cs_tmp_if_cond_0)
                         
                                             {
                                   }
                         
                                   
                                   ;
                                   
                                   __exit_Timer_C_isr:
                                   
                                   ;
                         
                                   
                                   ;
                                   
tTimer_C_isr_0_2: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *Timer_A_isr_0(void *__cs_param_Timer_A_isr_arg)
                         
                         {
                                   
IF(2,0,tTimer_A_isr_0_1)
                                   
                                   static unsigned int __cs_temporary_0;
                                   __cs_temporary_0 = 0;
                                   
tTimer_A_isr_0_1: IF(2,1,tTimer_A_isr_0_2)
                                   
                                   __cs_temporary_0 = timerCount + 1;
                         
                                                                 if(wwr_w_tmp2_num != 0){
                                             	 assert(wwr_r2==wwr_w_tmp2);
                                             	 wwr_w_tmp2_num = 0;
                                             }
                         
                                   
tTimer_A_isr_0_2: IF(2,2,tTimer_A_isr_0_3)
                                   timerCount = __cs_temporary_0;
                         
                                             wwr_w_tmp2_num++; //add
                                             wwr_w_tmp2 = timerCount; //add
                         
                                   
tTimer_A_isr_0_3: IF(2,3,tTimer_A_isr_0_4)
                                   
                                   static _Bool __cs_local_Timer_A_isr___cs_tmp_if_cond_2;
                                   
                                   __cs_local_Timer_A_isr___cs_tmp_if_cond_2 = timerCount == 1;
                         
                                             wwr_r3 = timerCount; //add
                                             if(wwr_w_tmp2_num != 0){
                                             	 assert(wwr_r3==wwr_w_tmp2);
                                             	 wwr_w_tmp2_num = 0;
                                             }
                         
                                   
                                   if (__cs_local_Timer_A_isr___cs_tmp_if_cond_2)
                         
                                             {
                                   }
                         
                                   
                                   ;
                                   
                                   __exit_Timer_A_isr:
                                   
                                   ;
                         
                                   
                                   ;
                                   
tTimer_A_isr_0_4: 
                                   
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
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 3);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                             
                                             __cs_pc[1] = __cs_pc_cs[1];
                                   }
                         
                                   
/* Timer_A_isr_0 random prio:2 */
                                   
                                   unsigned __CPROVER_bitvector[3] __cs_tmp_t2_r0;
                                   
                                   if ((((__cs_disable_thread[2] != 1) && ((__cs_pc[3] == 0) || (__cs_pc[3] == 2))) && ((__cs_pc[4] == 0) || (__cs_pc[4] == 2))) && ((__cs_pc[5] == 0) || (__cs_pc[5] == 2)))
                                   {
                                             
                                             __cs_thread_index = 2;
                                             
                                             __cs_pc_cs[2] = __cs_tmp_t2_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] <= 4);
                                             
                                             Timer_A_isr_0(__cs_threadargs[2]);
                                             
                                             __cs_pc[2] = __cs_pc_cs[2];
                                   }
                         
                                   
/* Timer_B_isr_0 random prio:2 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t3_r0;
                                   
                                   if ((((__cs_disable_thread[3] != 1) && ((__cs_pc[2] == 0) || (__cs_pc[2] == 4))) && ((__cs_pc[4] == 0) || (__cs_pc[4] == 2))) && ((__cs_pc[5] == 0) || (__cs_pc[5] == 2)))
                                   {
                                             
                                             __cs_thread_index = 3;
                                             
                                             __cs_pc_cs[3] = __cs_tmp_t3_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] <= 2);
                                             
                                             Timer_B_isr_0(__cs_threadargs[3]);
                                             
                                             __cs_pc[3] = __cs_pc_cs[3];
                                   }
                         
                                   
/* Timer_C_isr_0 random prio:4 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t4_r0;
                                   
                                   if (__cs_disable_thread[4] != 1)
                                   {
                                             
                                             __cs_thread_index = 4;
                                             
                                             __cs_pc_cs[4] = __cs_tmp_t4_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[4] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[4] <= 2);
                                             
                                             Timer_C_isr_0(__cs_threadargs[4]);
                                             
                                             __cs_pc[4] = __cs_pc_cs[4];
                                   }
                         
                                   
/* Timer_Force_isr_0 random prio:3 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t5_r0;
                                   
                                   if ((__cs_disable_thread[5] != 1) && ((__cs_pc[4] == 0) || (__cs_pc[4] == 2)))
                                   {
                                             
                                             __cs_thread_index = 5;
                                             
                                             __cs_pc_cs[5] = __cs_tmp_t5_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[5] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[5] <= 2);
                                             
                                             Timer_Force_isr_0(__cs_threadargs[5]);
                                             
                                             __cs_pc[5] = __cs_pc_cs[5];
                                   }
                         
                                   
/* Timer_Reset_isr_0 random prio:5 */
                                   
                                   unsigned __CPROVER_bitvector[1] __cs_tmp_t6_r0;
                                   
                                   if (__cs_disable_thread[6] != 1)
                                   {
                                             
                                             __cs_thread_index = 6;
                                             
                                             __cs_pc_cs[6] = __cs_tmp_t6_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[6] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[6] <= 1);
                                             
                                             Timer_Reset_isr_0(__cs_threadargs[6]);
                                             
                                             __cs_pc[6] = __cs_pc_cs[6];
                                   }
                         
                                   
/* round  1 */
                                   
/* main */
                                   
/* main_task_0 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t1_r1;
                                   
                                   if (((((__cs_disable_thread[1] != 1) && ((__cs_pc[2] == 0) || (__cs_pc[2] == 4))) && ((__cs_pc[3] == 0) || (__cs_pc[3] == 2))) && ((__cs_pc[4] == 0) || (__cs_pc[4] == 2))) && ((__cs_pc[5] == 0) || (__cs_pc[5] == 2)))
                                   {
                                             
                                             __cs_thread_index = 1;
                                             
                                             __cs_pc_cs[1] = __cs_tmp_t1_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 3);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                             
                                             __cs_pc[1] = __cs_pc_cs[1];
                                   }
                         
                                   
/* Timer_A_isr_0 random prio: 2 */
                                   
                                   unsigned __CPROVER_bitvector[3] __cs_tmp_t2_r1;
                                   
                                   if ((((__cs_disable_thread[2] != 1) && ((__cs_pc[3] == 0) || (__cs_pc[3] == 2))) && ((__cs_pc[4] == 0) || (__cs_pc[4] == 2))) && ((__cs_pc[5] == 0) || (__cs_pc[5] == 2)))
                                   {
                                             
                                             __cs_thread_index = 2;
                                             
                                             __cs_pc_cs[2] = __cs_tmp_t2_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] <= 4);
                                             
                                             Timer_A_isr_0(__cs_threadargs[2]);
                                             
                                             __cs_pc[2] = __cs_pc_cs[2];
                                   }
                         
                                   
/* Timer_B_isr_0 random prio: 2 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t3_r1;
                                   
                                   if ((((__cs_disable_thread[3] != 1) && ((__cs_pc[2] == 0) || (__cs_pc[2] == 4))) && ((__cs_pc[4] == 0) || (__cs_pc[4] == 2))) && ((__cs_pc[5] == 0) || (__cs_pc[5] == 2)))
                                   {
                                             
                                             __cs_thread_index = 3;
                                             
                                             __cs_pc_cs[3] = __cs_tmp_t3_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] >= __cs_pc[3]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] <= 2);
                                             
                                             Timer_B_isr_0(__cs_threadargs[3]);
                                             
                                             __cs_pc[3] = __cs_pc_cs[3];
                                   }
                         
                                   
/* Timer_C_isr_0 random prio: 4 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t4_r1;
                                   
                                   if (__cs_disable_thread[4] != 1)
                                   {
                                             
                                             __cs_thread_index = 4;
                                             
                                             __cs_pc_cs[4] = __cs_tmp_t4_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[4] >= __cs_pc[4]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[4] <= 2);
                                             
                                             Timer_C_isr_0(__cs_threadargs[4]);
                                             
                                             __cs_pc[4] = __cs_pc_cs[4];
                                   }
                         
                                   
/* Timer_Force_isr_0 random prio: 3 */
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t5_r1;
                                   
                                   if ((__cs_disable_thread[5] != 1) && ((__cs_pc[4] == 0) || (__cs_pc[4] == 2)))
                                   {
                                             
                                             __cs_thread_index = 5;
                                             
                                             __cs_pc_cs[5] = __cs_tmp_t5_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[5] >= __cs_pc[5]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[5] <= 2);
                                             
                                             Timer_Force_isr_0(__cs_threadargs[5]);
                                             
                                             __cs_pc[5] = __cs_pc_cs[5];
                                   }
                         
                                   
/* Timer_Reset_isr_0 random prio: 5 */
                                   
                                   unsigned __CPROVER_bitvector[1] __cs_tmp_t6_r1;
                                   
                                   if (__cs_disable_thread[6] != 1)
                                   {
                                             
                                             __cs_thread_index = 6;
                                             
                                             __cs_pc_cs[6] = __cs_tmp_t6_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[6] >= __cs_pc[6]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[6] <= 1);
                                             
                                             Timer_Reset_isr_0(__cs_threadargs[6]);
                                             
                                             __cs_pc[6] = __cs_pc_cs[6];
                                   }
                         
                                   
                                   unsigned int __cs_tmp_t1_r2;
                                   
                                   if (__cs_disable_thread[1] != 1)
                                   {
                                             
                                             __cs_thread_index = 1;
                                             
                                             __cs_pc_cs[1] = __cs_tmp_t1_r2;
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 3);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                   }
                         
                                   
                                   return (0);
                         }
                         
                         

