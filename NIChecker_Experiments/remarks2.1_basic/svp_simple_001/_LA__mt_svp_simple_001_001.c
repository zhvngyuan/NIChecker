
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

int svp_simple_001_001_global_var;

int svp_simple_001_001_global_array[10000];

int svp_simple_001_001_global_flag = 0;

void *main_task(void *arg)

{
          
          disable_isr(2);

                    {
                    
                    int i = 0;
          }

                    {
                    
                    int i;
          }

                    {
                    
                    int i;
                    
                    i = 0;
                    
                    int loop_1_IOVar1;
                    
                    int loop_1_block_1;
                    
                    for (int t = 0; (t < 1) && (i < 10000); t++)                    {
                              
                              loop_1_IOVar1 = i;
                              
                              loop_1_block_1 = nondet_int();
                              
                              i = loop_1_IOVar1 + (1 * loop_1_block_1);
                              
                              __CPROVER_assume(loop_1_block_1 >= 0);
                              
                              __CPROVER_assume(i < 10000);

                                                            {
                              }
                              
                              i++;
                    }

                    
                    __CPROVER_assume(! (i < 10000));
          }
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_001_001_isr_1(void *arg)

{

                    {
                    
                    int i = 0;
          }
          
          svp_simple_001_001_global_var = 0;
          
          svp_simple_001_001_global_var = 1;
          
          enable_isr(2);

                    {
                    
                    int i = 0;
          }
          
          __exit_svp_simple_001_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_001_001_isr_2(void *arg)

{
          
          int reader1;
          
          int reader3;
          
          _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (svp_simple_001_001_global_flag == 1); 
          if (__cs_tmp_if_cond_0)

                    {
          }
          else

                    {
          }

          
          int reader2;
          
          reader2 = svp_simple_001_001_global_var;
          
          __exit_svp_simple_001_001_isr_2:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_t t2;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_001_001_isr_1, 0);
          
          pthread_create(& t2, 0, svp_simple_001_001_isr_2, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


