/***
 ***  generated by CSeq [ 0000 / 0000 ] 2022-03-02 14:47:26
 ***
 ***                      1B3B 2020.03.24 core/merger
 ***                      390D 2020.05.28 core/module
 ***                      2EBA 2020.11.25 core/parser
 ***                      690A 2020.03.28 core/parser_old
 ***                      F3A3 2020.04.14 core/utils
 ***
 ***  params:
 ***    --output /home/dell/zyworkspace/xuanyutest/bianliangxu/_cs__mt_svp_simple_004_001.c -i /home/dell/zyworkspace/xuanyutest/bianliangxu/_mt_svp_simple_004_001.c --cex  --unwind 3
 ***
 ***  modules:
 ***    D207 workarounds (sv-comp)
 ***    AF6B functiontracker ()
 ***    E288 preinstrumenter (sv-comp error-label)
 ***    CBBD constants (deep-propagation)
 ***    6C2E spinlock ()
 ***    4FEF switchtransformer ()
 ***    43C1 dowhileconverter ()
 ***    E5D5 conditionextractor ()
 ***    7ED7 varnames ()
 ***    D804 preinliner ()
 ***    DC4B inliner (atomic-parameters simplify-args)
 ***    034C unroller (unwind unwind-while unwind-for unwind-for-max softunwindbound varnamesmap varscopesmap extra-tracking unwind-check)
 ***    012B duplicator (threads)
 ***    8CB9 condwaitconverter ()
 ***    7220 lazyseq (rounds contexts threads schedule deadlock norobin preanalysis nondet-condvar-wakeups)
 ***    B7F7 instrumenter (backend bitwidth header well-nested-locks emptystructs)
 ***    253E mapper (backend contexts unwind cores no-simplify reuse-dimacs)
 ***    B9AB feeder (backend time llvm depth slevel no-simplify unwind contexts unwind 32 show-backend-output extrargs from to)
 ***    C154 cex (backend cex threadnamesmap threadindexes threadindextoname varnamesmap coordstofunctions sv-comp witness entry threadsizes threadendlines loopheads unwind-check)
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
#include <assert.h>
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
#define ROUNDS 1
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
                         
                         unsigned __CPROVER_bitvector[3] __cs_thread_index;

                         unsigned __CPROVER_bitvector[6] __cs_random[2];   //add 

                         unsigned __CPROVER_bitvector[1] __cs_disable_thread[THREADS+1] = {0};   //add 
                         
                         unsigned __CPROVER_bitvector[3] __cs_last_thread;
                         
                         unsigned __CPROVER_bitvector[4] __cs_thread_lines[] = {3, 11, 4, 3};
                         
                         void __cs_init_scalar(void *__cs_var, unsigned int __cs_size)
                         {
                                   
                                   if (__cs_size == (sizeof(int)))
                                             
                                   * ((int *) __cs_var) = (nondet_int());
                                   else
                         
                                             {
                                             
                                             __cs_var = (malloc(__cs_size));
                                   }
                         
                         }
                         
                         
                         void __CSEQ_message(char *__cs_message)
                         {
                                   ;
                         }
                         
                         
                         typedef int cspthread_t;
                         
                         void *__cs_threadargs[THREADS + 1];
                         
                         typedef int cspthread_key_t;
                         
                         cspthread_key_t __cs_keys[1][THREADS + 2];
                         
                         void (*__cs_key_destructor[1])(void *);
                         
                         int pthread_create_2(cspthread_t *__cs_new_thread_id, void *__cs_attr, void *(*__cs_func)(void *), void *__cs_arg, int __cs_threadID)
                         {
                                   
                                   if (__cs_threadID > THREADS)
                                             return (0);
                         
                                   
                                   * __cs_new_thread_id = (__cs_threadID);
                                   
                                   __cs_active_thread[__cs_threadID] = (1);
                                   
                                   __cs_threadargs[__cs_threadID] = (__cs_arg);
                                   
                                   __CSEQ_message("thread spawned");
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_join(cspthread_t __cs_id, void **__cs_value_ptr)
                         {
                                   
                                   __CPROVER_assume(__cs_pc[__cs_id] == __cs_thread_lines[__cs_id]);
                                   
                                   return (0);
                         }
                         
                         
                         void pthread_exit(void *__cs_value_ptr)
                         {
                                   
                                   if ((__cs_key_destructor[0] != 0) && (__cs_keys[0][__cs_thread_index + 1] != 0))
                                   {
                                             
                                             __cs_key_destructor[0]((void *) __cs_keys[0][__cs_thread_index + 1]);
                                   }
                         
                         }
                         
                         
                         int pthread_self(void)
                         {
                                   return (__cs_thread_index + 1);
                         }
                         
                         
                         typedef int cspthread_mutex_t;
                         
                         typedef int cspthread_mutexattr_t;
                         
                         int pthread_mutex_init(cspthread_mutex_t *__cs_m, cspthread_mutexattr_t *__cs_val)
                         {
                                   
                                   * __cs_m = (- 1);
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_mutex_destroy(cspthread_mutex_t *__cs_mutex_to_destroy)
                         {
                                   
                                   * __cs_mutex_to_destroy = (- 2);
                                   
                                   __CSEQ_message("lock destroyed");
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_mutex_lock(cspthread_mutex_t *__cs_mutex_to_lock)
                         {
                                   
                                   __CPROVER_assume((* __cs_mutex_to_lock) == (- 1));
                                   
                                   * __cs_mutex_to_lock = (__cs_thread_index + 1);
                                   
                                   __CSEQ_message("lock acquired");
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_mutex_unlock(cspthread_mutex_t *__cs_mutex_to_unlock)
                         {
                                   
                                   __CPROVER_assume((* __cs_mutex_to_unlock) == (__cs_thread_index + 1));
                                   
                                   * __cs_mutex_to_unlock = (- 1);
                                   
                                   __CSEQ_message("lock released");
                                   
                                   return (0);
                         }
                         
                         
                         typedef int cspthread_cond_t;
                         
                         typedef int cspthread_condattr_t;
                         
                         int pthread_cond_init(cspthread_cond_t *__cs_cond_to_init, cspthread_condattr_t *__cs_attr)
                         {
                                   
                                   * __cs_cond_to_init = (- 1);
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_cond_destroy(cspthread_cond_t *__cs_cond_to_destroy)
                         {
                                   
                                   * __cs_cond_to_destroy = (- 2);
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_cond_wait_1(cspthread_cond_t *__cs_cond_to_wait_for, cspthread_mutex_t *__cs_m)
                         {
                                   
                                   pthread_mutex_unlock(__cs_m);
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_cond_wait_2(cspthread_cond_t *__cs_cond_to_wait_for, cspthread_mutex_t *__cs_m)
                         {
                                   
                                   __CPROVER_assume((* __cs_cond_to_wait_for) == 1);
                                   
                                   pthread_mutex_lock(__cs_m);
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_cond_signal(cspthread_cond_t *__cs_cond_to_signal)
                         {
                                   
                                   * __cs_cond_to_signal = (1);
                                   
                                   __CSEQ_message("conditional variable signal");
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_cond_broadcast(cspthread_cond_t *__cs_cond_to_broadcast)
                         {
                                   
                                   * __cs_cond_to_broadcast = (1);
                                   
                                   __CSEQ_message("conditional variable broadcast");
                                   
                                   return (0);
                         }
                         
                         
                         typedef struct cspthread_barrier_t
                         {
                                   
                                   unsigned int init;
                                   
                                   unsigned int current;
                         } cspthread_barrier_t;
                         
                         typedef int cspthread_barrierattr_t;
                         
                         int pthread_barrier_init(cspthread_barrier_t *__cs_barrier_to_init, cspthread_barrierattr_t *__cs_attr, unsigned int count)
                         {
                                   
                                   __cs_barrier_to_init->current = (count);
                                   
                                   __cs_barrier_to_init->init = (count);
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_barrier_destroy(cspthread_barrier_t *__cs_barrier_to_destroy)
                         {
                                   
                                   __cs_barrier_to_destroy->init = (- 1);
                                   
                                   __cs_barrier_to_destroy->current = (- 1);
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_barrier_wait_1(cspthread_barrier_t *__cs_barrier_to_wait)
                         {
                                   
                                   __cs_barrier_to_wait->current--;
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_barrier_wait_2(cspthread_barrier_t *__cs_barrier_to_wait)
                         {
                                   
                                   __CPROVER_assume(__cs_barrier_to_wait->current == 0);
                                   
                                   __cs_barrier_to_wait->current = (__cs_barrier_to_wait->init);
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_key_create(cspthread_key_t *key, void (*destructor)(void *))
                         {
                                   
                                   static int currentkey = (0);
                                   
                                   __cs_key_destructor[0] = (destructor);
                                   
                                   * key = (currentkey++);
                                   
                                   return (0);
                         }
                         
                         
                         int pthread_setspecific(cspthread_key_t key, void *value)
                         {
                                   
                                   __cs_keys[key][__cs_thread_index + 1] = ((cspthread_key_t) value);
                                   
                                   return (0);
                         }
                         
                         
                         void *pthread_getspecific(cspthread_key_t key)
                         {
                                   
                                   return ((void *) __cs_keys[key][__cs_thread_index + 1]);
                         }
                         
                         
                         void __CSEQ_noop(void)
                         {
                         }
                         
                         
                         
                         int svp_simple_004_001_condition1 = (1);
                         
                         int svp_simple_004_001_condition2 = (1);
                         
                         int svp_simple_004_001_condition3 = (1);
                         
                         int svp_simple_004_001_condition4 = (1);
                         
                         int svp_simple_004_001_condition5 = (1);
                         
                         int svp_simple_004_001_condition6 = (1);
                         
                         int svp_simple_004_001_global_var1 = (0x11);
                         
                         int svp_simple_004_001_global_var2 = (0x22);
                         
                         int svp_simple_004_001_global_var3 = (0x33);
                         int r1;
                         int r2;
                         
                         void *main_task_0(void *__cs_param_main_task_arg)
                         {
                                   
IF(1,0,tmain_task_0_1)
                                   
                                   static int __cs_local_main_task_reader1;
                                   
                                   static int __cs_local_main_task_reader2;
                                   
                                   static int __cs_local_main_task_reader3;
                                   
                                   static int __cs_local_main_task_reader4;
                                   
                                   static int __cs_local_main_task_reader5;
                                   
                                   static int __cs_local_main_task_reader6;
                                   
                                   disable_isr(2);
                                   
                                   __cs_disable_thread[3] = (1);
                         
                                   
                                   static _Bool __cs_local_main_task___cs_tmp_if_cond_0;
                                   
tmain_task_0_1: IF(1,1,tmain_task_0_2)
                                   
                                   __cs_local_main_task___cs_tmp_if_cond_0 = (svp_simple_004_001_condition1 == 1);
                         
                                   
                                   if (__cs_local_main_task___cs_tmp_if_cond_0)
                         
                                             {
                                             
tmain_task_0_2: IF(1,2,tmain_task_0_3)
                                             
                                             __cs_local_main_task_reader1 = (svp_simple_004_001_global_var1);
                                             r1 = svp_simple_004_001_global_var1;
                         
                                             
tmain_task_0_3: IF(1,3,tmain_task_0_4)
                                             
                                             __cs_local_main_task_reader5 = (svp_simple_004_001_global_var3);
                         
                                   }
                         
                                   
                                   __CPROVER_assume(__cs_pc_cs[1] >= 4);
                                   ;
                                   
                                   static _Bool __cs_local_main_task___cs_tmp_if_cond_1;
                                   
tmain_task_0_4: IF(1,4,tmain_task_0_5)
                                   
                                   __cs_local_main_task___cs_tmp_if_cond_1 = (svp_simple_004_001_condition2 == 1);
                         
                                   
                                   if (__cs_local_main_task___cs_tmp_if_cond_1)
                         
                                             {
                                             
tmain_task_0_5: IF(1,5,tmain_task_0_6)
                                             
                                             __cs_local_main_task_reader2 = (svp_simple_004_001_global_var1);
                                             r2 = svp_simple_004_001_global_var1;
                                             assert(r1==r2);
                         
                                             
tmain_task_0_6: IF(1,6,tmain_task_0_7)
                                             
                                             __cs_local_main_task_reader6 = (svp_simple_004_001_global_var3);
                         
                                   }
                         
                                   
                                   __CPROVER_assume(__cs_pc_cs[1] >= 7);
                                   ;
                                   
                                   static _Bool __cs_local_main_task___cs_tmp_if_cond_2;
                                   
tmain_task_0_7: IF(1,7,tmain_task_0_8)
                                   
                                   __cs_local_main_task___cs_tmp_if_cond_2 = (svp_simple_004_001_condition4 == 1);
                         
                                   
                                   if (__cs_local_main_task___cs_tmp_if_cond_2)
                         
                                             {
                                             
tmain_task_0_8: IF(1,8,tmain_task_0_9)
                                             
                                             __cs_local_main_task_reader3 = (svp_simple_004_001_global_var2);
                         
                                   }
                         
                                   
                                   __CPROVER_assume(__cs_pc_cs[1] >= 9);
                                   ;
                                   
                                   static _Bool __cs_local_main_task___cs_tmp_if_cond_3;
                                   
tmain_task_0_9: IF(1,9,tmain_task_0_10)
                                   
                                   __cs_local_main_task___cs_tmp_if_cond_3 = (svp_simple_004_001_condition5 == 1);
                         
                                   
                                   if (__cs_local_main_task___cs_tmp_if_cond_3)
                         
                                             {
                                             
tmain_task_0_10: IF(1,10,tmain_task_0_11)
                                             
                                             __cs_local_main_task_reader4 = (svp_simple_004_001_global_var2);
                         
                                   }
                         
                                   
                                   __CPROVER_assume(__cs_pc_cs[1] >= 11);
                                   ;
                                   
                                   __exit_main_task:
                                   __CPROVER_assume(__cs_pc_cs[1] >= 11);
                         
                                   
                                   ;
                                   ;
                                   
tmain_task_0_11: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *svp_simple_004_001_isr_1_0(void *__cs_param_svp_simple_004_001_isr_1_arg)
                         
                         {
                                   
IF(2,0,tsvp_simple_004_001_isr_1_0_1)
                                   
                                   svp_simple_004_001_condition6 = (0);
                                   
                                   static _Bool __cs_local_svp_simple_004_001_isr_1___cs_tmp_if_cond_4;
                                   
tsvp_simple_004_001_isr_1_0_1: IF(2,1,tsvp_simple_004_001_isr_1_0_2)
                                   
                                   __cs_local_svp_simple_004_001_isr_1___cs_tmp_if_cond_4 = (svp_simple_004_001_condition3 == 1);
                                   
                                   if (__cs_local_svp_simple_004_001_isr_1___cs_tmp_if_cond_4)
                         
                                             {
                                             
tsvp_simple_004_001_isr_1_0_2: IF(2,2,tsvp_simple_004_001_isr_1_0_3)
                                             
                                             svp_simple_004_001_global_var1 = (0xaa);
                                   }
                                   else
                         
                                             {
                                             __CPROVER_assume(__cs_pc_cs[2] >= 3);
                                             
tsvp_simple_004_001_isr_1_0_3: IF(2,3,tsvp_simple_004_001_isr_1_0_4)
                                             
                                             svp_simple_004_001_global_var3 = (0xcc);
                                   }
                         
                                   
                                   __CPROVER_assume(__cs_pc_cs[2] >= 4);
                                   ;
                                   
                                   enable_isr(2);
                                   
                                   __cs_disable_thread[3] = (0);
                                   
                                   __exit_svp_simple_004_001_isr_1:
                                   __CPROVER_assume(__cs_pc_cs[2] >= 4);
                         
                                   
                                   ;
                                   ;
                                   
tsvp_simple_004_001_isr_1_0_4: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         void *svp_simple_004_001_isr_2_0(void *__cs_param_svp_simple_004_001_isr_2_arg)
                         
                         {
                                   
IF(3,0,tsvp_simple_004_001_isr_2_0_1)
                                   
                                   static _Bool __cs_local_svp_simple_004_001_isr_2___cs_tmp_if_cond_5;
                                   
tsvp_simple_004_001_isr_2_0_1: IF(3,1,tsvp_simple_004_001_isr_2_0_2)
                                   
                                   __cs_local_svp_simple_004_001_isr_2___cs_tmp_if_cond_5 = (svp_simple_004_001_condition6 == 1);
                                   
                                   if (__cs_local_svp_simple_004_001_isr_2___cs_tmp_if_cond_5)
                         
                                             {
                                             
tsvp_simple_004_001_isr_2_0_2: IF(3,2,tsvp_simple_004_001_isr_2_0_3)
                                             
                                             svp_simple_004_001_global_var2 = (0x22);
                                   }
                         
                                   
                                   __CPROVER_assume(__cs_pc_cs[3] >= 3);
                                   ;
                                   
                                   __exit_svp_simple_004_001_isr_2:
                                   __CPROVER_assume(__cs_pc_cs[3] >= 3);
                         
                                   
                                   ;
                                   ;
                                   
tsvp_simple_004_001_isr_2_0_3: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         int main_thread(void)
                         {
                                   
IF(0,0,tmain_1)
                                   
                                   static cspthread_t __cs_local_main_t0;
                                   __cs_init_scalar(& __cs_local_main_t0, sizeof(cspthread_t));
                                   
                                   static cspthread_t __cs_local_main_t1;
                                   __cs_init_scalar(& __cs_local_main_t1, sizeof(cspthread_t));
                                   
                                   static cspthread_t __cs_local_main_t2;
                                   __cs_init_scalar(& __cs_local_main_t2, sizeof(cspthread_t));
                         
                                   pthread_create_2(& __cs_local_main_t0, 0, main_task_0, 0, 1);
                                   
tmain_1: IF(0,1,tmain_2)
                         
                                   pthread_create_2(& __cs_local_main_t1, 0, svp_simple_004_001_isr_1_0, 0, 2);
                                   
tmain_2: IF(0,2,tmain_3)
                         
                                   pthread_create_2(& __cs_local_main_t2, 0, svp_simple_004_001_isr_2_0, 0, 3);
                                   
                                   __exit_main:
                                   __CPROVER_assume(__cs_pc_cs[0] >= 3);
                         
                                   
                                   ;
                                   ;
                                   
tmain_3: 
                                   
                                   pthread_exit(0);
                         }
                         
                         
                         int main(void)
                         {
                                   
/* round  0 */
                                   
/* main */
                                   
                                   __cs_thread_index = (0);
                                   
                                   unsigned __CPROVER_bitvector[2] __cs_tmp_t0_r0;
                                   
                                   __cs_pc_cs[0] = (__cs_tmp_t0_r0);
                                   
                                   __CPROVER_assume(__cs_pc_cs[0] > 0);
                                   
                                   __CPROVER_assume(__cs_pc_cs[0] <= 3);
                                   
                                   main_thread();
                                   
                                   __cs_pc[0] = (__cs_pc_cs[0]);
                                   
/* main_task_0 */
                                   
                                   unsigned __CPROVER_bitvector[4] __cs_tmp_t1_r0;
                                   
                                   if (__cs_active_thread[1] && (__cs_disable_thread[1] != 1))
                                   {
                                             __cs_thread_index = (1);
                                             
                                             __cs_pc_cs[1] = (__cs_tmp_t1_r0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] > 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 11);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                             
                                             __cs_pc[1] = (__cs_pc_cs[1]);
                                   }
                         
                                   
/* svp_simple_004_001_isr_1_0 random prio:2 */
                                   
                                   unsigned __CPROVER_bitvector[3] __cs_tmp_t2_r0;
                                   
                                   if (((__cs_active_thread[2] != 0) && (__cs_disable_thread[2] != 1)) && (__cs_random[1] == 0))
                                   {
                                             
                                             __cs_random[1] = (1);
                                             
                                             __cs_thread_index = (2);
                                             
                                             __cs_pc_cs[2] = (__cs_tmp_t2_r0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] >= 0);
                                             
                                             __CPROVER_assume(__cs_pc_cs[2] <= 4);
                                             
                                             svp_simple_004_001_isr_1_0(__cs_threadargs[2]);
                                             
                                             __cs_pc[2] = (__cs_pc_cs[2]);
                                   }
                         
                                   
/* svp_simple_004_001_isr_2_0 random prio:3 */
                                   
                                   if ((((__cs_active_thread[3] != 0) && (__cs_disable_thread[3] != 1)) && (__cs_pc[3] == 0)) && (__cs_random[0] == 0))
                                   {
                                             
                                             __cs_random[0] = (1);
                                             
                                             __cs_thread_index = (3);
                                             
                                             __cs_pc_cs[3] = (3);
                                             
                                             svp_simple_004_001_isr_2_0(__cs_threadargs[3]);
                                             
                                             __cs_pc[3] = (__cs_pc_cs[3]);
                                   }
                         
                                   
                                   __cs_random[0] = (0);
                                   
                                   __cs_random[1] = (0);
                                   
                                   unsigned int __cs_tmp_t1_r1;
                                   
                                   if (__cs_active_thread[1] && (__cs_disable_thread[1] != 1))
                                   {
                                             
                                             __cs_thread_index = (1);
                                             
                                             __cs_pc_cs[1] = (__cs_tmp_t1_r1);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                                             
                                             __CPROVER_assume(__cs_pc_cs[1] <= 11);
                                             
                                             main_task_0(__cs_threadargs[1]);
                                   }
                         
                                   
                                   return (0);
                         }
                         
                         
