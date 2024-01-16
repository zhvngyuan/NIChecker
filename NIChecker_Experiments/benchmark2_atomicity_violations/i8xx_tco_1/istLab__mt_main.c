
typedef int pthread_t;

unsigned int ACPIBASE;

int tco_lock;

unsigned long timer_alive;

char tco_expect_close;

char tco_write_buf;

char tco1_rld;

void spin_lock(int);

void spin_unlock(int);

void outb(int, int);

void clear_bit(int, int);

void tco_timer_keepalive(void);

void i8xx_tco_release(void);

void i8xx_tco_write(int);

int tco1_cnt_b0;

int tco1_cnt_b1;

int tco1_cnt_b2;

int tco1_cnt_b3;

int tco1_cnt_b4;

int tco1_cnt_b5;

int tco1_cnt_b6;

int tco1_cnt_b7;

int heartbeat = 30;

int nowayout = 0;

int cnt1;

int cnt2;

int cnt3;

int test_global_array[10000];

int test_global_var1;

int test_global_var2;

int test_global_var3;

int test_global_condition1;

int test_global_condition2;

int test_global_condition3;

int test_global_condition4;

void JudgeCondi(void);

void *main_task_0(void *__cs_param_main_task_arg)

{
          
          disable_isr(- 1);
          
          test_global_condition4 = 1;
          
          enable_isr(- 1);
          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *closer2_isr_0(void *__cs_param_closer2_isr_arg)

{

                    {

                                        {
                              
                              _Bool __cs_local_closer2_isr___cs_tmp_if_cond_0;
                              
                              __cs_local_closer2_isr___cs_tmp_if_cond_0 = 1;
                              
                              if (__cs_local_closer2_isr___cs_tmp_if_cond_0)

                                                            {
                                        
                                        _Bool __cs_local_closer2_isr___cs_tmp_if_cond_1;
                                        
                                        __cs_local_closer2_isr___cs_tmp_if_cond_1 = ! nowayout;
                                        
                                        if (__cs_local_closer2_isr___cs_tmp_if_cond_1)

                                                                                {
                                        }

                              }


                                                            {

                                                                                {

                                                                                                    {
                                                            
                                                            int __cs_local_closer2_isr_l = tco1_rld;

                                                                                                                        {
                                                            }
                                                  }
                                        }
                              }
                    }
          }
          
          _Bool __cs_local_closer2_isr___cs_tmp_if_cond_2;
          
          __cs_local_closer2_isr___cs_tmp_if_cond_2 = tco_expect_close == 42;
          
          if (__cs_local_closer2_isr___cs_tmp_if_cond_2)

                    {

                                        {
                              
                              int __cs_local_closer2_isr_reader1;
                              
                              int __cs_local_closer2_isr_reader2;
                              
                              int __cs_local_closer2_isr_reader3;
                              
                              int __cs_local_closer2_isr_reader4;
                    }
          }


                    {

                                        {

                                                            {
                                        
                                        int __cs_local_closer2_isr_v = timer_alive;

                                                                                {
                                        }
                              }
                    }
          }
          
          __exit_closer2_isr:
          
          ;

          
          pthread_exit(0);
}


void *closer1_isr_0(void *__cs_param_closer1_isr_arg)

{
          
          _Bool __cs_local_closer1_isr___cs_tmp_if_cond_3;
          
          __cs_local_closer1_isr___cs_tmp_if_cond_3 = test_global_condition3 == 1;
          
          if (__cs_local_closer1_isr___cs_tmp_if_cond_3)

                    {
          }
          else

                    {
          }


                    {

                                        {
                              
                              _Bool __cs_local_closer1_isr___cs_tmp_if_cond_4;
                              
                              __cs_local_closer1_isr___cs_tmp_if_cond_4 = 1;
                              
                              if (__cs_local_closer1_isr___cs_tmp_if_cond_4)

                                                            {
                                        
                                        _Bool __cs_local_closer1_isr___cs_tmp_if_cond_5;
                                        
                                        __cs_local_closer1_isr___cs_tmp_if_cond_5 = ! nowayout;
                                        
                                        if (__cs_local_closer1_isr___cs_tmp_if_cond_5)

                                                                                {
                                        }

                              }


                                                            {

                                                                                {

                                                                                                    {
                                                            
                                                            int __cs_local_closer1_isr_l = tco1_rld;

                                                                                                                        {
                                                            }
                                                  }
                                        }
                              }
                    }
          }

                    {

                                        {

                                                            {
                                        
                                        int __cs_local_closer1_isr_v = timer_alive;

                                                                                {
                                        }
                              }
                    }
          }
          
          _Bool __cs_local_closer1_isr___cs_tmp_if_cond_6;
          
          __cs_local_closer1_isr___cs_tmp_if_cond_6 = test_global_condition4 == 1;
          
          if (__cs_local_closer1_isr___cs_tmp_if_cond_6)

                    {
                    
                    test_global_array[9000] = 999;
          }

          
          __exit_closer1_isr:
          
          ;

          
          pthread_exit(0);
}


void *writer1_isr_0(void *__cs_param_writer1_isr_arg)

{

                    {

                                        {
                              
                              _Bool __cs_local_writer1_isr___cs_tmp_if_cond_7;
                              
                              __cs_local_writer1_isr___cs_tmp_if_cond_7 = 0;
                              
                              if (__cs_local_writer1_isr___cs_tmp_if_cond_7)

                                                            {
                                        
                                        _Bool __cs_local_writer1_isr___cs_tmp_if_cond_8;
                                        
                                        __cs_local_writer1_isr___cs_tmp_if_cond_8 = ! nowayout;
                                        
                                        if (__cs_local_writer1_isr___cs_tmp_if_cond_8)

                                                                                {
                                        }

                              }


                                                            {

                                                                                {

                                                                                                    {
                                                            
                                                            int __cs_local_writer1_isr_l = tco1_rld;

                                                                                                                        {
                                                            }
                                                  }
                                        }
                              }
                    }
          }
          
          int __cs_local_writer1_isr_i = 0;
          
          int __cs_local_writer1_isr_maxnum;
          
          int __cs_local_writer1_isr_mininum;
          
          __cs_local_writer1_isr_i = 0;
          
          int __cs_local_writer1_isr_loop_1_IOVar1;
          
          int __cs_local_writer1_isr_loop_1_block_3;
          
          int __cs_local_writer1_isr_t_1 = 0;
          
          if (! ((__cs_local_writer1_isr_t_1 < 2) && (__cs_local_writer1_isr_i < 10000)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_writer1_isr_loop_1_IOVar1 = __cs_local_writer1_isr_i;
                    
                    __cs_local_writer1_isr_loop_1_block_3 = nondet_int();
                    
                    __cs_local_writer1_isr_i = __cs_local_writer1_isr_loop_1_IOVar1 + (1 * __cs_local_writer1_isr_loop_1_block_3);
                    
                    __CPROVER_assume(__cs_local_writer1_isr_loop_1_block_3 >= 0);
                    
                    __CPROVER_assume(__cs_local_writer1_isr_i < 10000);

                                        {
                              
                              _Bool __cs_local_writer1_isr___cs_tmp_if_cond_9;
                              
                              __cs_local_writer1_isr___cs_tmp_if_cond_9 = __cs_local_writer1_isr_i == 9000;
                              
                              if (__cs_local_writer1_isr___cs_tmp_if_cond_9)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                              
                              _Bool __cs_local_writer1_isr___cs_tmp_if_cond_10;
                              
                              __cs_local_writer1_isr___cs_tmp_if_cond_10 = __cs_local_writer1_isr_i == 10001;
                              
                              if (__cs_local_writer1_isr___cs_tmp_if_cond_10)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                    }
                    
                    __cs_local_writer1_isr_i = __cs_local_writer1_isr_i + 1;
          }
          
          __cs_local_writer1_isr_t_1 = __cs_local_writer1_isr_t_1 + 1;
          
          if (! ((__cs_local_writer1_isr_t_1 < 2) && (__cs_local_writer1_isr_i < 10000)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_writer1_isr_loop_1_IOVar1 = __cs_local_writer1_isr_i;
                    
                    __cs_local_writer1_isr_loop_1_block_3 = nondet_int();
                    
                    __cs_local_writer1_isr_i = __cs_local_writer1_isr_loop_1_IOVar1 + (1 * __cs_local_writer1_isr_loop_1_block_3);
                    
                    __CPROVER_assume(__cs_local_writer1_isr_loop_1_block_3 >= 0);
                    
                    __CPROVER_assume(__cs_local_writer1_isr_i < 10000);

                                        {
                              
                              _Bool __cs_local_writer1_isr___cs_tmp_if_cond_9;
                              
                              __cs_local_writer1_isr___cs_tmp_if_cond_9 = __cs_local_writer1_isr_i == 9000;
                              
                              if (__cs_local_writer1_isr___cs_tmp_if_cond_9)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                              
                              _Bool __cs_local_writer1_isr___cs_tmp_if_cond_10;
                              
                              __cs_local_writer1_isr___cs_tmp_if_cond_10 = __cs_local_writer1_isr_i == 10001;
                              
                              if (__cs_local_writer1_isr___cs_tmp_if_cond_10)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                    }
                    
                    __cs_local_writer1_isr_i = __cs_local_writer1_isr_i + 1;
          }
          
          __cs_local_writer1_isr_t_1 = __cs_local_writer1_isr_t_1 + 1;
          
          _Bool __cs_loop_1 = (__cs_local_writer1_isr_t_1 < 2) && (__cs_local_writer1_isr_i < 10000);
          
          __VERIFIER_assume(! __cs_loop_1);
          
          __exit_loop_1:
          
          ;

          
          __CPROVER_assume(! (__cs_local_writer1_isr_i < 10000));
          
          __cs_local_writer1_isr_mininum = test_global_array[9000] - 10;
          
          __cs_local_writer1_isr_maxnum = test_global_array[0] + 10;
          
          __exit_writer1_isr:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t __cs_local_main_t0;
          
          pthread_t __cs_local_main_t1;
          
          pthread_t __cs_local_main_t2;
          
          pthread_t __cs_local_main_t3;
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, closer2_isr_0, 0);
          
          pthread_create(& __cs_local_main_t2, 0, closer1_isr_0, 0);
          
          pthread_create(& __cs_local_main_t3, 0, writer1_isr_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

