
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

int svp_simple_004_001_condition1 = 1;

int svp_simple_004_001_condition2 = 1;

int svp_simple_004_001_condition3 = 1;

int svp_simple_004_001_condition4 = 1;

int svp_simple_004_001_condition5 = 1;

int svp_simple_004_001_condition6 = 1;

int svp_simple_004_001_global_var1 = 0x11;

int svp_simple_004_001_global_var2 = 0x22;

int svp_simple_004_001_global_var3 = 0x33;

void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          int reader1;
          
          int reader2;
          
          int reader3;
          
          int reader4;
          
          int reader5;
          
          int reader6;
          
          disable_isr(2);
          
          if (svp_simple_004_001_condition1 == 1)

                    {
                    
                    reader1 = svp_simple_004_001_global_var1;
                    
                    reader5 = svp_simple_004_001_global_var3;
          }

          
          if (svp_simple_004_001_condition2 == 1)

                    {
                    
                    reader2 = svp_simple_004_001_global_var1;
                    
                    reader6 = svp_simple_004_001_global_var3;
          }

          
          if (svp_simple_004_001_condition4 == 1)

                    {
                    
                    reader3 = svp_simple_004_001_global_var2;
          }

          
          if (svp_simple_004_001_condition5 == 1)

                    {
                    
                    reader4 = svp_simple_004_001_global_var2;
          }

          
          __exit_main_task:
          ;

          pthread_exit(0);
}


void *svp_simple_004_001_isr_1(void *arg)

{
          
          svp_simple_004_001_condition6 = 0;
          
          if (svp_simple_004_001_condition3 == 1)

                    {
                    
                    svp_simple_004_001_global_var1 = 0xaa;
          }
          else

                    {
                    
                    svp_simple_004_001_global_var3 = 0xcc;
          }

          
          enable_isr(2);
          
          __exit_svp_simple_004_001_isr_1:
          ;

          pthread_exit(0);
}


void *svp_simple_004_001_isr_2(void *arg)

{
          
          if (svp_simple_004_001_condition6 == 1)

                    {
                    
                    svp_simple_004_001_global_var2 = 0x22;
          }

          
          __exit_svp_simple_004_001_isr_2:
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
          
          pthread_create(& t1, 0, svp_simple_004_001_isr_1, 0);
          
          pthread_create(& t2, 0, svp_simple_004_001_isr_2, 0);
          
          __exit_main:
          ;

          pthread_exit(0);
}

