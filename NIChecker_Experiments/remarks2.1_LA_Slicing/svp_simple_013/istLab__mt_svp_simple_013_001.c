
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

int svp_simple_013_001_global_var1;

int svp_simple_013_001_global_var2;

int svp_simple_013_001_global_flag1 = 0;

int svp_simple_013_001_global_flag2 = 1;

void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          disable_isr(2);
          
          disable_isr(3);
          
          int reader1;
          
          int reader2;
          
          int reader3;
          
          int reader4;

                    {
                    
                    int i;
                    
                    for (i = 0; i < 100; i++)

                                        {
                              
                              if (i == 99)

                                                            {
                                        
                                        reader1 = svp_simple_013_001_global_var1;
                              }

                    }

          }
          
          reader2 = svp_simple_013_001_global_var1;
          
          reader3 = svp_simple_013_001_global_var2;
          
          reader4 = svp_simple_013_001_global_var2;
          
          __exit_main_task:
          ;

          pthread_exit(0);
}


void *svp_simple_013_001_isr_1(void *arg)

{

                    {
                    
                    int i = 0;
                    
                    for (i = 0; i <= 100; i++)

                                        {
                    }

          }
          
          enable_isr(2);

                    {
                    
                    int i = 0;
                    
                    for (i = 0; i <= 100; i++)

                                        {
                    }

          }
          
          __exit_svp_simple_013_001_isr_1:
          ;

          pthread_exit(0);
}


void *svp_simple_013_001_isr_2(void *arg)

{

                    {
                    
                    int i = 0;
                    
                    for (i = 0; i <= 100; i++)

                                        {
                    }

          }
          
          svp_simple_013_001_global_flag1 = 1;
          
          svp_simple_013_001_global_flag2 = 0;
          
          enable_isr(3);

                    {
                    
                    int i = 0;
                    
                    for (i = 0; i <= 100; i++)

                                        {
                    }

          }
          
          __exit_svp_simple_013_001_isr_2:
          ;

          pthread_exit(0);
}


void *svp_simple_013_001_isr_3(void *arg)

{
          
          if (svp_simple_013_001_global_flag1 == 1)

                    {
                    
                    svp_simple_013_001_global_var1 = 0x01;
          }

          
          if (svp_simple_013_001_global_flag2 == 1)

                    {
                    
                    svp_simple_013_001_global_var2 = 0x01;
          }

          
          __exit_svp_simple_013_001_isr_3:
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
          
          pthread_t t3;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_013_001_isr_1, 0);
          
          pthread_create(& t2, 0, svp_simple_013_001_isr_2, 0);
          
          pthread_create(& t3, 0, svp_simple_013_001_isr_3, 0);
          
          __exit_main:
          ;

          pthread_exit(0);
}

