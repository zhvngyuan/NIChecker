
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

void svp_simple_008_001_func_1();

int svp_simple_008_001_global_var;

int svp_simple_008_001_global_array[100];

void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          int p = 1;
          
          int q = 2;
          
          svp_simple_008_001_global_array[p + q] = 0x09;
          
          svp_simple_008_001_global_array[40] = 0x01;

                    {
                    
                    int reader1;
                    
                    int reader2;
                    
                    int i = 1;
                    
                    int j = 2;
                    
                    int p = 1;
                    
                    int q = 3;
                    
                    reader1 = svp_simple_008_001_global_array[(i * 20) + (j * 10)];
                    
                    reader2 = svp_simple_008_001_global_array[p + q];
          }
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_008_001_isr_1(void *arg)

{

                    {
                    
                    int k;
                    
                    k = 0;
                    
                    int loop_1_IOVar1;
                    
                    int loop_1_block_1;
                    
                    for (int t_1 = 0; (t_1 < 2) && (k < 100); t_1++)                    {
                              
                              loop_1_IOVar1 = k;
                              
                              loop_1_block_1 = nondet_int();
                              
                              k = loop_1_IOVar1 + (1 * loop_1_block_1);
                              
                              __CPROVER_assume(loop_1_block_1 >= 0);
                              
                              __CPROVER_assume(k < 100);

                                                            {
                                        
                                        svp_simple_008_001_global_array[k] = 0x05;
                              }
                              
                              k++;
                    }

                    
                    __CPROVER_assume(! (k < 100));
          }
          
          __exit_svp_simple_008_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_008_001_isr_1, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


