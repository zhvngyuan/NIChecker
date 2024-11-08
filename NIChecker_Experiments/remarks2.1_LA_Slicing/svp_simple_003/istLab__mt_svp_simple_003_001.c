
typedef int pthread_t;

typedef unsigned char unsigned8;

typedef unsigned short unsigned16;

typedef unsigned int unsigned32;

typedef unsigned long long unsigned64;

typedef signed char signed8;

typedef signed short signed16;

typedef signed int signed32;

typedef signed long long signed64;

void idlerun();

void enable_isr(int);

void disable_isr(int);

void init();

int rand();

int svp_simple_003_001_global_var1;

int svp_simple_003_001_global_var2;

int svp_simple_003_001_global_flag = 1;

int svp_simple_003_001_global_flag1 = 0;

void *main_task(void *arg)

{
          
          int reader1;
          
          int reader2;
          
          int reader3;
          
          int reader4;

                    {
                    
                    int i = 0;
                    
                    for (i = 0; i <= 100; i++)

                                        {
                    }

          }
          
          disable_isr(1);
          
          disable_isr(2);

                    {
                    
                    int i;
                    
                    for (i = 0; i < 10000; i++)

                                        {
                              
                              if (i == 9999)

                                                            {
                                        
                                        reader3 = svp_simple_003_001_global_var2;
                              }

                    }

          }

                    {
                    
                    int j;
                    
                    for (j = 10000; j > 0; j--)

                                        {
                              
                              if (j == 9999)

                                                            {
                                        
                                        reader4 = svp_simple_003_001_global_var2;
                              }

                    }

          }
          
          enable_isr(1);

                    {
                    
                    int i;
                    
                    for (i = 0; i < 10000; i++)

                                        {
                              
                              if (i == 9999)

                                                            {
                                        
                                        reader1 = svp_simple_003_001_global_var1;
                              }

                    }

          }

                    {
                    
                    int j;
                    
                    for (j = 10000; j > 0; j--)

                                        {
                              
                              if (j == 9999)

                                                            {
                                        
                                        reader2 = svp_simple_003_001_global_var1;
                              }

                    }

          }
          
          __exit_main_task:
          ;

          pthread_exit(0);
}


void *svp_simple_003_001_isr_1(void *arg)

{
          
          enable_isr(2);
          
          svp_simple_003_001_global_var2 = 999;
          
          if (svp_simple_003_001_global_flag == 1)

                    {
                    
                    svp_simple_003_001_global_var1 = 999;
          }
          else

                    {
                    
                    if (svp_simple_003_001_global_flag1 == 2)

                                        {
                              
                              svp_simple_003_001_global_var1 = 888;
                    }

          }

          
          __exit_svp_simple_003_001_isr_1:
          ;

          pthread_exit(0);
}


void *svp_simple_003_001_isr_2(void *arg)

{

                    {
                    
                    int i = 0;
                    
                    for (i = 0; i <= 100; i++)

                                        {
                    }

          }
          
          svp_simple_003_001_global_flag = 1;
          
          __exit_svp_simple_003_001_isr_2:
          ;

          pthread_exit(0);
}


void idlerun()

{
          
          int i = 0;
          
          for (i = 0; i <= 100; i++)

                    {
          }

}


void init()

{
          
          enable_isr(- 1);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_t t2;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_003_001_isr_1, 0);
          
          pthread_create(& t2, 0, svp_simple_003_001_isr_2, 0);
          
          __exit_main:
          ;

          pthread_exit(0);
}

