
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

void *main_task(void *arg)

{
          
          systemState = 0;
          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *task_communicate_isr(void *arg)

{
          
          int _startTime = 1;
          
          int _interval = 1;
          
          cmd = nondet_rand();
          
          rspStatus = nondet_rand();
          
          _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (rspStatus == 1); 
          if (__cs_tmp_if_cond_0)

                    {
                    
                    _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (cmd == 2); 
                    if (__cs_tmp_if_cond_1)

                                        {
                              
                              _Bool __cs_tmp_if_cond_2; __cs_tmp_if_cond_2 = (systemState != 1); 
                              if (__cs_tmp_if_cond_2)

                                                            {
                              }
                              else

                                                            {
                                        
                                        systemState = 0;
                              }

                    }

                    
                    _Bool __cs_tmp_if_cond_3; __cs_tmp_if_cond_3 = (cmd == 0); 
                    if (__cs_tmp_if_cond_3)

                                        {
                              
                              _Bool __cs_tmp_if_cond_4; __cs_tmp_if_cond_4 = (systemState != 0); 
                              if (__cs_tmp_if_cond_4)

                                                            {
                              }
                              else

                                                            {
                                        
                                        int tmp_num = numberOfRecords + 1;
                                        
                                        tickCounter = 1;
                                        
                                        systemState = 1;
                              }

                    }

          }

          
          __exit_task_communicate_isr:
          
          ;

          
          pthread_exit(0);
}


void *task_measure_isr(void *arg)

{
          
          tickCounter++;
          
          int tmp_tickCounter = tickCounter;
          
          int tmp_interval = interval;
          
          int value = 1;
          
          tickCounter = 0;
          
          __exit_task_measure_isr:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_t t2;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, task_measure_isr, 0);
          
          pthread_create(& t2, 0, task_communicate_isr, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


