
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

int svp_simple_007_001_global_var;

int svp_simple_007_001_global_array[5];

void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          int reader1;
          
          int reader2;
          
          svp_simple_007_001_global_array[svp_simple_007_001_global_var] = 0x01;
          
          reader2 = svp_simple_007_001_global_array[svp_simple_007_001_global_var];
          
          int i = nondet_rand();
          
          if (i == 2)

                    {
                    
                    svp_simple_007_001_global_array[i] = 0x02;
          }
          else

                    {
                    
                    svp_simple_007_001_global_array[i] = 0x09;
          }

          
          reader1 = svp_simple_007_001_global_array[2];
          
          __exit_main_task:
          ;

          pthread_exit(0);
}


void *svp_simple_007_001_isr_1(void *arg)

{

                    {
                    
                    int i = 0;
                    
                    for (i = 0; i <= 100; i++)

                                        {
                    }

          }
          
          svp_simple_007_001_global_array[2] = 0x09;
          
          svp_simple_007_001_global_var += 1;
          
          svp_simple_007_001_global_array[svp_simple_007_001_global_var] = 0x09;
          
          __exit_svp_simple_007_001_isr_1:
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
          
          pthread_create(& t1, 0, svp_simple_007_001_isr_1, 0);
          
          __exit_main:
          ;

          pthread_exit(0);
}
