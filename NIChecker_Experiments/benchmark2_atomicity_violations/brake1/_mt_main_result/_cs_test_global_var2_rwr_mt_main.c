/***
 ***  generated by CSeq [ 0000 / 0000 ] 2023-10-22 13:22:14
 ***
 ***                      5860 2020.03.24 core/merger
 ***                      F847 2020.05.28 core/module
 ***                      A857 2020.11.25 core/parser
 ***                      690A 2020.03.28 core/parser_old
 ***                      AA19 2020.04.14 core/utils
 ***
 ***  params:
 ***    --input /home/dell/zyworkspace/nichecker/Experiment/Testrealpro/brake1/_mt_main.c --unwind 2 --rounds 2
 ***
 ***  mode:
 ***    rwr
 ***    int
 ***    test_global_var2
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
                         
                         unsigned __CPROVER_bitvector[3] __cs_pc[THREADS + 1];
                         
                         unsigned __CPROVER_bitvector[3] __cs_pc_cs[THREADS + 1];
                         
                         unsigned __CPROVER_bitvector[3] __cs_thread_index;

                         unsigned __CPROVER_bitvector[1] __cs_disable_thread[THREADS+1] = {0};   //add
                         int rwr_tmp1;
                         int rwr_tmp2;
                         int rwr_tmp3;
                         int rwr_tmp1_num;
                         int rwr_tmp2_num;
                         int rwr_tmp3_num;
                         int rwr_r1;
                         int rwr_r2;
                         int rwr_r3;

                         
                         unsigned __CPROVER_bitvector[3] __cs_last_thread;
                         
                         unsigned __CPROVER_bitvector[3] __cs_thread_lines[] = {1, 5, 1, 1};
                         
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
                         
                         int brake_acc_nodiv_ctrl_B_local_RT_h;
                         
                         int brake_acc_nodiv_ctrl_B_local_RTH;
                         
                         int brake_acc_nodiv_ctrl_B_local_RT4;
                         
                         int brake_acc_nodiv_ctrl_B_local_RT1;
                         
                         int brake_acc_nodiv_ctrl_B_local_RT2;
                         
                         int brake_acc_nodiv_ctrl_B_local_RT3;
                         
                         int brake_acc_nodiv_ctrl_B_local_RT14;
                         
                         int brake_acc_nodiv_ctrl_B_local_ABS_FL_Wheel_Threshold_10kmh = (100);
                         
                         int brake_acc_nodiv_ctrl_B_local_ABS_RL_Wheel_Threshold_10kmh = (100);
                         
                         int brake_acc_nodiv_ctrl_B_local_ABS_RR_Wheel_Threshold_10kmh = (100);
                         
                         int brake_acc_nodiv_ctrl_B_local_ABS_FR_Wheel_Threshold_10kmh = (100);
                         
                         int brake_acc_nodiv_ctrl_P_RT_X0;
                         
                         int brake_acc_nodiv_ctrl_P_RT4_X0;
                         
                         int brake_acc_nodiv_ctrl_P_RT1_X0;
                         
                         int brake_acc_nodiv_ctrl_P_RT2_X0;
                         
                         int brake_acc_nodiv_ctrl_P_RT3_X0;
                         
                         int brake_acc_nodiv_ctrl_P_Gain1_Gain;
                         
                         int brake_acc_nodiv_ctrl_P_Distribution_Gain0;
                         
                         int brake_acc_nodiv_ctrl_P_Distribution_Gain1;
                         
                         int brake_acc_nodiv_ctrl_P_Distribution_Gain2;
                         
                         int brake_acc_nodiv_ctrl_P_Distribution_Gain3;
                         
                         int brake_acc_nodiv_ctrl_P_average_rpm_Gain;
                         
                         int brake_acc_nodiv_ctrl_P_wgrads_Gain;
                         
                         int brake_acc_nodiv_ctrl_P_vkmh_Gain;
                         
                         int vkmh;
                         
                         int RT9;
                         
                         int RT10;
                         
                         int RT11;
                         
                         int RT12;
                         
                         int RT14;
                         
                         int RT_Buffer0;
                         
                         int RT0_Buffer0;
                         
                         int RT1_Buffer0;
                         
                         int RT2_Buffer0;
                         
                         int RT3_Buffer0;
                         
                         int RT4_Buffer0;
                         
                         int Distribution_idx;
                         
                         int Distribution_idx_0;
                         
                         int Distribution_idx_1;
                         
                         int cnt1;
                         
                         int cnt2;
                         
                         int cnt3;
                         
                         int test_global_array[10000];
                         
                         int test_global_var1;
                         
                         int test_global_var2;

                         int* __cs_variable_address = &test_global_var2;   //add 
                         
                         int test_global_var3;
                         
                         int test_global_condition1;
                         
                         int test_global_condition2;
                         
                         int test_global_condition3;
                         
                         int test_global_condition4;
                         
                         void JudgeCondi(void);
                         
                         void *task_compute_isr_0(void *__cs_param_task_compute_isr_arg)
                         
                         {
                                   
IF(2,0,ttask_compute_isr_0_1)
                                   
                                   static _Bool __cs_local_task_compute_isr___cs_tmp_if_cond_0;
                                   
                                   __cs_local_task_compute_isr___cs_tmp_if_cond_0 = test_global_condition4 == 0;
                                   
                                   if (__cs_local_task_compute_isr___cs_tmp_if_cond_0)
                         
                                             {
                                             test_global_var2 = 0x99;
                                   }
                         
                                   
                                   ;
                                   
                                   __exit_task_compute_isr:
                                   
                                   ;
                         
                                   
                                   ;
                                   
ttask_compute_isr_0_1: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *main_task_0(void *__cs_param_main_task_arg)
                         {
                                   
IF(1,0,tmain_task_0_1)
                                   
                                   disable_isr(- 1);
                                   
                                   __cs_disable_thread[3] = 1;
                         
                                   
                                   __cs_disable_thread[2] = 1;
                         
                                   
                                   __cs_disable_thread[0] = 1;
                         
                                   
                                   ;
                                   
                                   test_global_condition4 = 1;
                         
                                   
tmain_task_0_1: IF(1,1,tmain_task_0_2)
                                   
                                   enable_isr(- 1);
                                   
                                   __cs_disable_thread[3] = 0;
                         
                                   
                                   __cs_disable_thread[2] = 0;
                         
                                   
                                   __cs_disable_thread[0] = 0;
                         
                                   
                                   ;
                                   
tmain_task_0_2: IF(1,2,tmain_task_0_3)
                                   {
                                             
                                             static int __cs_local_main_task_reader1;
                                             __cs_local_main_task_reader1 = nondet_int();
                         
                                             
                                             static int __cs_local_main_task_reader2;
                                             __cs_local_main_task_reader2 = nondet_int();
                         
                                             
                                             static int __cs_local_main_task_reader3;
                                             
                                             static int __cs_local_main_task_reader4;
                                             
                                             __cs_local_main_task_reader3 = test_global_var2;
                         
                                             rwr_r1 = test_global_var2; //add
                                             if(rwr_tmp1_num != 0){  //add
                                             	 assert(rwr_r1 == rwr_tmp1);
                                             }
                                             rwr_tmp1_num++;
                                             rwr_tmp1 = rwr_r1; 
                         
                         
                                             
tmain_task_0_3: IF(1,3,tmain_task_0_4)
                                             
                                             __cs_local_main_task_reader4 = test_global_var2;
                         
                                             rwr_r2 = test_global_var2; //add
                                             if(rwr_tmp1_num != 0){  //add
                                             	 assert(rwr_r2 == rwr_tmp1);
                                             }
                                             rwr_tmp1_num++;
                                             rwr_tmp1 = rwr_r2; 
                         
                         
                                             
tmain_task_0_4: IF(1,4,tmain_task_0_5)
                                   }
                                   
                                   ;
                                   
                                   goto __exit_main_task;
                                   ;
                                   
                                   ;
                                   ;
                                   
                                   __exit_main_task:
                                   
                                   ;
                         
                                   
                                   ;
                                   
tmain_task_0_5: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *task_RR_Wheel_isr_0(void *__cs_param_task_RR_Wheel_isr_arg)
                         
                         {
                                   
IF(3,0,ttask_RR_Wheel_isr_0_1)
                                   
                                   static int __cs_local_task_RR_Wheel_isr_i;
                                   __cs_local_task_RR_Wheel_isr_i = 0;
                                   
                                   static int __cs_local_task_RR_Wheel_isr_maxnum;
                                   __cs_local_task_RR_Wheel_isr_maxnum = nondet_int();
                                   
                                   static int __cs_local_task_RR_Wheel_isr_mininum;
                                   __cs_local_task_RR_Wheel_isr_mininum = nondet_int();
                                   
                                   __cs_local_task_RR_Wheel_isr_i = 0;
                                   
                                   static int __cs_local_task_RR_Wheel_isr_loop_1_IOVar1;
                                   
                                   static int __cs_local_task_RR_Wheel_isr_loop_1_block_1;
                                   
                                   static int __cs_local_task_RR_Wheel_isr_t_1;
                                   __cs_local_task_RR_Wheel_isr_t_1 = 0;
                                   
                                   if (! ((__cs_local_task_RR_Wheel_isr_t_1 < 1) && (__cs_local_task_RR_Wheel_isr_i < 10000)))
                         
                                             {
                                             
                                             goto __exit_loop_1;
                                             ;
                                   }
                         
                                   
                                   ;
                         
                                             {
                                             
                                             __cs_local_task_RR_Wheel_isr_loop_1_IOVar1 = __cs_local_task_RR_Wheel_isr_i;
                                             
                                             __cs_local_task_RR_Wheel_isr_loop_1_block_1 = nondet_int();
                                             
                                             __cs_local_task_RR_Wheel_isr_i = __cs_local_task_RR_Wheel_isr_loop_1_IOVar1 + (1 * __cs_local_task_RR_Wheel_isr_loop_1_block_1);
                                             
                                             __CPROVER_assume(__cs_local_task_RR_Wheel_isr_loop_1_block_1 >= 0);
                                             
                                             __CPROVER_assume(__cs_local_task_RR_Wheel_isr_i < 10000);
                         
                                                                 {
                                             }
                                             
                                             ;
                                             
                                             __cs_local_task_RR_Wheel_isr_i = __cs_local_task_RR_Wheel_isr_i + 1;
                                   }
                                   
                                   ;
                                   
                                   __cs_local_task_RR_Wheel_isr_t_1 = __cs_local_task_RR_Wheel_isr_t_1 + 1;
                                   
                                   if (! ((__cs_local_task_RR_Wheel_isr_t_1 < 1) && (__cs_local_task_RR_Wheel_isr_i < 10000)))
                         
                                             {
                                             
                                             goto __exit_loop_1;
                                             ;
                                   }
                         
                                   
                                   ;
                         
                                             {
                                             
                                             __cs_local_task_RR_Wheel_isr_loop_1_IOVar1 = __cs_local_task_RR_Wheel_isr_i;
                                             
                                             __cs_local_task_RR_Wheel_isr_loop_1_block_1 = nondet_int();
                                             
                                             __cs_local_task_RR_Wheel_isr_i = __cs_local_task_RR_Wheel_isr_loop_1_IOVar1 + (1 * __cs_local_task_RR_Wheel_isr_loop_1_block_1);
                                             
                                             __CPROVER_assume(__cs_local_task_RR_Wheel_isr_loop_1_block_1 >= 0);
                                             
                                             __CPROVER_assume(__cs_local_task_RR_Wheel_isr_i < 10000);
                         
                                                                 {
                                             }
                                             
                                             ;
                                             
                                             __cs_local_task_RR_Wheel_isr_i = __cs_local_task_RR_Wheel_isr_i + 1;
                                   }
                                   
                                   ;
                                   
                                   __cs_local_task_RR_Wheel_isr_t_1 = __cs_local_task_RR_Wheel_isr_t_1 + 1;
                                   
                                   static _Bool __cs_loop_1;
                                   __cs_loop_1 = (__cs_local_task_RR_Wheel_isr_t_1 < 1) && (__cs_local_task_RR_Wheel_isr_i < 10000);
                                   
                                   __CPROVER_assume(! __cs_loop_1);
                                   
                                   __exit_loop_1:
                                   
                                   ;
                         
                                   
                                   ;
                                   
                                   __CPROVER_assume(! (__cs_local_task_RR_Wheel_isr_i < 10000));
                                   
                                   static int __cs_local_task_RR_Wheel_isr_rtb_to_int;
                                   __cs_local_task_RR_Wheel_isr_rtb_to_int = nondet_int();
                                   
                                   static int __cs_local_task_RR_Wheel_isr_rtb_RelationalOperator;
                                   __cs_local_task_RR_Wheel_isr_rtb_RelationalOperator = nondet_int();
                                   
                                   static int __cs_local_task_RR_Wheel_isr_rtb_vms;
                                   __cs_local_task_RR_Wheel_isr_rtb_vms = nondet_int();
                                   
                                   static int __cs_local_task_RR_Wheel_isr_u;
                                   __cs_local_task_RR_Wheel_isr_u = nondet_int();
                                   
                                   static int __cs_local_task_RR_Wheel_isr_positive_UpperSat_local;
                                   __cs_local_task_RR_Wheel_isr_positive_UpperSat_local = 100;
                                   
                                   static _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_1;
                                   
                                   __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_1 = __cs_local_task_RR_Wheel_isr_u >= __cs_local_task_RR_Wheel_isr_positive_UpperSat_local;
                                   
                                   if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_1)
                         
                                             {
                                   }
                                   else
                         
                                             {
                                             
                                             static int __cs_local_task_RR_Wheel_isr_positive_LowerSat_local;
                                             __cs_local_task_RR_Wheel_isr_positive_LowerSat_local = 5;
                                   }
                         
                                   
                                   ;
                                   
                                   static int __cs_local_task_RR_Wheel_isr_tmp0;
                                   __cs_local_task_RR_Wheel_isr_tmp0 = 10;
                                   
                                   static int __cs_local_task_RR_Wheel_isr_tmp1;
                                   __cs_local_task_RR_Wheel_isr_tmp1 = 10 + __cs_local_task_RR_Wheel_isr_rtb_vms;
                                   
                                   static _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_2;
                                   
                                   __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_2 = __cs_local_task_RR_Wheel_isr_tmp0 > __cs_local_task_RR_Wheel_isr_tmp1;
                                   
                                   if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_2)
                         
                                             {
                                   }
                                   else
                         
                                             {
                                   }
                         
                                   
                                   ;
                                   
                                   static int __cs_local_task_RR_Wheel_isr_Threshold_10kmh_Threshold_local;
                                   __cs_local_task_RR_Wheel_isr_Threshold_10kmh_Threshold_local = 100;
                                   
                                   static _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_3;
                                   
                                   __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_3 = brake_acc_nodiv_ctrl_B_local_RT4 >= __cs_local_task_RR_Wheel_isr_Threshold_10kmh_Threshold_local;
                                   
                                   if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_3)
                         
                                             {
                                             
                                             static _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_4;
                                             
                                             __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_4 = __cs_local_task_RR_Wheel_isr_rtb_RelationalOperator;
                                             
                                             if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_4)
                         
                                                                 {
                                             }
                                             else
                         
                                                                 {
                                             }
                         
                                             
                                             ;
                                   }
                                   else
                         
                                             {
                                   }
                         
                                   
                                   ;
                                   
                                   __exit_task_RR_Wheel_isr:
                                   
                                   ;
                         
                                   
                                   ;
                                   
ttask_RR_Wheel_isr_0_1: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         
                         int main(void)
                         {
                                   
/* round  0 */
                                   
/* main_task_0 */
                                   
                                   unsigned __CPROVER_bitvector[3] __cs_tmp_t1_r0;
                                   
                                   if (__cs_disable_thread[1] != 1)
                                   {
                                             __cs_thread_index = 1;
                                             
                                             __cs_pc_cs[1] = __cs_tmp_t1_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] > 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 5);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                             
                                             __cs_pc[1] = __cs_pc_cs[1];
                                   }
                         
                                   
/* task_compute_isr_0 random prio:6 */
                                   
                                   unsigned __CPROVER_bitvector[1] __cs_tmp_t2_r0;
                                   
                                   if (__cs_disable_thread[2] != 1)
                                   {
                                             
                                             __cs_thread_index = 2;
                                             
                                             __cs_pc_cs[2] = __cs_tmp_t2_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] <= 1);
                                             
                                             task_compute_isr_0(__cs_threadargs[2]);
                                             
                                             __cs_pc[2] = __cs_pc_cs[2];
                                   }
                         
                                   
/* task_RR_Wheel_isr_0 random prio:5 */
                                   
                                   unsigned __CPROVER_bitvector[1] __cs_tmp_t3_r0;
                                   
                                   if (__cs_disable_thread[3] != 1)
                                   {
                                             
                                             __cs_thread_index = 3;
                                             
                                             __cs_pc_cs[3] = __cs_tmp_t3_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] <= 1);
                                             
                                             task_RR_Wheel_isr_0(__cs_threadargs[3]);
                                             
                                             __cs_pc[3] = __cs_pc_cs[3];
                                   }
                         
                                   
/* round  1 */
                                   
/* main */
                                   
/* main_task_0 */
                                   
                                   unsigned __CPROVER_bitvector[3] __cs_tmp_t1_r1;
                                   
                                   if ((__cs_disable_thread[1] != 1) && ((__cs_pc[3] == 0) || (__cs_pc[3] == 1)))
                                   {
                                             
                                             __cs_thread_index = 1;
                                             
                                             __cs_pc_cs[1] = __cs_tmp_t1_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 5);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                             
                                             __cs_pc[1] = __cs_pc_cs[1];
                                   }
                         
                                   
/* task_compute_isr_0 random prio: 6 */
                                   
                                   unsigned __CPROVER_bitvector[1] __cs_tmp_t2_r1;
                                   
                                   if (__cs_disable_thread[2] != 1)
                                   {
                                             
                                             __cs_thread_index = 2;
                                             
                                             __cs_pc_cs[2] = __cs_tmp_t2_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] <= 1);
                                             
                                             task_compute_isr_0(__cs_threadargs[2]);
                                             
                                             __cs_pc[2] = __cs_pc_cs[2];
                                   }
                         
                                   
/* task_RR_Wheel_isr_0 random prio: 5 */
                                   
                                   unsigned __CPROVER_bitvector[1] __cs_tmp_t3_r1;
                                   
                                   if (__cs_disable_thread[3] != 1)
                                   {
                                             
                                             __cs_thread_index = 3;
                                             
                                             __cs_pc_cs[3] = __cs_tmp_t3_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] >= __cs_pc[3]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[3] <= 1);
                                             
                                             task_RR_Wheel_isr_0(__cs_threadargs[3]);
                                             
                                             __cs_pc[3] = __cs_pc_cs[3];
                                   }
                         
                                   
                                   unsigned int __cs_tmp_t1_r2;
                                   
                                   if (__cs_disable_thread[1] != 1)
                                   {
                                             
                                             __cs_thread_index = 1;
                                             
                                             __cs_pc_cs[1] = __cs_tmp_t1_r2;
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 5);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                   }
                         
                                   
                                   return (0);
                         }
                         
                         

