
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

void *req7_isr(void *arg)

{

                    {
          }

                    {
          }
          
          int i = 0;
          
          int maxnum;
          
          int mininum;
          
          i = 0;
          
          int loop_1_IOVar1;
          
          int loop_1_block_3;
          
          for (int t_1 = 0; (t_1 < 2) && (i < 10000); t_1++)          {
                    
                    loop_1_IOVar1 = i;
                    
                    loop_1_block_3 = nondet_int();
                    
                    i = loop_1_IOVar1 + (1 * loop_1_block_3);
                    
                    __CPROVER_assume(loop_1_block_3 >= 0);
                    
                    __CPROVER_assume(i < 10000);

                                        {
                              
                              _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (i == 9000); 
                              if (__cs_tmp_if_cond_0)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                              
                              _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (i == (10000 + 1)); 
                              if (__cs_tmp_if_cond_1)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                    }
                    
                    i++;
          }

          
          __CPROVER_assume(! (i < 10000));
          
          mininum = test_global_array[9000] - 10;
          
          maxnum = test_global_array[0] + 10;
          
          __exit_req7_isr:
          
          ;

          
          pthread_exit(0);
}


void *req2_isr(void *arg)

{

                    {
          }

                    {
          }
          
          __exit_req2_isr:
          
          ;

          
          pthread_exit(0);
}


void *req1_isr(void *arg)

{

                    {
          }

                    {
          }
          
          _Bool __cs_tmp_if_cond_2; __cs_tmp_if_cond_2 = (irq == 0); 
          if (__cs_tmp_if_cond_2)

                    {

                                        {
                              
                              int reader1;
                              
                              int reader2;
                              
                              int reader3;
                              
                              int reader4;
                    }
          }

          
          __exit_req1_isr:
          
          ;

          
          pthread_exit(0);
}


void *main_task(void *arg)

{
          
          disable_isr(- 1);
          
          enable_isr(- 1);
          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *req8_isr(void *arg)

{

                    {
          }

                    {
                    
                    _Bool __cs_tmp_if_cond_3; __cs_tmp_if_cond_3 = (irq > (- 1)); 
                    if (__cs_tmp_if_cond_3)

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


void *req3_isr(void *arg)

{

                    {
          }

                    {
          }
          
          _Bool __cs_tmp_if_cond_4; __cs_tmp_if_cond_4 = (global_id == (- 1)); 
          if (__cs_tmp_if_cond_4)

                    {
          }
          else

                    {
          }

          
          __exit_req3_isr:
          
          ;

          
          pthread_exit(0);
}


void *req6_isr(void *arg)

{
          
          __exit_req6_isr:
          
          ;

          
          pthread_exit(0);
}


void *req5_isr(void *arg)

{

                    {
          }

                    {
          }
          
          __exit_req5_isr:
          
          ;

          
          pthread_exit(0);
}


void *req4_isr(void *arg)

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
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_t t2;
          
          pthread_t t3;
          
          pthread_t t4;
          
          pthread_t t5;
          
          pthread_t t6;
          
          pthread_t t7;
          
          pthread_t t8;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, req1_isr, 0);
          
          pthread_create(& t2, 0, req2_isr, 0);
          
          pthread_create(& t3, 0, req3_isr, 0);
          
          pthread_create(& t4, 0, req4_isr, 0);
          
          pthread_create(& t5, 0, req5_isr, 0);
          
          pthread_create(& t6, 0, req6_isr, 0);
          
          pthread_create(& t7, 0, req7_isr, 0);
          
          pthread_create(& t8, 0, req8_isr, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


