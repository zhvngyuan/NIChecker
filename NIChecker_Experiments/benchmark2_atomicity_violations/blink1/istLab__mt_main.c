
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

void *Timer_Force_isr_0(void *__cs_param_Timer_Force_isr_arg)

{
          
          timerCount = 1;
          
          timerCount = 0;
          
          __exit_Timer_Force_isr:
          
          ;

          
          pthread_exit(0);
}


void *main_task_0(void *__cs_param_main_task_arg)

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


void *Timer_B_isr_0(void *__cs_param_Timer_B_isr_arg)

{
          
          timerCount = 1;
          
          _Bool __cs_local_Timer_B_isr___cs_tmp_if_cond_0;
          
          __cs_local_Timer_B_isr___cs_tmp_if_cond_0 = timerCount == 1;
          
          if (__cs_local_Timer_B_isr___cs_tmp_if_cond_0)

                    {
          }

          
          __exit_Timer_B_isr:
          
          ;

          
          pthread_exit(0);
}


void *Timer_A_isr_0(void *__cs_param_Timer_A_isr_arg)

{
          
          unsigned int __cs_temporary_0 = 0;
          
          __cs_temporary_0 = timerCount + 1;
          
          timerCount = __cs_temporary_0;
          
          _Bool __cs_local_Timer_A_isr___cs_tmp_if_cond_1;
          
          __cs_local_Timer_A_isr___cs_tmp_if_cond_1 = timerCount == 1;
          
          if (__cs_local_Timer_A_isr___cs_tmp_if_cond_1)

                    {
          }

          
          __exit_Timer_A_isr:
          
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
          
          pthread_create(& __cs_local_main_t1, 0, Timer_A_isr_0, 0);
          
          pthread_create(& __cs_local_main_t2, 0, Timer_B_isr_0, 0);
          
          pthread_create(& __cs_local_main_t3, 0, Timer_Force_isr_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

