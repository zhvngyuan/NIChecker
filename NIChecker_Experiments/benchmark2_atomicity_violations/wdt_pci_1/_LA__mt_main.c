
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
          
          count = 0;
          
          _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (count); 
          if (__cs_tmp_if_cond_0)

                    {
                    
                    _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (! nowayout); 
                    if (__cs_tmp_if_cond_1)

                                        {
                    }

          }

          
          test_global_var3 = 0x55;
          
          __exit_writer2_isr:
          
          ;

          
          pthread_exit(0);
}


void *main_task(void *arg)

{
          
          disable_isr(- 1);
          
          count = 0;
          
          test_global_condition3 = 1;
          
          test_global_condition4 = 1;
          
          enable_isr(- 1);
          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *closer2_isr(void *arg)

{
          
          int reader5;
          
          int reader6;
          
          count = 1;
          
          _Bool __cs_tmp_if_cond_2; __cs_tmp_if_cond_2 = (count); 
          if (__cs_tmp_if_cond_2)

                    {
                    
                    _Bool __cs_tmp_if_cond_3; __cs_tmp_if_cond_3 = (! nowayout); 
                    if (__cs_tmp_if_cond_3)

                                        {
                    }

                    
                    _Bool __cs_tmp_if_cond_4; __cs_tmp_if_cond_4 = (test_global_condition3 == 1); 
                    if (__cs_tmp_if_cond_4)

                                        {
                              
                              reader5 = test_global_var3;
                    }

                    
                    _Bool __cs_tmp_if_cond_5; __cs_tmp_if_cond_5 = (test_global_condition4 == 1); 
                    if (__cs_tmp_if_cond_5)

                                        {
                              
                              reader6 = test_global_var3;
                    }

          }

          
          _Bool __cs_tmp_if_cond_6; __cs_tmp_if_cond_6 = (expect_close != 42); 
          if (__cs_tmp_if_cond_6)

                    {
          }
          else

                    {
          }

          
          __exit_closer2_isr:
          
          ;

          
          pthread_exit(0);
}


void *closer1_isr(void *arg)

{
          
          count = 1;
          
          _Bool __cs_tmp_if_cond_7; __cs_tmp_if_cond_7 = (count); 
          if (__cs_tmp_if_cond_7)

                    {
                    
                    _Bool __cs_tmp_if_cond_8; __cs_tmp_if_cond_8 = (! nowayout); 
                    if (__cs_tmp_if_cond_8)

                                        {
                    }

          }

          
          _Bool __cs_tmp_if_cond_9; __cs_tmp_if_cond_9 = (expect_close != 42); 
          if (__cs_tmp_if_cond_9)

                    {
          }
          else

                    {
          }


                    {
                    
                    int reader1;
                    
                    int reader2;
                    
                    int reader3;
                    
                    int reader4;
          }
          
          __exit_closer1_isr:
          
          ;

          
          pthread_exit(0);
}


void *writer1_isr(void *arg)

{
          
          count = 0;
          
          _Bool __cs_tmp_if_cond_10; __cs_tmp_if_cond_10 = (count); 
          if (__cs_tmp_if_cond_10)

                    {
                    
                    _Bool __cs_tmp_if_cond_11; __cs_tmp_if_cond_11 = (! nowayout); 
                    if (__cs_tmp_if_cond_11)

                                        {
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


