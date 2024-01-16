
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

int svp_simple_002_001_global_array[10000];

int casee2_global_var;

void *svp_simple_002_001_isr_2(void *arg)

{

                    {
                    
                    int i = 0;
          }
          
          svp_simple_002_001_global_array[9999] = 999;
          
          __exit_svp_simple_002_001_isr_2:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_002_001_isr_1(void *arg)

{
          
          int mininum;
          
          int maxnum;

                    {
                    
                    int i;
                    
                    i = 0;
                    
                    int loop_1_IOVar1;
                    
                    int loop_1_block_3;
                    
                    for (int t = 0; (t < 2) && (i < 10000); t++)                    {
                              
                              loop_1_IOVar1 = i;
                              
                              loop_1_block_3 = nondet_int();
                              
                              i = loop_1_IOVar1 + (1 * loop_1_block_3);
                              
                              __CPROVER_assume(loop_1_block_3 >= 0);
                              
                              __CPROVER_assume(i < 10000);

                                                            {
                                        
                                        _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (i == 9999); 
                                        if (__cs_tmp_if_cond_0)

                                                                                {
                                                  
                                                  svp_simple_002_001_global_array[9999] = 1;
                                        }

                                        
                                        _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (i == (10000 + 1)); 
                                        if (__cs_tmp_if_cond_1)

                                                                                {
                                                  
                                                  svp_simple_002_001_global_array[9999] = 1;
                                        }

                              }
                              
                              i++;
                    }

                    
                    __CPROVER_assume(! (i < 10000));
          }
          
          mininum = svp_simple_002_001_global_array[9999] - 10;
          
          maxnum = svp_simple_002_001_global_array[0] + 10;
          
          __exit_svp_simple_002_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }

                    {
                    
                    int i = 0;
          }
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_t t2;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_002_001_isr_1, 0);
          
          pthread_create(& t2, 0, svp_simple_002_001_isr_2, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


