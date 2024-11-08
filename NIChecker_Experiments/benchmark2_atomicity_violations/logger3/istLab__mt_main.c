
typedef int pthread_t;

int numberOfRecords;

int records[64];

int msgBuffer[64];

int intervalCounter;

int tickCounter;

int interval;

int startTime;

int decodingStatus;

int cmd;

int sendit;

int systemState;

int rspStatus;

int cnt1;

int cnt2;

int cnt3;

int cnt4;

void *task_measure2_isr_0(void *__cs_param_task_measure2_isr_arg)

{
          
          tickCounter = 0;
          
          _Bool __cs_local_task_measure2_isr___cs_tmp_if_cond_0;
          
          __cs_local_task_measure2_isr___cs_tmp_if_cond_0 = tickCounter == 0;
          
          if (__cs_local_task_measure2_isr___cs_tmp_if_cond_0)

                    {
          }

          
          __exit_task_measure2_isr:
          
          ;

          
          pthread_exit(0);
}


void *main_task_0(void *__cs_param_main_task_arg)

{
          
          systemState = 0;
          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *task_communicate_isr_0(void *__cs_param_task_communicate_isr_arg)

{
          
          int __cs_local_task_communicate_isr__startTime = 1;
          
          int __cs_local_task_communicate_isr__interval = 1;
          
          cmd = nondet_rand();
          
          rspStatus = nondet_rand();
          
          _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_1;
          
          __cs_local_task_communicate_isr___cs_tmp_if_cond_1 = rspStatus == 1;
          
          if (__cs_local_task_communicate_isr___cs_tmp_if_cond_1)

                    {
                    
                    _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_2;
                    
                    __cs_local_task_communicate_isr___cs_tmp_if_cond_2 = cmd == 2;
                    
                    if (__cs_local_task_communicate_isr___cs_tmp_if_cond_2)

                                        {
                              
                              _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_3;
                              
                              __cs_local_task_communicate_isr___cs_tmp_if_cond_3 = systemState != 1;
                              
                              if (__cs_local_task_communicate_isr___cs_tmp_if_cond_3)

                                                            {
                              }
                              else

                                                            {
                                        
                                        systemState = 0;
                              }

                    }

                    
                    _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_4;
                    
                    __cs_local_task_communicate_isr___cs_tmp_if_cond_4 = cmd == 0;
                    
                    if (__cs_local_task_communicate_isr___cs_tmp_if_cond_4)

                                        {
                              
                              _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_5;
                              
                              __cs_local_task_communicate_isr___cs_tmp_if_cond_5 = systemState != 0;
                              
                              if (__cs_local_task_communicate_isr___cs_tmp_if_cond_5)

                                                            {
                              }
                              else

                                                            {
                                        
                                        int __cs_local_task_communicate_isr_tmp_num = numberOfRecords + 1;
                                        
                                        tickCounter = 0;
                                        
                                        systemState = 1;
                              }

                    }

          }

          
          __exit_task_communicate_isr:
          
          ;

          
          pthread_exit(0);
}


void *task_measure3_isr_0(void *__cs_param_task_measure3_isr_arg)

{
          
          int __cs_temporary_0 = 0;
          
          __cs_temporary_0 = tickCounter + 1;
          
          tickCounter = __cs_temporary_0;
          
          __exit_task_measure3_isr:
          
          ;

          
          pthread_exit(0);
}


void *task_measure1_isr_0(void *__cs_param_task_measure1_isr_arg)

{
          
          int __cs_local_task_measure1_isr_tmp_tickCounter = tickCounter;
          
          int __cs_local_task_measure1_isr_tmp_interval = interval;
          
          int __cs_local_task_measure1_isr_value = 1;
          
          __exit_task_measure1_isr:
          
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
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, task_measure1_isr_0, 0);
          
          pthread_create(& __cs_local_main_t2, 0, task_measure2_isr_0, 0);
          
          pthread_create(& __cs_local_main_t3, 0, task_measure3_isr_0, 0);
          
          pthread_create(& __cs_local_main_t4, 0, task_communicate_isr_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}
