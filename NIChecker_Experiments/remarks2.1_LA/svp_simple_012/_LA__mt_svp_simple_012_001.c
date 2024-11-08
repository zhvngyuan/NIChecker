
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

int svp_simple_012_001_global_var;

int svp_simple_012_001_global_pointer;

void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          int *p = & svp_simple_012_001_global_var;
          
          svp_simple_012_001_global_var = 0x01;
          
          * p = 0x02;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_012_001_isr_1(void *arg)

{
          
          int reader1;
          
          reader1 = svp_simple_012_001_global_var;
          
          __exit_svp_simple_012_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


void idlerun()

{
          
          int i = 0;
          
          i = 0;
          
          int loop_1_IOVar1;
          
          int loop_1_block_1;
          
          for (int t_1 = 0; (t_1 < 1) && (i <= 100); t_1++)          {
                    
                    loop_1_IOVar1 = i;
                    
                    loop_1_block_1 = nondet_int();
                    
                    i = loop_1_IOVar1 + (1 * loop_1_block_1);
                    
                    __CPROVER_assume(loop_1_block_1 >= 0);
                    
                    __CPROVER_assume(i <= 100);

                                        {
                    }
                    
                    i++;
          }

          
          __CPROVER_assume(! (i <= 100));
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
          
          pthread_create(& t1, 0, svp_simple_012_001_isr_1, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


