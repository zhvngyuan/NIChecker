
typedef int pthread_t;

unsigned int timerCount = 0;

int P1OUT;

int LED_0;

int LED_1;

int WDTCLT;

int WDTPW;

int WDTCTL;

int WDTHOLD;

int LED_DIR;

int LED_OUT;

int CCTL0;

int CCIE;

int TACTL;

int TASSEL_2;

int MC_2;

int cnt1;

int cnt2;

int cnt3;

int cnt4;

void *Timer_Force_isr(void *arg)

{
          
          timerCount = 1;
          
          __exit_Timer_Force_isr:
          
          ;

          
          pthread_exit(0);
}


void *Timer_C_isr(void *arg)

{
          
          timerCount = 0;
          
          _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (timerCount == 0); 
          if (__cs_tmp_if_cond_0)

                    {
          }

          
          __exit_Timer_C_isr:
          
          ;

          
          pthread_exit(0);
}


void *main_task(void *arg)

{
          
          disable_isr(- 1);
          
          timerCount = 0;
          
          enable_isr(- 1);
          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *Timer_B_isr(void *arg)

{
          
          timerCount = 0;
          
          _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (timerCount == 0); 
          if (__cs_tmp_if_cond_1)

                    {
          }

          
          __exit_Timer_B_isr:
          
          ;

          
          pthread_exit(0);
}


void *Timer_A_isr(void *arg)

{
          
          timerCount = timerCount + 1;
          
          _Bool __cs_tmp_if_cond_2; __cs_tmp_if_cond_2 = (timerCount == 0); 
          if (__cs_tmp_if_cond_2)

                    {
          }

          
          __exit_Timer_A_isr:
          
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
          
          pthread_create(& t1, 0, Timer_A_isr, 0);
          
          pthread_create(& t2, 0, Timer_B_isr, 0);
          
          pthread_create(& t3, 0, Timer_C_isr, 0);
          
          pthread_create(& t4, 0, Timer_Force_isr, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


