
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

int svp_simple_019_001_global_condition1 = 1;

int svp_simple_019_001_global_condiiton2 = 1;

int svp_simple_019_001_global_condition3 = 1;

int svp_simple_019_001_global_para1;

int svp_simple_019_001_global_para2;

int svp_simple_019_001_global_para3;

int svp_simple_019_001_global_var1;

int svp_simple_019_001_global_var2;

void *main_task(void *arg)

{
          
          int reader1;
          
          int reader2;
          
          int reader3;
          
          int reader4;
          
          int reader5;

                    {
                    
                    enable_isr(- 1);
          }
          
          svp_simple_019_001_global_para1 = nondet_rand() % 10;
          
          svp_simple_019_001_global_para2 = nondet_rand() % 10;
          
          svp_simple_019_001_global_para3 = nondet_rand() % 10;
          
          svp_simple_019_001_global_var1 = nondet_rand();
          
          if ((svp_simple_019_001_global_para1 + svp_simple_019_001_global_para3) > svp_simple_019_001_global_para2)

                    {
                    
                    reader1 = svp_simple_019_001_global_var2;
          }

          
          reader2 = svp_simple_019_001_global_var2;
          
          if ((svp_simple_019_001_global_condition1 == 1) && (svp_simple_019_001_global_condiiton2 == 1))

                    {
                    
                    reader3 = svp_simple_019_001_global_var1;
          }


                    {
                    
                    int i = 0;
                    
                    for (i = 0; i <= 100; i++)

                                        {
                    }

          }
          
          disable_isr(1);
          
          if ((svp_simple_019_001_global_condition1 == 1) && (svp_simple_019_001_global_condition3 == 1))

                    {
                    
                    enable_isr(1);
                    
                    reader4 = svp_simple_019_001_global_var1;
          }


                    {
                    
                    int i = 0;
                    
                    for (i = 0; i <= 100; i++)

                                        {
                    }

          }
          
          disable_isr(1);
          
          if ((svp_simple_019_001_global_condiiton2 == 1) && (svp_simple_019_001_global_condition3 == 0))

                    {
                    
                    reader5 = svp_simple_019_001_global_var1;
          }

          
          enable_isr(1);
          
          __exit_main_task:
          ;

          pthread_exit(0);
}


void *svp_simple_019_001_isr_1(void *arg)

{

                    {
                    
                    int i = 0;
                    
                    for (i = 0; i <= 100; i++)

                                        {
                    }

          }
          
          if ((svp_simple_019_001_global_para1 + svp_simple_019_001_global_para3) < svp_simple_019_001_global_para2)

                    {
                    
                    svp_simple_019_001_global_var2 = 0x55;
          }

          
          svp_simple_019_001_global_condition3 = 1;
          
          svp_simple_019_001_global_var1 = 0x01;
          
          __exit_svp_simple_019_001_isr_1:
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
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_019_001_isr_1, 0);
          
          __exit_main:
          ;

          pthread_exit(0);
}
