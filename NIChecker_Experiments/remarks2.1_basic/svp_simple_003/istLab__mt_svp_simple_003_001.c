
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

int svp_simple_003_001_global_var1;

int svp_simple_003_001_global_var2;

int svp_simple_003_001_global_flag = 1;

int svp_simple_003_001_global_flag1 = 0;

void *main_task_0(void *__cs_param_main_task_arg)

{
          
          int __cs_local_main_task_reader1;
          
          int __cs_local_main_task_reader2;
          
          int __cs_local_main_task_reader3;
          
          int __cs_local_main_task_reader4;

                    {
                    
                    int __cs_local_main_task_i = 0;
          }
          
          disable_isr(1);
          
          disable_isr(2);

                    {
                    
                    int __cs_local_main_task_i;
                    
                    __cs_local_main_task_i = 0;
                    
                    int __cs_local_main_task_loop_1_IOVar1;
                    
                    int __cs_local_main_task_loop_1_block_2;
                    
                    int __cs_local_main_task_t = 0;
                    
                    if (! ((__cs_local_main_task_t < 2) && (__cs_local_main_task_i < 10000)))

                                        {
                              
                              goto __exit_loop_1;
                    }


                                        {
                              
                              __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i;
                              
                              __cs_local_main_task_loop_1_block_2 = nondet_int();
                              
                              __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + (1 * __cs_local_main_task_loop_1_block_2);
                              
                              __CPROVER_assume(__cs_local_main_task_loop_1_block_2 >= 0);
                              
                              __CPROVER_assume(__cs_local_main_task_i < 10000);

                                                            {
                                        
                                        _Bool __cs_local_main_task___cs_tmp_if_cond_0;
                                        
                                        __cs_local_main_task___cs_tmp_if_cond_0 = __cs_local_main_task_i == 9999;
                                        
                                        if (__cs_local_main_task___cs_tmp_if_cond_0)

                                                                                {
                                                  
                                                  __cs_local_main_task_reader3 = svp_simple_003_001_global_var2;
                                        }

                              }
                              
                              __cs_local_main_task_i = __cs_local_main_task_i + 1;
                    }
                    
                    __cs_local_main_task_t = __cs_local_main_task_t + 1;
                    
                    if (! ((__cs_local_main_task_t < 2) && (__cs_local_main_task_i < 10000)))

                                        {
                              
                              goto __exit_loop_1;
                    }


                                        {
                              
                              __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i;
                              
                              __cs_local_main_task_loop_1_block_2 = nondet_int();
                              
                              __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + (1 * __cs_local_main_task_loop_1_block_2);
                              
                              __CPROVER_assume(__cs_local_main_task_loop_1_block_2 >= 0);
                              
                              __CPROVER_assume(__cs_local_main_task_i < 10000);

                                                            {
                                        
                                        _Bool __cs_local_main_task___cs_tmp_if_cond_0;
                                        
                                        __cs_local_main_task___cs_tmp_if_cond_0 = __cs_local_main_task_i == 9999;
                                        
                                        if (__cs_local_main_task___cs_tmp_if_cond_0)

                                                                                {
                                                  
                                                  __cs_local_main_task_reader3 = svp_simple_003_001_global_var2;
                                        }

                              }
                              
                              __cs_local_main_task_i = __cs_local_main_task_i + 1;
                    }
                    
                    __cs_local_main_task_t = __cs_local_main_task_t + 1;
                    
                    _Bool __cs_loop_1 = (__cs_local_main_task_t < 2) && (__cs_local_main_task_i < 10000);
                    
                    __VERIFIER_assume(! __cs_loop_1);
                    
                    __exit_loop_1:
                    
                    ;

                    
                    __CPROVER_assume(! (__cs_local_main_task_i < 10000));
          }

                    {
                    
                    int __cs_local_main_task_j;
                    
                    __cs_local_main_task_j = 10000;
                    
                    int __cs_local_main_task_loop_2_IOVar1;
                    
                    int __cs_local_main_task_loop_2_block_2;
                    
                    int __cs_local_main_task_t = 0;
                    
                    if (! ((__cs_local_main_task_t < 2) && (__cs_local_main_task_j > 0)))

                                        {
                              
                              goto __exit_loop_2;
                    }


                                        {
                              
                              __cs_local_main_task_loop_2_IOVar1 = __cs_local_main_task_j;
                              
                              __cs_local_main_task_loop_2_block_2 = nondet_int();
                              
                              __cs_local_main_task_j = __cs_local_main_task_loop_2_IOVar1 - (1 * __cs_local_main_task_loop_2_block_2);
                              
                              __CPROVER_assume(__cs_local_main_task_loop_2_block_2 >= 0);
                              
                              __CPROVER_assume(__cs_local_main_task_j > 0);

                                                            {
                                        
                                        _Bool __cs_local_main_task___cs_tmp_if_cond_1;
                                        
                                        __cs_local_main_task___cs_tmp_if_cond_1 = __cs_local_main_task_j == 9999;
                                        
                                        if (__cs_local_main_task___cs_tmp_if_cond_1)

                                                                                {
                                                  
                                                  __cs_local_main_task_reader4 = svp_simple_003_001_global_var2;
                                        }

                              }
                              
                              __cs_local_main_task_j = __cs_local_main_task_j - 1;
                    }
                    
                    __cs_local_main_task_t = __cs_local_main_task_t + 1;
                    
                    if (! ((__cs_local_main_task_t < 2) && (__cs_local_main_task_j > 0)))

                                        {
                              
                              goto __exit_loop_2;
                    }


                                        {
                              
                              __cs_local_main_task_loop_2_IOVar1 = __cs_local_main_task_j;
                              
                              __cs_local_main_task_loop_2_block_2 = nondet_int();
                              
                              __cs_local_main_task_j = __cs_local_main_task_loop_2_IOVar1 - (1 * __cs_local_main_task_loop_2_block_2);
                              
                              __CPROVER_assume(__cs_local_main_task_loop_2_block_2 >= 0);
                              
                              __CPROVER_assume(__cs_local_main_task_j > 0);

                                                            {
                                        
                                        _Bool __cs_local_main_task___cs_tmp_if_cond_1;
                                        
                                        __cs_local_main_task___cs_tmp_if_cond_1 = __cs_local_main_task_j == 9999;
                                        
                                        if (__cs_local_main_task___cs_tmp_if_cond_1)

                                                                                {
                                                  
                                                  __cs_local_main_task_reader4 = svp_simple_003_001_global_var2;
                                        }

                              }
                              
                              __cs_local_main_task_j = __cs_local_main_task_j - 1;
                    }
                    
                    __cs_local_main_task_t = __cs_local_main_task_t + 1;
                    
                    _Bool __cs_loop_2 = (__cs_local_main_task_t < 2) && (__cs_local_main_task_j > 0);
                    
                    __VERIFIER_assume(! __cs_loop_2);
                    
                    __exit_loop_2:
                    
                    ;

                    
                    __CPROVER_assume(! (__cs_local_main_task_j > 0));
          }
          
          enable_isr(1);

                    {
                    
                    int __cs_local_main_task_i;
                    
                    __cs_local_main_task_i = 0;
                    
                    int __cs_local_main_task_loop_3_IOVar1;
                    
                    int __cs_local_main_task_loop_3_block_1;
                    
                    int __cs_local_main_task_t = 0;
                    
                    if (! ((__cs_local_main_task_t < 1) && (__cs_local_main_task_i < 10000)))

                                        {
                              
                              goto __exit_loop_3;
                    }


                                        {
                              
                              __cs_local_main_task_loop_3_IOVar1 = __cs_local_main_task_i;
                              
                              __cs_local_main_task_loop_3_block_1 = nondet_int();
                              
                              __cs_local_main_task_i = __cs_local_main_task_loop_3_IOVar1 + (1 * __cs_local_main_task_loop_3_block_1);
                              
                              __CPROVER_assume(__cs_local_main_task_loop_3_block_1 >= 0);
                              
                              __CPROVER_assume(__cs_local_main_task_i < 10000);

                                                            {
                              }
                              
                              __cs_local_main_task_i = __cs_local_main_task_i + 1;
                    }
                    
                    __cs_local_main_task_t = __cs_local_main_task_t + 1;
                    
                    if (! ((__cs_local_main_task_t < 1) && (__cs_local_main_task_i < 10000)))

                                        {
                              
                              goto __exit_loop_3;
                    }


                                        {
                              
                              __cs_local_main_task_loop_3_IOVar1 = __cs_local_main_task_i;
                              
                              __cs_local_main_task_loop_3_block_1 = nondet_int();
                              
                              __cs_local_main_task_i = __cs_local_main_task_loop_3_IOVar1 + (1 * __cs_local_main_task_loop_3_block_1);
                              
                              __CPROVER_assume(__cs_local_main_task_loop_3_block_1 >= 0);
                              
                              __CPROVER_assume(__cs_local_main_task_i < 10000);

                                                            {
                              }
                              
                              __cs_local_main_task_i = __cs_local_main_task_i + 1;
                    }
                    
                    __cs_local_main_task_t = __cs_local_main_task_t + 1;
                    
                    _Bool __cs_loop_3 = (__cs_local_main_task_t < 1) && (__cs_local_main_task_i < 10000);
                    
                    __VERIFIER_assume(! __cs_loop_3);
                    
                    __exit_loop_3:
                    
                    ;

                    
                    __CPROVER_assume(! (__cs_local_main_task_i < 10000));
          }

                    {
                    
                    int __cs_local_main_task_j;
                    
                    __cs_local_main_task_j = 10000;
                    
                    int __cs_local_main_task_loop_4_IOVar1;
                    
                    int __cs_local_main_task_loop_4_block_1;
                    
                    int __cs_local_main_task_t = 0;
                    
                    if (! ((__cs_local_main_task_t < 1) && (__cs_local_main_task_j > 0)))

                                        {
                              
                              goto __exit_loop_4;
                    }


                                        {
                              
                              __cs_local_main_task_loop_4_IOVar1 = __cs_local_main_task_j;
                              
                              __cs_local_main_task_loop_4_block_1 = nondet_int();
                              
                              __cs_local_main_task_j = __cs_local_main_task_loop_4_IOVar1 - (1 * __cs_local_main_task_loop_4_block_1);
                              
                              __CPROVER_assume(__cs_local_main_task_loop_4_block_1 >= 0);
                              
                              __CPROVER_assume(__cs_local_main_task_j > 0);

                                                            {
                              }
                              
                              __cs_local_main_task_j = __cs_local_main_task_j - 1;
                    }
                    
                    __cs_local_main_task_t = __cs_local_main_task_t + 1;
                    
                    if (! ((__cs_local_main_task_t < 1) && (__cs_local_main_task_j > 0)))

                                        {
                              
                              goto __exit_loop_4;
                    }


                                        {
                              
                              __cs_local_main_task_loop_4_IOVar1 = __cs_local_main_task_j;
                              
                              __cs_local_main_task_loop_4_block_1 = nondet_int();
                              
                              __cs_local_main_task_j = __cs_local_main_task_loop_4_IOVar1 - (1 * __cs_local_main_task_loop_4_block_1);
                              
                              __CPROVER_assume(__cs_local_main_task_loop_4_block_1 >= 0);
                              
                              __CPROVER_assume(__cs_local_main_task_j > 0);

                                                            {
                              }
                              
                              __cs_local_main_task_j = __cs_local_main_task_j - 1;
                    }
                    
                    __cs_local_main_task_t = __cs_local_main_task_t + 1;
                    
                    _Bool __cs_loop_4 = (__cs_local_main_task_t < 1) && (__cs_local_main_task_j > 0);
                    
                    __VERIFIER_assume(! __cs_loop_4);
                    
                    __exit_loop_4:
                    
                    ;

                    
                    __CPROVER_assume(! (__cs_local_main_task_j > 0));
          }
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_003_001_isr_2_0(void *__cs_param_svp_simple_003_001_isr_2_arg)

{

                    {
                    
                    int __cs_local_svp_simple_003_001_isr_2_i = 0;
          }
          
          __exit_svp_simple_003_001_isr_2:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_003_001_isr_1_0(void *__cs_param_svp_simple_003_001_isr_1_arg)

{
          
          enable_isr(2);
          
          svp_simple_003_001_global_var2 = 999;
          
          _Bool __cs_local_svp_simple_003_001_isr_1___cs_tmp_if_cond_2;
          
          __cs_local_svp_simple_003_001_isr_1___cs_tmp_if_cond_2 = svp_simple_003_001_global_flag == 1;
          
          if (__cs_local_svp_simple_003_001_isr_1___cs_tmp_if_cond_2)

                    {
          }
          else

                    {
          }

          
          __exit_svp_simple_003_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t __cs_local_main_t0;
          
          pthread_t __cs_local_main_t1;
          
          pthread_t __cs_local_main_t2;
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, svp_simple_003_001_isr_1_0, 0);
          
          pthread_create(& __cs_local_main_t2, 0, svp_simple_003_001_isr_2_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

