
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

int svp_simple_025_001_global_var;

int *svp_simple_025_001_global_array[100];

void svp_simple_025_001_func_1(int *array);

void svp_simple_025_001_init();

void *main_task(void *arg)

{

                    {
                    
                    svp_simple_025_001_global_var = nondet_rand();

                                        {
                              
                              enable_isr(- 1);
                    }
          }

                    {
                    
                    int *ptr_var = & svp_simple_025_001_global_var;
                    
                    svp_simple_025_001_global_var = svp_simple_025_001_global_var + 1;
          }
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_025_001_isr_1(void *arg)

{
          
          svp_simple_025_001_global_var = nondet_rand();
          
          __exit_svp_simple_025_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_025_001_isr_1, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


