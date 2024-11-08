
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

unsigned8 svp_simple_029_001_tm_blocks[4096];

unsigned8 svp_simple_029_001_average_adjust_flag;

unsigned8 svp_simple_029_001_average_adjust_count;

unsigned8 (*svp_simple_029_001_ptr_GetTmData)(unsigned32);

void (*svp_simple_029_001_ptr_SetTmData)(unsigned32, unsigned8);

void (*svp_simple_029_001_ptr_SetSelfCtrlFlag)(unsigned32, unsigned8, unsigned8);

void svp_simple_029_001_TmOrgFuncMap();

void svp_simple_029_001_SetSelfCtrlFlag(unsigned32 tm_para, unsigned8 ctrl_flag, 
unsigned8 flag_pos);

unsigned8 svp_simple_029_001_GetTmData(unsigned32 tm_name);

void svp_simple_029_001_SetTmData(unsigned32 tm_name, unsigned8 tm_data);

void svp_simple_029_001_init();

void *svp_simple_029_001_isr_1_0(void *__cs_param_svp_simple_029_001_isr_1_arg)

{
          
          _Bool __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_0;
          
          __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_0 = svp_simple_029_001_average_adjust_flag == 0xFF;
          
          if (__cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_0)

                    {
                    
                    svp_simple_029_001_average_adjust_count = svp_simple_029_001_average_adjust_count + 1;
                    
                    _Bool __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_1;
                    
                    __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_1 = svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData;
                    
                    if (__cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_1)

                                        {

                                                            {
                                        
                                        unsigned8 __cs_local_svp_simple_029_001_isr_1_tm_data = svp_simple_029_001_average_adjust_count;
                                        
                                        svp_simple_029_001_tm_blocks[36] = __cs_local_svp_simple_029_001_isr_1_tm_data;
                              }
                    }
                    else

                                        {
                              
                              _Bool __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_2;
                              
                              __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_2 = svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData;
                              
                              if (__cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_2)

                                                            {

                                                                                {
                                                  
                                                  unsigned8 __cs_local_svp_simple_029_001_isr_1_tm_data = svp_simple_029_001_average_adjust_count;
                                                  
                                                  svp_simple_029_001_tm_blocks[36] = __cs_local_svp_simple_029_001_isr_1_tm_data;
                                        }
                              }

                    }

          }
          else

                    {
                    
                    svp_simple_029_001_average_adjust_count = 0;
                    
                    _Bool __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_3;
                    
                    __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_3 = svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData;
                    
                    if (__cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_3)

                                        {

                                                            {
                                        
                                        unsigned8 __cs_local_svp_simple_029_001_isr_1_tm_data = svp_simple_029_001_average_adjust_count;
                                        
                                        svp_simple_029_001_tm_blocks[36] = __cs_local_svp_simple_029_001_isr_1_tm_data;
                              }
                    }
                    else

                                        {
                              
                              _Bool __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_4;
                              
                              __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_4 = svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData;
                              
                              if (__cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_4)

                                                            {

                                                                                {
                                                  
                                                  unsigned8 __cs_local_svp_simple_029_001_isr_1_tm_data = svp_simple_029_001_average_adjust_count;
                                                  
                                                  svp_simple_029_001_tm_blocks[36] = __cs_local_svp_simple_029_001_isr_1_tm_data;
                                        }
                              }

                    }

          }

          
          __exit_svp_simple_029_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


void *main_task_0(void *__cs_param_main_task_arg)

{
          
          unsigned8 __cs_local_main_task_svp_simple_029_001_local_status = 1;

                    {

                                        {
                              
                              int __cs_local_main_task_i;
                              
                              __cs_local_main_task_i = 0;
                              
                              int __cs_local_main_task_loop_1_IOVar1;
                              
                              int __cs_local_main_task_loop_1_block_1;
                              
                              int __cs_local_main_task_t = 0;
                              
                              if (! ((__cs_local_main_task_t < 2) && (__cs_local_main_task_i < 4096)))

                                                            {
                                        
                                        goto __exit_loop_1;
                              }


                                                            {
                                        
                                        __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i;
                                        
                                        __cs_local_main_task_loop_1_block_1 = nondet_int();
                                        
                                        __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + (1 * __cs_local_main_task_loop_1_block_1);
                                        
                                        __CPROVER_assume(__cs_local_main_task_loop_1_block_1 >= 0);
                                        
                                        __CPROVER_assume(__cs_local_main_task_i < 4096);

                                                                                {
                                                  
                                                  svp_simple_029_001_tm_blocks[__cs_local_main_task_i] = nondet_rand();
                                        }
                                        
                                        __cs_local_main_task_i = __cs_local_main_task_i + 1;
                              }
                              
                              __cs_local_main_task_t = __cs_local_main_task_t + 1;
                              
                              if (! ((__cs_local_main_task_t < 2) && (__cs_local_main_task_i < 4096)))

                                                            {
                                        
                                        goto __exit_loop_1;
                              }


                                                            {
                                        
                                        __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i;
                                        
                                        __cs_local_main_task_loop_1_block_1 = nondet_int();
                                        
                                        __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + (1 * __cs_local_main_task_loop_1_block_1);
                                        
                                        __CPROVER_assume(__cs_local_main_task_loop_1_block_1 >= 0);
                                        
                                        __CPROVER_assume(__cs_local_main_task_i < 4096);

                                                                                {
                                                  
                                                  svp_simple_029_001_tm_blocks[__cs_local_main_task_i] = nondet_rand();
                                        }
                                        
                                        __cs_local_main_task_i = __cs_local_main_task_i + 1;
                              }
                              
                              __cs_local_main_task_t = __cs_local_main_task_t + 1;
                              
                              _Bool __cs_loop_1 = (__cs_local_main_task_t < 2) && (__cs_local_main_task_i < 4096);
                              
                              __VERIFIER_assume(! __cs_loop_1);
                              
                              __exit_loop_1:
                              
                              ;

                              
                              __CPROVER_assume(! (__cs_local_main_task_i < 4096));
                    }

                                        {
                              
                              enable_isr(- 1);
                    }
          }

                    {
                    
                    svp_simple_029_001_ptr_SetTmData = svp_simple_029_001_SetTmData;
                    
                    svp_simple_029_001_ptr_GetTmData = svp_simple_029_001_GetTmData;
                    
                    svp_simple_029_001_ptr_SetSelfCtrlFlag = svp_simple_029_001_SetSelfCtrlFlag;
          }
          
          _Bool __cs_local_main_task___cs_tmp_if_cond_5;
          
          __cs_local_main_task___cs_tmp_if_cond_5 = __cs_local_main_task_svp_simple_029_001_local_status == 1;
          
          if (__cs_local_main_task___cs_tmp_if_cond_5)

                    {
                    
                    _Bool __cs_local_main_task___cs_tmp_if_cond_6;
                    
                    __cs_local_main_task___cs_tmp_if_cond_6 = svp_simple_029_001_ptr_SetSelfCtrlFlag == svp_simple_029_001_SetSelfCtrlFlag;
                    
                    if (__cs_local_main_task___cs_tmp_if_cond_6)

                                        {

                                                            {
                                        
                                        unsigned8 __cs_local_main_task_tmp1;
                                        
                                        unsigned8 __cs_local_main_task_tmp2;
                                        
                                        unsigned8 __cs_local_main_task_ctrl_sts;
                                        
                                        _Bool __cs_local_main_task___cs_tmp_if_cond_7;
                                        
                                        __cs_local_main_task___cs_tmp_if_cond_7 = 0xFF > 0x80;
                                        
                                        if (__cs_local_main_task___cs_tmp_if_cond_7)

                                                                                {
                                                  
                                                  __cs_local_main_task_tmp1 = 1;
                                        }
                                        else

                                                                                {
                                                  
                                                  __cs_local_main_task_tmp1 = 0;
                                        }

                                        
                                        __cs_local_main_task_tmp1 <<= 0;
                                        
                                        _Bool __cs_local_main_task___cs_tmp_if_cond_8;
                                        
                                        __cs_local_main_task___cs_tmp_if_cond_8 = svp_simple_029_001_ptr_GetTmData == svp_simple_029_001_GetTmData;
                                        
                                        if (__cs_local_main_task___cs_tmp_if_cond_8)

                                                                                {
                                                  
                                                  unsigned8 __cs_local_main_task___cs_retval__svp_simple_029_001_GetTmData_0;

                                                                                                    {
                                                            
                                                            unsigned32 __cs_local_main_task_tm_name = 36;
                                                            
                                                            __cs_local_main_task___cs_retval__svp_simple_029_001_GetTmData_0 = svp_simple_029_001_tm_blocks[__cs_local_main_task_tm_name];
                                                  }
                                                  
                                                  __cs_local_main_task_ctrl_sts = __cs_local_main_task___cs_retval__svp_simple_029_001_GetTmData_0;
                                        }

                                        
                                        _Bool __cs_local_main_task___cs_tmp_if_cond_9;
                                        
                                        __cs_local_main_task___cs_tmp_if_cond_9 = svp_simple_029_001_ptr_GetTmData == svp_simple_029_001_GetTmData;
                                        
                                        if (__cs_local_main_task___cs_tmp_if_cond_9)

                                                                                {
                                                  
                                                  unsigned8 __cs_local_main_task___cs_retval__svp_simple_029_001_GetTmData_1;

                                                                                                    {
                                                            
                                                            unsigned32 __cs_local_main_task_tm_name = 37;
                                                            
                                                            __cs_local_main_task___cs_retval__svp_simple_029_001_GetTmData_1 = svp_simple_029_001_tm_blocks[__cs_local_main_task_tm_name];
                                                  }
                                                  
                                                  __cs_local_main_task_ctrl_sts = __cs_local_main_task_ctrl_sts - __cs_local_main_task___cs_retval__svp_simple_029_001_GetTmData_1;
                                        }

                                        
                                        __cs_local_main_task_ctrl_sts |= __cs_local_main_task_tmp1;
                                        
                                        _Bool __cs_local_main_task___cs_tmp_if_cond_10;
                                        
                                        __cs_local_main_task___cs_tmp_if_cond_10 = svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData;
                                        
                                        if (__cs_local_main_task___cs_tmp_if_cond_10)

                                                                                {

                                                                                                    {
                                                            
                                                            unsigned32 __cs_local_main_task_tm_name = 36;
                                                            
                                                            unsigned8 __cs_local_main_task_tm_data = __cs_local_main_task_ctrl_sts;
                                                            
                                                            svp_simple_029_001_tm_blocks[__cs_local_main_task_tm_name] = __cs_local_main_task_tm_data;
                                                  }
                                        }

                              }
                    }

          }

          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t __cs_local_main_t0;
          
          pthread_t __cs_local_main_t1;
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, svp_simple_029_001_isr_1_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}
