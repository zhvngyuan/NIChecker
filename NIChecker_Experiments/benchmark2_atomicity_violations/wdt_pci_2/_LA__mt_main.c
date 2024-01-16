
typedef int pthread_t;

char wdtpci_write_buf;

char wdt_dc_port;

long jiffies;

void spin_lock(int);

void spin_unlock(int);

void outb(int, int);

void udelay(int);

void clear_bit(int, int);

void up(int);

void wdt_ctr_load(int, int);

void wdt_ctr_mode(int, int);

void wdtpci_stop(void);

void wdtpci_ping(void);

void wdtpci_write(int);

void wdtpci_release(void);

int dev_count;

unsigned open_sem;

int wdtpci_lock;

int expect_close;

int io;

int irq;

int heartbeat = 60;

int wd_heartbeat;

int nowayout = 0;

int cnt1;

int cnt2;

int cnt3;

int cnt4;

int cnt5;

int cnt6;

int count;

int buf;

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
          
          _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (count); 
          if (__cs_tmp_if_cond_0)

                    {
                    
                    _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (! nowayout); 
                    if (__cs_tmp_if_cond_1)

                                        {
                    }

          }

          
          __exit_writer2_isr:
          
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


void *closer2_isr(void *arg)

{
          
          _Bool __cs_tmp_if_cond_2; __cs_tmp_if_cond_2 = (count); 
          if (__cs_tmp_if_cond_2)

                    {
                    
                    _Bool __cs_tmp_if_cond_3; __cs_tmp_if_cond_3 = (! nowayout); 
                    if (__cs_tmp_if_cond_3)

                                        {
                    }

          }

          
          _Bool __cs_tmp_if_cond_4; __cs_tmp_if_cond_4 = (expect_close != 42); 
          if (__cs_tmp_if_cond_4)

                    {
          }
          else

                    {
          }

          
          __exit_closer2_isr:
          
          ;

          
          pthread_exit(0);
}


void *closer3_isr(void *arg)

{
          
          _Bool __cs_tmp_if_cond_5; __cs_tmp_if_cond_5 = (count); 
          if (__cs_tmp_if_cond_5)

                    {
                    
                    _Bool __cs_tmp_if_cond_6; __cs_tmp_if_cond_6 = (! nowayout); 
                    if (__cs_tmp_if_cond_6)

                                        {
                    }

          }

          
          _Bool __cs_tmp_if_cond_7; __cs_tmp_if_cond_7 = (expect_close != 42); 
          if (__cs_tmp_if_cond_7)

                    {
          }
          else

                    {
          }

          
          test_global_array[9000] = 999;
          
          __exit_closer3_isr:
          
          ;

          
          pthread_exit(0);
}


void *closer1_isr(void *arg)

{
          
          _Bool __cs_tmp_if_cond_8; __cs_tmp_if_cond_8 = (count); 
          if (__cs_tmp_if_cond_8)

                    {
                    
                    _Bool __cs_tmp_if_cond_9; __cs_tmp_if_cond_9 = (! nowayout); 
                    if (__cs_tmp_if_cond_9)

                                        {
                    }


                                        {
                              
                              int reader1;
                              
                              int reader2;
                              
                              int reader3;
                              
                              int reader4;
                    }
          }

          
          _Bool __cs_tmp_if_cond_10; __cs_tmp_if_cond_10 = (expect_close != 42); 
          if (__cs_tmp_if_cond_10)

                    {
          }
          else

                    {
          }

          
          __exit_closer1_isr:
          
          ;

          
          pthread_exit(0);
}


void *writer1_isr(void *arg)

{
          
          _Bool __cs_tmp_if_cond_11; __cs_tmp_if_cond_11 = (count); 
          if (__cs_tmp_if_cond_11)

                    {
                    
                    _Bool __cs_tmp_if_cond_12; __cs_tmp_if_cond_12 = (! nowayout); 
                    if (__cs_tmp_if_cond_12)

                                        {
                    }

          }

          
          __exit_writer1_isr:
          
          ;

          
          pthread_exit(0);
}


void *writer3_isr(void *arg)

{
          
          _Bool __cs_tmp_if_cond_13; __cs_tmp_if_cond_13 = (count); 
          if (__cs_tmp_if_cond_13)

                    {
                    
                    _Bool __cs_tmp_if_cond_14; __cs_tmp_if_cond_14 = (! nowayout); 
                    if (__cs_tmp_if_cond_14)

                                        {
                    }

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
                              
                              _Bool __cs_tmp_if_cond_15; __cs_tmp_if_cond_15 = (i == 9000); 
                              if (__cs_tmp_if_cond_15)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                              
                              _Bool __cs_tmp_if_cond_16; __cs_tmp_if_cond_16 = (i == (10000 + 1)); 
                              if (__cs_tmp_if_cond_16)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                    }
                    
                    i++;
          }

          
          __CPROVER_assume(! (i < 10000));
          
          mininum = test_global_array[9000] - 10;
          
          maxnum = test_global_array[0] + 10;
          
          __exit_writer3_isr:
          
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
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, closer1_isr, 0);
          
          pthread_create(& t2, 0, closer2_isr, 0);
          
          pthread_create(& t3, 0, closer3_isr, 0);
          
          pthread_create(& t4, 0, writer1_isr, 0);
          
          pthread_create(& t5, 0, writer2_isr, 0);
          
          pthread_create(& t6, 0, writer3_isr, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


