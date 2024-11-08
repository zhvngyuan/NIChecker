/***
 ***  generated by CSeq [ 0000 / 0000 ] 2024-09-27 09:10:42
 ***
 ***                      2CA0 2020.03.24 core/merger
 ***                      5028 2020.05.28 core/module
 ***                      A857 2020.11.25 core/parser
 ***                      690A 2020.03.28 core/parser_old
 ***                      25CA 2020.04.14 core/utils
 ***
 ***  params:
 ***    --input /home/dell/zyworkspace/nichecker/Experiment/remarks2.1_basic/svp_simple_031/_mt_svp_simple_031_001.c --unwind 2 --rounds 2 --contexts 0 --cores 4
 ***
 ***  mode:
 ***    rwr
 ***    short
 ***    svp_simple_031_001_tc_block_rcvd_bytes_ch1
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
#define THREADS 2
#define ROUNDS 2
#define STOP_VOID(A) return;
#define STOP_NONVOID(A) return 0;
#define IF(T,A,B) if ((__cs_pc[T] > A)  |  (A >= __cs_pc_cs[T])) goto B;
#ifndef NULL
#define NULL 0
#endif
                         
                         _Bool __cs_loop_check = (1);
                         
                         unsigned __CPROVER_bitvector[1] __cs_active_thread[THREADS + 1] = {1};
                         
                         unsigned __CPROVER_bitvector[4] __cs_pc[THREADS + 1];
                         
                         unsigned __CPROVER_bitvector[4] __cs_pc_cs[THREADS + 1];
                         
                         unsigned __CPROVER_bitvector[2] __cs_thread_index;

                         unsigned __CPROVER_bitvector[1] __cs_disable_thread[THREADS+1] = {0};   //add
                         short rwr_tmp1;
                         short rwr_tmp2;
                         int rwr_tmp1_num;
                         int rwr_tmp2_num;
                         short rwr_r1;
                         short rwr_r2;
                         short rwr_r3;
                         short rwr_r4;
                         short rwr_r5;

                         
                         unsigned __CPROVER_bitvector[2] __cs_last_thread;
                         
                         unsigned __CPROVER_bitvector[4] __cs_thread_lines[] = {2, 12, 1};
                         
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
                         
                         void svp_simple_031_001_init();
                         
                         int svp_simple_031_001_func_1(int a, int b);
                         
                         int svp_simple_031_001_func_2(int x);
                         
                         void svp_simple_031_001_func_3();
                         
                         unsigned16 svp_simple_031_001_tc_block_rcvd_bytes_ch1;
                         
                         unsigned16 svp_simple_031_001_tc_block_rcvd_bytes_ch2;
                         
                         unsigned16 svp_simple_031_001_tc_block_rcvd_bytes;
                         
                         unsigned8 svp_simple_031_001_tc_chan1_buff[256];
                         
                         unsigned8 svp_simple_031_001_tc_chan2_buff[256];
                         
                         unsigned8 *svp_simple_031_001_tc_buff_p;
                         
                         unsigned32 svp_simple_031_001_gloable_var1;
                         
                         struct svp_simple_031_001_tc_block_data
                         {
                                   
                                   unsigned8 type;
                                   
                                   unsigned8 id;
                                   
                                   unsigned8 valid_len;
                         };
                         
                         void *main_task_0(void *__cs_param_main_task_arg)
                         {
                                   {
                                             
IF(1,0,tmain_task_0_1)
                                             svp_simple_031_001_tc_block_rcvd_bytes_ch1 = nondet_rand();
                         
                                             
tmain_task_0_1: IF(1,1,tmain_task_0_2)
                                             
                                             svp_simple_031_001_tc_block_rcvd_bytes_ch2 = nondet_rand();
                         
                                             
tmain_task_0_2: IF(1,2,tmain_task_0_3)
                                             
                                             svp_simple_031_001_gloable_var1 = nondet_rand();
                         
                                             {
                                                       
                                                       enable_isr(- 1);
                                                       
                                                       __cs_disable_thread[2] = 0;
                         
                                                       
                                                       __cs_disable_thread[0] = 0;
                         
                                                       
                                                       ;
                                             }
                                             
                                             ;
                                   }
                                   
                                   ;
                                   
                                   static struct svp_simple_031_001_tc_block_data __cs_local_main_task_tc_block;
                                   
                                   static int __cs_local_main_task_ichan;
                                   __cs_local_main_task_ichan = 0;
                         
                                   
                                   static _Bool __cs_local_main_task___cs_tmp_if_cond_0;
                                   
                                   __cs_local_main_task___cs_tmp_if_cond_0 = __cs_local_main_task_ichan == 0;
                         
                                   
                                   if (__cs_local_main_task___cs_tmp_if_cond_0)
                         
                                             {
                                             
tmain_task_0_3: IF(1,3,tmain_task_0_4)
                                             
                                             svp_simple_031_001_tc_buff_p = svp_simple_031_001_tc_chan1_buff;
                         
                                             
tmain_task_0_4: IF(1,4,tmain_task_0_5)
                                             
                                             svp_simple_031_001_tc_block_rcvd_bytes = 
                                             svp_simple_031_001_tc_block_rcvd_bytes_ch1;
                         
                                             rwr_r1 = svp_simple_031_001_tc_block_rcvd_bytes_ch1; //add
                                             if(rwr_tmp1_num != 0){  //add
                                             	 assert(rwr_r1 == rwr_tmp1);
                                             }
                                             rwr_tmp1_num++;
                                             rwr_tmp1 = rwr_r1; 
                         
                         
                                   }
                         
                                   
                                   __CPROVER_assume(__cs_pc_cs[1] >= 5);
                                   ;
                                   
tmain_task_0_5: IF(1,5,tmain_task_0_6)
                                   
                                   __cs_local_main_task_tc_block.type = * (svp_simple_031_001_tc_buff_p + 2);
                         
                                   
tmain_task_0_6: IF(1,6,tmain_task_0_7)
                                   
                                   __cs_local_main_task_tc_block.id = * (svp_simple_031_001_tc_buff_p + 4);
                         
                                   
tmain_task_0_7: IF(1,7,tmain_task_0_8)
                                   
                                   __cs_local_main_task_tc_block.valid_len = * (svp_simple_031_001_tc_buff_p + 5);
                         
                                   {
                                             
                                             static unsigned __cs_local_main_task_svp_simple_031_001_flag_chan1;
                                             
                                             __cs_local_main_task_svp_simple_031_001_flag_chan1 = 0;
                         
                                             
                                             static _Bool __cs_local_main_task___cs_tmp_if_cond_1;
                                             
tmain_task_0_8: IF(1,8,tmain_task_0_9)
                                             
                                             __cs_local_main_task___cs_tmp_if_cond_1 = svp_simple_031_001_tc_block_rcvd_bytes_ch1 >= 16;
                         
                                             rwr_r2 = svp_simple_031_001_tc_block_rcvd_bytes_ch1; //add
                                             if(rwr_tmp1_num != 0){  //add
                                             	 assert(rwr_r2 == rwr_tmp1);
                                             }
                                             rwr_tmp1_num++;
                                             rwr_tmp1 = rwr_r2; 
                         
                         
                                             
                                             if (__cs_local_main_task___cs_tmp_if_cond_1)
                         
                                                                 {
                                                       
                                                       static int __cs_local_main_task___cs_retval__svp_simple_031_001_func_1_0;
                                                       {
                                                                 
tmain_task_0_9: IF(1,9,tmain_task_0_10)
                                                                 
                                                                 static int __cs_local_main_task_a;
                                                                 __cs_local_main_task_a = svp_simple_031_001_gloable_var1;
                         
                                                                 
tmain_task_0_10: IF(1,10,tmain_task_0_11)
                                                                 
                                                                 static int __cs_local_main_task_b;
                                                                 __cs_local_main_task_b = svp_simple_031_001_tc_block_rcvd_bytes_ch1;
                         
                                             rwr_r3 = svp_simple_031_001_tc_block_rcvd_bytes_ch1; //add
                                             if(rwr_tmp1_num != 0){  //add
                                             	 assert(rwr_r3 == rwr_tmp1);
                                             }
                                             rwr_tmp1_num++;
                                             rwr_tmp1 = rwr_r3; 
                         
                         
                                                                 
                                                                 static int __cs_local_main_task_c;
                                                                 
                                                                 static _Bool __cs_local_main_task___cs_tmp_if_cond_2;
                                                                 
                                                                 __cs_local_main_task___cs_tmp_if_cond_2 = __cs_local_main_task_a < __cs_local_main_task_b;
                         
                                                                 
                                                                 if (__cs_local_main_task___cs_tmp_if_cond_2)
                         
                                                                                                         {
                                                                           
                                                                           __cs_local_main_task_c = __cs_local_main_task_a * __cs_local_main_task_b;
                         
                                                                 }
                                                                 else
                         
                                                                                                         {
                                                                           
                                                                           static int __cs_local_main_task___cs_retval__svp_simple_031_001_func_2_0;
                                                                           {
                                                                                     
                                                                                     static _Bool __cs_local_main_task___cs_tmp_if_cond_3;
                                                                                     
tmain_task_0_11: IF(1,11,tmain_task_0_12)
                                                                                     
                                                                                     __cs_local_main_task___cs_tmp_if_cond_3 = svp_simple_031_001_tc_block_rcvd_bytes_ch1 > 0;
                         
                                             rwr_r4 = svp_simple_031_001_tc_block_rcvd_bytes_ch1; //add
                                             if(rwr_tmp1_num != 0){  //add
                                             	 assert(rwr_r4 == rwr_tmp1);
                                             }
                                             rwr_tmp1_num++;
                                             rwr_tmp1 = rwr_r4; 
                         
                         
                                                                                     
                                                                                     if (__cs_local_main_task___cs_tmp_if_cond_3)
                         
                                                                                                                                                 {
                                                                                               
                                                                                               __cs_local_main_task___cs_retval__svp_simple_031_001_func_2_0 = 10;
                         
                                                                                               
                                                                                               goto __exit__svp_simple_031_001_func_2_0;
                                                                                               ;
                                                                                     }
                                                                                     else
                         
                                                                                                                                                 {
                                                                                               
                                                                                               __cs_local_main_task___cs_retval__svp_simple_031_001_func_2_0 = 0;
                         
                                                                                               
                                                                                               goto __exit__svp_simple_031_001_func_2_0;
                                                                                               ;
                                                                                     }
                         
                                                                                     
                                                                                     ;
                                                                                     
                                                                                     __exit__svp_simple_031_001_func_2_0:
                                                                                     __CPROVER_assume(__cs_pc_cs[1] >= 12);
                         
                                                                                     
                                                                                     ;
                                                                                     ;
                                                                           }
                                                                           
                                                                           ;
                                                                           
                                                                           __cs_local_main_task_c = __cs_local_main_task___cs_retval__svp_simple_031_001_func_2_0;
                         
                                                                 }
                         
                                                                 
                                                                 __CPROVER_assume(__cs_pc_cs[1] >= 12);
                                                                 ;
                                                                 
                                                                 __cs_local_main_task___cs_retval__svp_simple_031_001_func_1_0 = __cs_local_main_task_c;
                         
                                                       }
                                                       
                                                       ;
                                             }
                         
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] >= 12);
                                             ;
                                   }
                                   
                                   ;
                                   
                                   __exit_main_task:
                                   __CPROVER_assume(__cs_pc_cs[1] >= 12);
                         
                                   
                                   ;
                                   ;
                                   
tmain_task_0_12: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *svp_simple_031_001_isr_1_0(void *__cs_param_svp_simple_031_001_isr_1_arg)
                         
                         {
                                   
IF(2,0,tsvp_simple_031_001_isr_1_0_1)
                                   
                                   svp_simple_031_001_tc_block_rcvd_bytes_ch1 = ((* ((volatile unsigned int *) 0x10000000)) >> 3) & 0x1FFF;
                                   
                                   __exit_svp_simple_031_001_isr_1:
                                   
                                   ;
                         
                                   
                                   ;
                                   
tsvp_simple_031_001_isr_1_0_1: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         
                         int main(void)
                         {
                                   
/* round  0 */
                                   
/* main_task_0 */
                                   
                                   unsigned __CPROVER_bitvector[4] __cs_tmp_t1_r0;
                                   
                                   if (__cs_disable_thread[1] != 1)
                                   {
                                             __cs_thread_index = 1;
                                             
                                             __cs_pc_cs[1] = __cs_tmp_t1_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] > 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 12);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                             
                                             __cs_pc[1] = __cs_pc_cs[1];
                                   }
                         
                                   
/* svp_simple_031_001_isr_1_0 random prio:1 */
                                   
                                   unsigned __CPROVER_bitvector[1] __cs_tmp_t2_r0;
                                   
                                   if (__cs_disable_thread[2] != 1)
                                   {
                                             
                                             __cs_thread_index = 2;
                                             
                                             __cs_pc_cs[2] = __cs_tmp_t2_r0;
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] <= 1);
                                             
                                             svp_simple_031_001_isr_1_0(__cs_threadargs[2]);
                                             
                                             __cs_pc[2] = __cs_pc_cs[2];
                                   }
                         
                                   
/* round  1 */
                                   
/* main */
                                   
/* main_task_0 */
                                   
                                   unsigned __CPROVER_bitvector[4] __cs_tmp_t1_r1;
                                   
                                   if (__cs_disable_thread[1] != 1)
                                   {
                                             
                                             __cs_thread_index = 1;
                                             
                                             __cs_pc_cs[1] = __cs_tmp_t1_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 12);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                             
                                             __cs_pc[1] = __cs_pc_cs[1];
                                   }
                         
                                   
/* svp_simple_031_001_isr_1_0 random prio: 1 */
                                   
                                   unsigned __CPROVER_bitvector[1] __cs_tmp_t2_r1;
                                   
                                   if (__cs_disable_thread[2] != 1)
                                   {
                                             
                                             __cs_thread_index = 2;
                                             
                                             __cs_pc_cs[2] = __cs_tmp_t2_r1;
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] <= 1);
                                             
                                             svp_simple_031_001_isr_1_0(__cs_threadargs[2]);
                                             
                                             __cs_pc[2] = __cs_pc_cs[2];
                                   }
                         
                                   
                                   unsigned int __cs_tmp_t1_r2;
                                   
                                   if (__cs_disable_thread[1] != 1)
                                   {
                                             
                                             __cs_thread_index = 1;
                                             
                                             __cs_pc_cs[1] = __cs_tmp_t1_r2;
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 12);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                   }
                         
                                   
                                   return (0);
                         }
                         
                         

