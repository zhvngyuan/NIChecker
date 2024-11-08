
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

int svp_simple_014_001_global_var1 = 0x01;

int svp_simple_014_001_global_var2 = 0x02;

int svp_simple_014_001_global_flag1 = 0;

int svp_simple_014_001_global_flag2 = 1;

void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }

                    {
                    
                    int i = 0;
                    
                    i = 0;
                    
                    int loop_1_IOVar1;
                    
                    int loop_1_block_1;
                    
                    for (int t_1 = 0; (t_1 < 1) && (i <= 100); t_1++)                    {
                              
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
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_014_001_isr_1(void *arg)

{
          
          disable_isr(3);
          
          int reader1;
          
          int reader2;
          
          int reader3;
          
          int reader4;

                    {
                    
                    int i;
                    
                    i = 0;
                    
                    int loop_2_IOVar1;
                    
                    int loop_2_block_2;
                    
                    for (int t_2 = 0; (t_2 < 2) && (i < 100); t_2++)                    {
                              
                              loop_2_IOVar1 = i;
                              
                              loop_2_block_2 = nondet_int();
                              
                              i = loop_2_IOVar1 + (1 * loop_2_block_2);
                              
                              __CPROVER_assume(loop_2_block_2 >= 0);
                              
                              __CPROVER_assume(i < 100);

                                                            {
                                        
                                        _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (i == 99); 
                                        if (__cs_tmp_if_cond_0)

                                                                                {
                                                  
                                                  reader1 = svp_simple_014_001_global_var1;
                                        }

                              }
                              
                              i++;
                    }

                    
                    __CPROVER_assume(! (i < 100));
          }
          
          reader2 = svp_simple_014_001_global_var1;
          
          reader3 = svp_simple_014_001_global_var2;
          
          reader4 = svp_simple_014_001_global_var2;
          
          __exit_svp_simple_014_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_014_001_isr_2(void *arg)

{
          
          svp_simple_014_001_global_flag1 = 1;
          
          svp_simple_014_001_global_flag2 = 0;
          
          enable_isr(3);

                    {
                    
                    int i = 0;
                    
                    i = 0;
                    
                    int loop_3_IOVar1;
                    
                    int loop_3_block_1;
                    
                    for (int t_3 = 0; (t_3 < 1) && (i <= 100); t_3++)                    {
                              
                              loop_3_IOVar1 = i;
                              
                              loop_3_block_1 = nondet_int();
                              
                              i = loop_3_IOVar1 + (1 * loop_3_block_1);
                              
                              __CPROVER_assume(loop_3_block_1 >= 0);
                              
                              __CPROVER_assume(i <= 100);

                                                            {
                              }
                              
                              i++;
                    }

                    
                    __CPROVER_assume(! (i <= 100));
          }
          
          __exit_svp_simple_014_001_isr_2:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_014_001_isr_3(void *arg)

{
          
          _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (svp_simple_014_001_global_flag1 == 1); 
          if (__cs_tmp_if_cond_1)

                    {
                    
                    svp_simple_014_001_global_var1 = 0x09;
          }

          
          _Bool __cs_tmp_if_cond_2; __cs_tmp_if_cond_2 = (svp_simple_014_001_global_flag2 == 1); 
          if (__cs_tmp_if_cond_2)

                    {
                    
                    svp_simple_014_001_global_var2 = 0x09;
          }

          
          __exit_svp_simple_014_001_isr_3:
          
          ;

          
          pthread_exit(0);
}


void idlerun()

{
          
          int i = 0;
          
          i = 0;
          
          int loop_4_IOVar1;
          
          int loop_4_block_1;
          
          for (int t_4 = 0; (t_4 < 1) && (i <= 100); t_4++)          {
                    
                    loop_4_IOVar1 = i;
                    
                    loop_4_block_1 = nondet_int();
                    
                    i = loop_4_IOVar1 + (1 * loop_4_block_1);
                    
                    __CPROVER_assume(loop_4_block_1 >= 0);
                    
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
          
          pthread_t t2;
          
          pthread_t t3;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_014_001_isr_1, 0);
          
          pthread_create(& t2, 0, svp_simple_014_001_isr_2, 0);
          
          pthread_create(& t3, 0, svp_simple_014_001_isr_3, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


