
typedef int pthread_t;

int global_clock;

int irq;

int global_id;

int global_dev;

int cnt1;

int cnt2;

int cnt3;

int cnt4;

int cnt5;

int cnt6;

int cnt7;

int cnt8;

int test_global_array[10000];

int test_global_var1;

int test_global_var2;

int test_global_var3;

int test_global_condition1;

int test_global_condition2;

int test_global_condition3;

int test_global_condition4;

void JudgeCondi(void);

void *req7_isr_0(void *__cs_param_req7_isr_arg)

{

                    {
          }

                    {
          }
          
          int __cs_local_req7_isr_i = 0;
          
          int __cs_local_req7_isr_maxnum;
          
          int __cs_local_req7_isr_mininum;
          
          __cs_local_req7_isr_i = 0;
          
          int __cs_local_req7_isr_loop_1_IOVar1;
          
          int __cs_local_req7_isr_loop_1_block_3;
          
          int __cs_local_req7_isr_t_1 = 0;
          
          if (! ((__cs_local_req7_isr_t_1 < 2) && (__cs_local_req7_isr_i < 10000)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_req7_isr_loop_1_IOVar1 = __cs_local_req7_isr_i;
                    
                    __cs_local_req7_isr_loop_1_block_3 = nondet_int();
                    
                    __cs_local_req7_isr_i = __cs_local_req7_isr_loop_1_IOVar1 + (1 * __cs_local_req7_isr_loop_1_block_3);
                    
                    __CPROVER_assume(__cs_local_req7_isr_loop_1_block_3 >= 0);
                    
                    __CPROVER_assume(__cs_local_req7_isr_i < 10000);

                                        {
                              
                              _Bool __cs_local_req7_isr___cs_tmp_if_cond_0;
                              
                              __cs_local_req7_isr___cs_tmp_if_cond_0 = __cs_local_req7_isr_i == 9000;
                              
                              if (__cs_local_req7_isr___cs_tmp_if_cond_0)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                              
                              _Bool __cs_local_req7_isr___cs_tmp_if_cond_1;
                              
                              __cs_local_req7_isr___cs_tmp_if_cond_1 = __cs_local_req7_isr_i == 10001;
                              
                              if (__cs_local_req7_isr___cs_tmp_if_cond_1)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                    }
                    
                    __cs_local_req7_isr_i = __cs_local_req7_isr_i + 1;
          }
          
          __cs_local_req7_isr_t_1 = __cs_local_req7_isr_t_1 + 1;
          
          if (! ((__cs_local_req7_isr_t_1 < 2) && (__cs_local_req7_isr_i < 10000)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_req7_isr_loop_1_IOVar1 = __cs_local_req7_isr_i;
                    
                    __cs_local_req7_isr_loop_1_block_3 = nondet_int();
                    
                    __cs_local_req7_isr_i = __cs_local_req7_isr_loop_1_IOVar1 + (1 * __cs_local_req7_isr_loop_1_block_3);
                    
                    __CPROVER_assume(__cs_local_req7_isr_loop_1_block_3 >= 0);
                    
                    __CPROVER_assume(__cs_local_req7_isr_i < 10000);

                                        {
                              
                              _Bool __cs_local_req7_isr___cs_tmp_if_cond_0;
                              
                              __cs_local_req7_isr___cs_tmp_if_cond_0 = __cs_local_req7_isr_i == 9000;
                              
                              if (__cs_local_req7_isr___cs_tmp_if_cond_0)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                              
                              _Bool __cs_local_req7_isr___cs_tmp_if_cond_1;
                              
                              __cs_local_req7_isr___cs_tmp_if_cond_1 = __cs_local_req7_isr_i == 10001;
                              
                              if (__cs_local_req7_isr___cs_tmp_if_cond_1)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                    }
                    
                    __cs_local_req7_isr_i = __cs_local_req7_isr_i + 1;
          }
          
          __cs_local_req7_isr_t_1 = __cs_local_req7_isr_t_1 + 1;
          
          _Bool __cs_loop_1 = (__cs_local_req7_isr_t_1 < 2) && (__cs_local_req7_isr_i < 10000);
          
          __VERIFIER_assume(! __cs_loop_1);
          
          __exit_loop_1:
          
          ;

          
          __CPROVER_assume(! (__cs_local_req7_isr_i < 10000));
          
          __cs_local_req7_isr_mininum = test_global_array[9000] - 10;
          
          __cs_local_req7_isr_maxnum = test_global_array[0] + 10;
          
          __exit_req7_isr:
          
          ;

          
          pthread_exit(0);
}


void *req2_isr_0(void *__cs_param_req2_isr_arg)

{

                    {
          }

                    {
          }
          
          __exit_req2_isr:
          
          ;

          
          pthread_exit(0);
}


void *req1_isr_0(void *__cs_param_req1_isr_arg)

{

                    {
          }

                    {
          }
          
          _Bool __cs_local_req1_isr___cs_tmp_if_cond_2;
          
          __cs_local_req1_isr___cs_tmp_if_cond_2 = irq == 0;
          
          if (__cs_local_req1_isr___cs_tmp_if_cond_2)

                    {

                                        {
                              
                              int __cs_local_req1_isr_reader1;
                              
                              int __cs_local_req1_isr_reader2;
                              
                              int __cs_local_req1_isr_reader3;
                              
                              int __cs_local_req1_isr_reader4;
                    }
          }

          
          __exit_req1_isr:
          
          ;

          
          pthread_exit(0);
}


void *main_task_0(void *__cs_param_main_task_arg)

{
          
          disable_isr(- 1);
          
          enable_isr(- 1);
          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *req8_isr_0(void *__cs_param_req8_isr_arg)

{

                    {
          }

                    {
                    
                    _Bool __cs_local_req8_isr___cs_tmp_if_cond_3;
                    
                    __cs_local_req8_isr___cs_tmp_if_cond_3 = irq > (- 1);
                    
                    if (__cs_local_req8_isr___cs_tmp_if_cond_3)

                                        {
                    }

          }

                    {
          }
          
          test_global_array[9000] = 999;
          
          __exit_req8_isr:
          
          ;

          
          pthread_exit(0);
}


void *req3_isr_0(void *__cs_param_req3_isr_arg)

{

                    {
          }

                    {
          }
          
          _Bool __cs_local_req3_isr___cs_tmp_if_cond_4;
          
          __cs_local_req3_isr___cs_tmp_if_cond_4 = global_id == (- 1);
          
          if (__cs_local_req3_isr___cs_tmp_if_cond_4)

                    {
          }
          else

                    {
          }

          
          __exit_req3_isr:
          
          ;

          
          pthread_exit(0);
}


void *req6_isr_0(void *__cs_param_req6_isr_arg)

{
          
          __exit_req6_isr:
          
          ;

          
          pthread_exit(0);
}


void *req5_isr_0(void *__cs_param_req5_isr_arg)

{

                    {
          }

                    {
          }
          
          __exit_req5_isr:
          
          ;

          
          pthread_exit(0);
}


void *req4_isr_0(void *__cs_param_req4_isr_arg)

{

                    {
          }

                    {
          }
          
          __exit_req4_isr:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t __cs_local_main_t0;
          
          pthread_t __cs_local_main_t1;
          
          pthread_t __cs_local_main_t2;
          
          pthread_t __cs_local_main_t3;
          
          pthread_t __cs_local_main_t4;
          
          pthread_t __cs_local_main_t5;
          
          pthread_t __cs_local_main_t6;
          
          pthread_t __cs_local_main_t7;
          
          pthread_t __cs_local_main_t8;
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, req1_isr_0, 0);
          
          pthread_create(& __cs_local_main_t2, 0, req2_isr_0, 0);
          
          pthread_create(& __cs_local_main_t3, 0, req3_isr_0, 0);
          
          pthread_create(& __cs_local_main_t4, 0, req4_isr_0, 0);
          
          pthread_create(& __cs_local_main_t5, 0, req5_isr_0, 0);
          
          pthread_create(& __cs_local_main_t6, 0, req6_isr_0, 0);
          
          pthread_create(& __cs_local_main_t7, 0, req7_isr_0, 0);
          
          pthread_create(& __cs_local_main_t8, 0, req8_isr_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

