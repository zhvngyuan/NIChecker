
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

int test_global_var1;

int test_global_var2;

int test_global_var3;

int test_global_condition1;

int test_global_condition2;

int test_global_condition3;

int test_global_condition4;

void JudgeCondi(void);

void *req2_isr(void *arg)

{

                    {
          }

                    {
                    
                    _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (irq > (- 1)); 
                    if (__cs_tmp_if_cond_0)

                                        {
                    }

          }

                    {
          }
          
          int reader;
          
          reader = test_global_var3;
          
          __exit_req2_isr:
          
          ;

          
          pthread_exit(0);
}


void *req1_isr(void *arg)

{
          
          test_global_var3 = 0x33;

                    {
          }

                    {
                    
                    _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (irq > (- 1)); 
                    if (__cs_tmp_if_cond_1)

                                        {
                    }

          }

                    {
          }
          
          test_global_var3 = 0x44;
          
          __exit_req1_isr:
          
          ;

          
          pthread_exit(0);
}


void *main_task(void *arg)

{
          
          disable_isr(- 1);
          
          enable_isr(- 1);

                    {
                    
                    int reader1;
                    
                    int reader2;
                    
                    int reader3;
                    
                    int reader4;
          }
          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *req3_isr(void *arg)

{
          
          _Bool __cs_tmp_if_cond_2; __cs_tmp_if_cond_2 = (irq == 3); 
          if (__cs_tmp_if_cond_2)

                    {
          }


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
          
          __exit_req3_isr:
          
          ;

          
          pthread_exit(0);
}


void *req4_isr(void *arg)

{
          
          _Bool __cs_tmp_if_cond_4; __cs_tmp_if_cond_4 = (irq == (- 1)); 
          if (__cs_tmp_if_cond_4)

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
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, req1_isr, 0);
          
          pthread_create(& t2, 0, req2_isr, 0);
          
          pthread_create(& t3, 0, req3_isr, 0);
          
          pthread_create(& t4, 0, req4_isr, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


