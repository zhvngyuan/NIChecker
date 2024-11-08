
typedef int pthread_t;

float svp_simple_018_001_func1();

float svp_simple_018_001_func2();

void svp_simple_018_001_i_func1();

float svp_simple_018_001_para1;

float svp_simple_018_001_para2;

void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          float svp_simple_018_001_perimete = 0;
          
          float svp_simple_018_001_area = 0;
          
          float __cs_retval__svp_simple_018_001_func1_0;

                    {
                    
                    float perimete = 0.0;
                    
                    perimete = (2 * svp_simple_018_001_para1) * 
                    svp_simple_018_001_para2;
                    
                    __cs_retval__svp_simple_018_001_func1_0 = perimete;
          }
          
          svp_simple_018_001_perimete = __cs_retval__svp_simple_018_001_func1_0;
          
          float __cs_retval__svp_simple_018_001_func2_0;

                    {
                    
                    float area = 0.0;
                    
                    area = (svp_simple_018_001_para1 * 
                    svp_simple_018_001_para2) * 
                    svp_simple_018_001_para2;
                    
                    __cs_retval__svp_simple_018_001_func2_0 = area;
          }
          
          svp_simple_018_001_area = __cs_retval__svp_simple_018_001_func2_0;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


float svp_simple_018_001_func1()

{
          
          float perimete = 0.0;
          
          perimete = (2 * svp_simple_018_001_para1) * 
          svp_simple_018_001_para2;
          
          return (perimete);
}


float svp_simple_018_001_func2()

{
          
          float area = 0.0;
          
          area = (svp_simple_018_001_para1 * 
          svp_simple_018_001_para2) * 
          svp_simple_018_001_para2;
          
          return (area);
}


void *svp_simple_018_001_isr_1(void *arg)

{

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
          
          svp_simple_018_001_para1 = 2.0;
          
          __exit_svp_simple_018_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_018_001_isr_2(void *arg)

{

                    {
                    
                    int i = 0;
                    
                    i = 0;
                    
                    int loop_2_IOVar1;
                    
                    int loop_2_block_1;
                    
                    for (int t_2 = 0; (t_2 < 1) && (i <= 100); t_2++)                    {
                              
                              loop_2_IOVar1 = i;
                              
                              loop_2_block_1 = nondet_int();
                              
                              i = loop_2_IOVar1 + (1 * loop_2_block_1);
                              
                              __CPROVER_assume(loop_2_block_1 >= 0);
                              
                              __CPROVER_assume(i <= 100);

                                                            {
                              }
                              
                              i++;
                    }

                    
                    __CPROVER_assume(! (i <= 100));
          }

                    {
                    
                    svp_simple_018_001_para2 = 1.0;
          }
          
          __exit_svp_simple_018_001_isr_2:
          
          ;

          
          pthread_exit(0);
}


void idlerun()

{
          
          int i = 0;
          
          i = 0;
          
          int loop_3_IOVar1;
          
          int loop_3_block_1;
          
          for (int t_3 = 0; (t_3 < 1) && (i <= 100); t_3++)          {
                    
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
          
          pthread_create(& t1, 0, svp_simple_018_001_isr_1, 0);
          
          pthread_create(& t2, 0, svp_simple_018_001_isr_2, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


