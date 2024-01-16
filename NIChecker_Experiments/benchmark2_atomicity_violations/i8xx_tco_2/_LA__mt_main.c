
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

int cnt4;

int cnt5;

int test_global_array[10000];

int test_global_var1;

int test_global_var2;

int test_global_var3;

int test_global_condition1;

int test_global_condition2;

int test_global_condition3;

int test_global_condition4;

void JudgeCondi(void);

void *writer2_isr(void *arg)

{

                    {

                                        {
                              
                              _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (0); 
                              if (__cs_tmp_if_cond_0)

                                                            {
                                        
                                        _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (! nowayout); 
                                        if (__cs_tmp_if_cond_1)

                                                                                {
                                        }

                              }


                                                            {

                                                                                {

                                                                                                    {
                                                            
                                                            int l = tco1_rld;

                                                                                                                        {
                                                            }
                                                  }
                                        }
                              }
                    }
          }
          
          __exit_writer2_isr:
          
          ;

          
          pthread_exit(0);
}


void *main_task(void *arg)

{
          
          disable_isr(- 1);
          
          test_global_condition1 = 1;
          
          test_global_condition2 = 1;
          
          enable_isr(- 1);

                    {
                    
                    int reader1;
                    
                    int reader2;
                    
                    int reader3;
                    
                    int reader4;
                    
                    _Bool __cs_tmp_if_cond_2; __cs_tmp_if_cond_2 = (test_global_condition1 == 1); 
                    if (__cs_tmp_if_cond_2)

                                        {
                              
                              reader1 = test_global_var1;
                    }

                    
                    _Bool __cs_tmp_if_cond_3; __cs_tmp_if_cond_3 = (test_global_condition2 == 1); 
                    if (__cs_tmp_if_cond_3)

                                        {
                              
                              reader2 = test_global_var1;
                    }

          }
          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *closer2_isr(void *arg)

{

                    {

                                        {
                              
                              _Bool __cs_tmp_if_cond_4; __cs_tmp_if_cond_4 = (1); 
                              if (__cs_tmp_if_cond_4)

                                                            {
                                        
                                        _Bool __cs_tmp_if_cond_5; __cs_tmp_if_cond_5 = (! nowayout); 
                                        if (__cs_tmp_if_cond_5)

                                                                                {
                                        }

                              }


                                                            {

                                                                                {

                                                                                                    {
                                                            
                                                            int l = tco1_rld;

                                                                                                                        {
                                                            }
                                                  }
                                        }
                              }
                    }
          }

                    {

                                        {
                              
                              _Bool __cs_tmp_if_cond_6; __cs_tmp_if_cond_6 = (tco_expect_close != 42); 
                              if (__cs_tmp_if_cond_6)

                                                            {
                              }
                              else

                                                            {
                              }


                                                            {
                                        
                                        int v = timer_alive;

                                                                                {
                                        }
                              }
                    }
          }
          
          test_global_var1 = 0x11;
          
          __exit_closer2_isr:
          
          ;

          
          pthread_exit(0);
}


void *closer1_isr(void *arg)

{

                    {

                                        {
                              
                              _Bool __cs_tmp_if_cond_7; __cs_tmp_if_cond_7 = (1); 
                              if (__cs_tmp_if_cond_7)

                                                            {
                                        
                                        _Bool __cs_tmp_if_cond_8; __cs_tmp_if_cond_8 = (! nowayout); 
                                        if (__cs_tmp_if_cond_8)

                                                                                {
                                        }

                              }


                                                            {

                                                                                {

                                                                                                    {
                                                            
                                                            int l = tco1_rld;

                                                                                                                        {
                                                            }
                                                  }
                                        }
                              }
                    }
          }
          
          __exit_closer1_isr:
          
          ;

          
          pthread_exit(0);
}


void *writer1_isr(void *arg)

{

                    {

                                        {
                              
                              _Bool __cs_tmp_if_cond_9; __cs_tmp_if_cond_9 = (0); 
                              if (__cs_tmp_if_cond_9)

                                                            {
                                        
                                        _Bool __cs_tmp_if_cond_10; __cs_tmp_if_cond_10 = (! nowayout); 
                                        if (__cs_tmp_if_cond_10)

                                                                                {
                                        }

                              }


                                                            {

                                                                                {

                                                                                                    {
                                                            
                                                            int l = tco1_rld;

                                                                                                                        {
                                                            }
                                                  }
                                        }
                              }
                    }
          }
          
          __exit_writer1_isr:
          
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
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, closer1_isr, 0);
          
          pthread_create(& t2, 0, closer2_isr, 0);
          
          pthread_create(& t3, 0, writer1_isr, 0);
          
          pthread_create(& t4, 0, writer2_isr, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


