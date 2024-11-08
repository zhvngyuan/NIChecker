
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

int svp_simple_017_001_global_var;

int svp_simple_017_001_local_array[100];

void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          int i = 0;
          
          svp_simple_017_001_global_var = 0;
          
          int loop_1_IOVar1;
          
          int loop_1_block_2;
          
          for (int t_1 = 0; (t_1 < 2) && (svp_simple_017_001_global_var < 100); t_1++)          {
                    
                    loop_1_IOVar1 = svp_simple_017_001_global_var;
                    
                    loop_1_block_2 = nondet_int();
                    
                    svp_simple_017_001_global_var = loop_1_IOVar1 + (1 * loop_1_block_2);
                    
                    __CPROVER_assume(loop_1_block_2 >= 0);
                    
                    __CPROVER_assume(svp_simple_017_001_global_var < 100);

                                        {
                              
                              svp_simple_017_001_local_array[svp_simple_017_001_global_var] = i++;
                    }
                    
                    svp_simple_017_001_global_var++;
          }

          
          __CPROVER_assume(! (svp_simple_017_001_global_var < 100));
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_017_001_isr_1(void *arg)

{

                    {
                    
                    int i = 0;
          }
          
          svp_simple_017_001_global_var = 50;
          
          svp_simple_017_001_local_array[50] = 0;
          
          __exit_svp_simple_017_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_017_001_isr_1, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


