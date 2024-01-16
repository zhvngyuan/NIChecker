
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

int cnt7;

int cnt8;

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

void *writer2_isr_0(void *__cs_param_writer2_isr_arg)

{
          
          _Bool __cs_local_writer2_isr___cs_tmp_if_cond_0;
          
          __cs_local_writer2_isr___cs_tmp_if_cond_0 = count;
          
          if (__cs_local_writer2_isr___cs_tmp_if_cond_0)

                    {
                    
                    _Bool __cs_local_writer2_isr___cs_tmp_if_cond_1;
                    
                    __cs_local_writer2_isr___cs_tmp_if_cond_1 = ! nowayout;
                    
                    if (__cs_local_writer2_isr___cs_tmp_if_cond_1)

                                        {
                    }

          }

          
          int __cs_temporary_0 = 0;
          
          __cs_temporary_0 = test_global_var3 + 1;
          
          test_global_var3 = __cs_temporary_0;
          
          goto __exit_writer2_isr;
          
          ;
          
          __exit_writer2_isr:
          
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


void *closer4_isr_0(void *__cs_param_closer4_isr_arg)

{
          
          _Bool __cs_local_closer4_isr___cs_tmp_if_cond_2;
          
          __cs_local_closer4_isr___cs_tmp_if_cond_2 = count;
          
          if (__cs_local_closer4_isr___cs_tmp_if_cond_2)

                    {
                    
                    _Bool __cs_local_closer4_isr___cs_tmp_if_cond_3;
                    
                    __cs_local_closer4_isr___cs_tmp_if_cond_3 = ! nowayout;
                    
                    if (__cs_local_closer4_isr___cs_tmp_if_cond_3)

                                        {
                    }

          }

          
          _Bool __cs_local_closer4_isr___cs_tmp_if_cond_4;
          
          __cs_local_closer4_isr___cs_tmp_if_cond_4 = expect_close != 42;
          
          if (__cs_local_closer4_isr___cs_tmp_if_cond_4)

                    {
          }
          else

                    {
          }

          
          goto __exit_closer4_isr;
          
          ;
          
          __exit_closer4_isr:
          
          ;

          
          pthread_exit(0);
}


void *closer2_isr_0(void *__cs_param_closer2_isr_arg)

{
          
          _Bool __cs_local_closer2_isr___cs_tmp_if_cond_5;
          
          __cs_local_closer2_isr___cs_tmp_if_cond_5 = count;
          
          if (__cs_local_closer2_isr___cs_tmp_if_cond_5)

                    {
                    
                    _Bool __cs_local_closer2_isr___cs_tmp_if_cond_6;
                    
                    __cs_local_closer2_isr___cs_tmp_if_cond_6 = ! nowayout;
                    
                    if (__cs_local_closer2_isr___cs_tmp_if_cond_6)

                                        {
                    }

          }

          
          _Bool __cs_local_closer2_isr___cs_tmp_if_cond_7;
          
          __cs_local_closer2_isr___cs_tmp_if_cond_7 = expect_close != 42;
          
          if (__cs_local_closer2_isr___cs_tmp_if_cond_7)

                    {
          }
          else

                    {
          }

          
          int __cs_local_closer2_isr_reader;
          
          goto __exit_closer2_isr;
          
          ;
          
          __exit_closer2_isr:
          
          ;

          
          pthread_exit(0);
}


void *closer3_isr_0(void *__cs_param_closer3_isr_arg)

{
          
          _Bool __cs_local_closer3_isr___cs_tmp_if_cond_8;
          
          __cs_local_closer3_isr___cs_tmp_if_cond_8 = count;
          
          if (__cs_local_closer3_isr___cs_tmp_if_cond_8)

                    {
                    
                    _Bool __cs_local_closer3_isr___cs_tmp_if_cond_9;
                    
                    __cs_local_closer3_isr___cs_tmp_if_cond_9 = ! nowayout;
                    
                    if (__cs_local_closer3_isr___cs_tmp_if_cond_9)

                                        {
                    }

          }

          
          _Bool __cs_local_closer3_isr___cs_tmp_if_cond_10;
          
          __cs_local_closer3_isr___cs_tmp_if_cond_10 = expect_close != 42;
          
          if (__cs_local_closer3_isr___cs_tmp_if_cond_10)

                    {
          }
          else

                    {
          }

          
          goto __exit_closer3_isr;
          
          ;
          
          __exit_closer3_isr:
          
          ;

          
          pthread_exit(0);
}


void *closer1_isr_0(void *__cs_param_closer1_isr_arg)

{
          
          _Bool __cs_local_closer1_isr___cs_tmp_if_cond_11;
          
          __cs_local_closer1_isr___cs_tmp_if_cond_11 = count;
          
          if (__cs_local_closer1_isr___cs_tmp_if_cond_11)

                    {
                    
                    _Bool __cs_local_closer1_isr___cs_tmp_if_cond_12;
                    
                    __cs_local_closer1_isr___cs_tmp_if_cond_12 = ! nowayout;
                    
                    if (__cs_local_closer1_isr___cs_tmp_if_cond_12)

                                        {
                    }

          }

          
          _Bool __cs_local_closer1_isr___cs_tmp_if_cond_13;
          
          __cs_local_closer1_isr___cs_tmp_if_cond_13 = expect_close != 42;
          
          if (__cs_local_closer1_isr___cs_tmp_if_cond_13)

                    {
          }
          else

                    {
          }

          
          goto __exit_closer1_isr;
          
          ;
          
          __exit_closer1_isr:
          
          ;

          
          pthread_exit(0);
}


void *writer1_isr_0(void *__cs_param_writer1_isr_arg)

{
          
          _Bool __cs_local_writer1_isr___cs_tmp_if_cond_14;
          
          __cs_local_writer1_isr___cs_tmp_if_cond_14 = count;
          
          if (__cs_local_writer1_isr___cs_tmp_if_cond_14)

                    {
                    
                    _Bool __cs_local_writer1_isr___cs_tmp_if_cond_15;
                    
                    __cs_local_writer1_isr___cs_tmp_if_cond_15 = ! nowayout;
                    
                    if (__cs_local_writer1_isr___cs_tmp_if_cond_15)

                                        {
                    }

          }

          
          int __cs_local_writer1_isr_reader1;
          
          int __cs_local_writer1_isr_reader2;
          
          goto __exit_writer1_isr;
          
          ;
          
          __exit_writer1_isr:
          
          ;

          
          pthread_exit(0);
}


void *writer4_isr_0(void *__cs_param_writer4_isr_arg)

{
          
          test_global_var3 = 10;
          
          _Bool __cs_local_writer4_isr___cs_tmp_if_cond_16;
          
          __cs_local_writer4_isr___cs_tmp_if_cond_16 = count;
          
          if (__cs_local_writer4_isr___cs_tmp_if_cond_16)

                    {
                    
                    _Bool __cs_local_writer4_isr___cs_tmp_if_cond_17;
                    
                    __cs_local_writer4_isr___cs_tmp_if_cond_17 = ! nowayout;
                    
                    if (__cs_local_writer4_isr___cs_tmp_if_cond_17)

                                        {
                    }

          }

          
          goto __exit_writer4_isr;
          
          ;
          
          __exit_writer4_isr:
          
          ;

          
          pthread_exit(0);
}


void *writer3_isr_0(void *__cs_param_writer3_isr_arg)

{
          
          _Bool __cs_local_writer3_isr___cs_tmp_if_cond_18;
          
          __cs_local_writer3_isr___cs_tmp_if_cond_18 = count;
          
          if (__cs_local_writer3_isr___cs_tmp_if_cond_18)

                    {
                    
                    _Bool __cs_local_writer3_isr___cs_tmp_if_cond_19;
                    
                    __cs_local_writer3_isr___cs_tmp_if_cond_19 = ! nowayout;
                    
                    if (__cs_local_writer3_isr___cs_tmp_if_cond_19)

                                        {
                    }

          }

          
          goto __exit_writer3_isr;
          
          ;
          
          __exit_writer3_isr:
          
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
          
          pthread_create(& __cs_local_main_t1, 0, closer1_isr_0, 0);
          
          pthread_create(& __cs_local_main_t2, 0, closer2_isr_0, 0);
          
          pthread_create(& __cs_local_main_t3, 0, closer3_isr_0, 0);
          
          pthread_create(& __cs_local_main_t4, 0, closer4_isr_0, 0);
          
          pthread_create(& __cs_local_main_t5, 0, writer1_isr_0, 0);
          
          pthread_create(& __cs_local_main_t6, 0, writer2_isr_0, 0);
          
          pthread_create(& __cs_local_main_t7, 0, writer3_isr_0, 0);
          
          pthread_create(& __cs_local_main_t8, 0, writer4_isr_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

