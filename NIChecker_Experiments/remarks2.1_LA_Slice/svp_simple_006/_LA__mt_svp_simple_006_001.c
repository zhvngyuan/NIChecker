
typedef int pthread_t;

int svp_simple_006_001_global_var1;

int svp_simple_006_001_global_var2;

unsigned char flag = 0x55;

void *svp_simple_006_001_isr_1(void *arg)

{
          
          int reader2;

                    {
                    
                    int i = 0;
          }
          
          svp_simple_006_001_global_var1 = 1;
          
          __exit_svp_simple_006_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


void *main_task(void *arg)

{
          
          int reader1;
          
          int reader2;
          
          int reader3;

                    {
                    
                    int i;
                    
                    i = 0;
                    
                    int loop_1_IOVar1;
                    
                    int loop_1_block_2;
                    
                    for (int t_1 = 0; (t_1 < 2) && (i < 5); t_1++)                    {
                              
                              loop_1_IOVar1 = i;
                              
                              loop_1_block_2 = nondet_int();
                              
                              i = loop_1_IOVar1 + (1 * loop_1_block_2);
                              
                              __CPROVER_assume(loop_1_block_2 >= 0);
                              
                              __CPROVER_assume(i < 5);

                                                            {

                                                                                {
                                                  
                                                  int j;
                                                  
                                                  j = 0;
                                                  
                                                  int loop_2_IOVar1;
                                                  
                                                  int loop_2_block_4;
                                                  
                                                  for (int t_2 = 0; (t_2 < 3) && (j < 5); t_2++)                                                  {
                                                            
                                                            loop_2_IOVar1 = j;
                                                            
                                                            loop_2_block_4 = nondet_int();
                                                            
                                                            j = loop_2_IOVar1 + (1 * loop_2_block_4);
                                                            
                                                            __CPROVER_assume(loop_2_block_4 >= 0);
                                                            
                                                            __CPROVER_assume(j < 5);

                                                                                                                        {
                                                                      
                                                                      _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (i == j); 
                                                                      if (__cs_tmp_if_cond_0)

                                                                                                                                            {
                                                                                
                                                                                _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (i == 0); 
                                                                                if (__cs_tmp_if_cond_1)

                                                                                                                                                                {
                                                                                          
                                                                                          reader1 = svp_simple_006_001_global_var1;
                                                                                }
                                                                                else

                                                                                                                                                                {
                                                                                          
                                                                                          _Bool __cs_tmp_if_cond_2; __cs_tmp_if_cond_2 = (i == 4); 
                                                                                          if (__cs_tmp_if_cond_2)

                                                                                                                                                                                    {
                                                                                                    
                                                                                                    reader2 = svp_simple_006_001_global_var1;
                                                                                          }
                                                                                          else

                                                                                                                                                                                    {
                                                                                                    
                                                                                                    _Bool __cs_tmp_if_cond_3; __cs_tmp_if_cond_3 = (i == 6); 
                                                                                                    if (__cs_tmp_if_cond_3)

                                                                                                                                                                                                        {
                                                                                                              
                                                                                                              reader2 = svp_simple_006_001_global_var1;
                                                                                                    }

                                                                                          }

                                                                                }

                                                                      }

                                                            }
                                                            
                                                            j++;
                                                  }

                                                  
                                                  __CPROVER_assume(! (j < 5));
                                        }
                              }
                              
                              i++;
                    }

                    
                    __CPROVER_assume(! (i < 5));
          }

                    {
                    
                    int i;
                    
                    i = 0;
                    
                    int loop_3_IOVar1;
                    
                    int loop_3_block_2;
                    
                    for (int t_3 = 0; (t_3 < 2) && (i < 5); t_3++)                    {
                              
                              loop_3_IOVar1 = i;
                              
                              loop_3_block_2 = nondet_int();
                              
                              i = loop_3_IOVar1 + (1 * loop_3_block_2);
                              
                              __CPROVER_assume(loop_3_block_2 >= 0);
                              
                              __CPROVER_assume(i < 5);

                                                            {

                                                                                {
                                                  
                                                  int j;
                                                  
                                                  j = 0;
                                                  
                                                  int loop_4_IOVar1;
                                                  
                                                  int loop_4_block_1;
                                                  
                                                  for (int t_4 = 0; (t_4 < 1) && (j < 5); t_4++)                                                  {
                                                            
                                                            loop_4_IOVar1 = j;
                                                            
                                                            loop_4_block_1 = nondet_int();
                                                            
                                                            j = loop_4_IOVar1 + (1 * loop_4_block_1);
                                                            
                                                            __CPROVER_assume(loop_4_block_1 >= 0);
                                                            
                                                            __CPROVER_assume(j < 5);

                                                                                                                        {
                                                            }
                                                            
                                                            j++;
                                                  }

                                                  
                                                  __CPROVER_assume(! (j < 5));
                                        }
                              }
                              
                              i++;
                    }

                    
                    __CPROVER_assume(! (i < 5));
          }
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_006_001_isr_1, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


