
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

void svp_simple_031_001_init();

int svp_simple_031_001_func_1(int a, int b);

int svp_simple_031_001_func_2(int x);

void svp_simple_031_001_func_3();

unsigned16 svp_simple_031_001_tc_block_rcvd_bytes_ch1;

unsigned16 svp_simple_031_001_tc_block_rcvd_bytes_ch2;

unsigned16 svp_simple_031_001_tc_block_rcvd_bytes;

unsigned8 svp_simple_031_001_tc_chan1_buff[256];

unsigned8 svp_simple_031_001_tc_chan2_buff[256];

unsigned8 *svp_simple_031_001_tc_buff_p;

unsigned32 svp_simple_031_001_gloable_var1;

struct svp_simple_031_001_tc_block_data
{
          
          unsigned8 type;
          
          unsigned8 id;
          
          unsigned8 valid_len;
};

void *main_task_0(void *__cs_param_main_task_arg)

{

                    {
                    
                    svp_simple_031_001_tc_block_rcvd_bytes_ch1 = nondet_rand();
                    
                    svp_simple_031_001_tc_block_rcvd_bytes_ch2 = nondet_rand();
                    
                    svp_simple_031_001_gloable_var1 = nondet_rand();

                                        {
                              
                              enable_isr(- 1);
                    }
          }
          
          struct svp_simple_031_001_tc_block_data __cs_local_main_task_tc_block;
          
          int __cs_local_main_task_ichan = 0;
          
          _Bool __cs_local_main_task___cs_tmp_if_cond_0;
          
          __cs_local_main_task___cs_tmp_if_cond_0 = __cs_local_main_task_ichan == 0;
          
          if (__cs_local_main_task___cs_tmp_if_cond_0)

                    {
                    
                    svp_simple_031_001_tc_buff_p = svp_simple_031_001_tc_chan1_buff;
                    
                    svp_simple_031_001_tc_block_rcvd_bytes = 
                    svp_simple_031_001_tc_block_rcvd_bytes_ch1;
          }

          
          __cs_local_main_task_tc_block.type = * (svp_simple_031_001_tc_buff_p + 2);
          
          __cs_local_main_task_tc_block.id = * (svp_simple_031_001_tc_buff_p + 4);
          
          __cs_local_main_task_tc_block.valid_len = * (svp_simple_031_001_tc_buff_p + 5);

                    {
                    
                    unsigned __cs_local_main_task_svp_simple_031_001_flag_chan1;
                    
                    __cs_local_main_task_svp_simple_031_001_flag_chan1 = 0;
                    
                    _Bool __cs_local_main_task___cs_tmp_if_cond_1;
                    
                    __cs_local_main_task___cs_tmp_if_cond_1 = svp_simple_031_001_tc_block_rcvd_bytes_ch1 >= 16;
                    
                    if (__cs_local_main_task___cs_tmp_if_cond_1)

                                        {
                              
                              int __cs_local_main_task___cs_retval__svp_simple_031_001_func_1_0;

                                                            {
                                        
                                        int __cs_local_main_task_a = svp_simple_031_001_gloable_var1;
                                        
                                        int __cs_local_main_task_b = svp_simple_031_001_tc_block_rcvd_bytes_ch1;
                                        
                                        int __cs_local_main_task_c;
                                        
                                        _Bool __cs_local_main_task___cs_tmp_if_cond_2;
                                        
                                        __cs_local_main_task___cs_tmp_if_cond_2 = __cs_local_main_task_a < __cs_local_main_task_b;
                                        
                                        if (__cs_local_main_task___cs_tmp_if_cond_2)

                                                                                {
                                                  
                                                  __cs_local_main_task_c = __cs_local_main_task_a * __cs_local_main_task_b;
                                        }
                                        else

                                                                                {
                                                  
                                                  int __cs_local_main_task___cs_retval__svp_simple_031_001_func_2_0;

                                                                                                    {
                                                            
                                                            _Bool __cs_local_main_task___cs_tmp_if_cond_3;
                                                            
                                                            __cs_local_main_task___cs_tmp_if_cond_3 = svp_simple_031_001_tc_block_rcvd_bytes_ch1 > 0;
                                                            
                                                            if (__cs_local_main_task___cs_tmp_if_cond_3)

                                                                                                                        {
                                                                      
                                                                      __cs_local_main_task___cs_retval__svp_simple_031_001_func_2_0 = 10;
                                                                      
                                                                      goto __exit__svp_simple_031_001_func_2_0;
                                                            }
                                                            else

                                                                                                                        {
                                                                      
                                                                      __cs_local_main_task___cs_retval__svp_simple_031_001_func_2_0 = 0;
                                                                      
                                                                      goto __exit__svp_simple_031_001_func_2_0;
                                                            }

                                                            
                                                            __exit__svp_simple_031_001_func_2_0:
                                                            
                                                            ;

                                                  }
                                                  
                                                  __cs_local_main_task_c = __cs_local_main_task___cs_retval__svp_simple_031_001_func_2_0;
                                        }

                                        
                                        __cs_local_main_task___cs_retval__svp_simple_031_001_func_1_0 = __cs_local_main_task_c;
                              }
                    }

          }
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


int svp_simple_031_001_func_2(int __cs_param_svp_simple_031_001_func_2_x)

{
          
          _Bool __cs_local_svp_simple_031_001_func_2___cs_tmp_if_cond_4;
          
          __cs_local_svp_simple_031_001_func_2___cs_tmp_if_cond_4 = svp_simple_031_001_tc_block_rcvd_bytes_ch1 > 0;
          
          if (__cs_local_svp_simple_031_001_func_2___cs_tmp_if_cond_4)

                    {
                    
                    return (__cs_param_svp_simple_031_001_func_2_x);
          }
          else

                    {
                    
                    return (0);
          }

}


void svp_simple_031_001_init()

{
          
          svp_simple_031_001_tc_block_rcvd_bytes_ch1 = nondet_rand();
          
          svp_simple_031_001_tc_block_rcvd_bytes_ch2 = nondet_rand();
          
          svp_simple_031_001_gloable_var1 = nondet_rand();

                    {
                    
                    enable_isr(- 1);
          }
}


void svp_simple_031_001_func_3()

{
          
          unsigned __cs_local_svp_simple_031_001_func_3_svp_simple_031_001_flag_chan1;
          
          __cs_local_svp_simple_031_001_func_3_svp_simple_031_001_flag_chan1 = 0;
          
          _Bool __cs_local_svp_simple_031_001_func_3___cs_tmp_if_cond_5;
          
          __cs_local_svp_simple_031_001_func_3___cs_tmp_if_cond_5 = svp_simple_031_001_tc_block_rcvd_bytes_ch1 >= 16;
          
          if (__cs_local_svp_simple_031_001_func_3___cs_tmp_if_cond_5)

                    {
                    
                    int __cs_local_svp_simple_031_001_func_3___cs_retval__svp_simple_031_001_func_1_1;

                                        {
                              
                              int __cs_local_svp_simple_031_001_func_3_a = svp_simple_031_001_gloable_var1;
                              
                              int __cs_local_svp_simple_031_001_func_3_b = svp_simple_031_001_tc_block_rcvd_bytes_ch1;
                              
                              int __cs_local_svp_simple_031_001_func_3_c;
                              
                              _Bool __cs_local_svp_simple_031_001_func_3___cs_tmp_if_cond_6;
                              
                              __cs_local_svp_simple_031_001_func_3___cs_tmp_if_cond_6 = __cs_local_svp_simple_031_001_func_3_a < __cs_local_svp_simple_031_001_func_3_b;
                              
                              if (__cs_local_svp_simple_031_001_func_3___cs_tmp_if_cond_6)

                                                            {
                                        
                                        __cs_local_svp_simple_031_001_func_3_c = __cs_local_svp_simple_031_001_func_3_a * __cs_local_svp_simple_031_001_func_3_b;
                              }
                              else

                                                            {
                                        
                                        int __cs_local_svp_simple_031_001_func_3___cs_retval__svp_simple_031_001_func_2_1;

                                                                                {
                                                  
                                                  _Bool __cs_local_svp_simple_031_001_func_3___cs_tmp_if_cond_7;
                                                  
                                                  __cs_local_svp_simple_031_001_func_3___cs_tmp_if_cond_7 = svp_simple_031_001_tc_block_rcvd_bytes_ch1 > 0;
                                                  
                                                  if (__cs_local_svp_simple_031_001_func_3___cs_tmp_if_cond_7)

                                                                                                    {
                                                            
                                                            __cs_local_svp_simple_031_001_func_3___cs_retval__svp_simple_031_001_func_2_1 = 10;
                                                            
                                                            goto __exit__svp_simple_031_001_func_2_1;
                                                  }
                                                  else

                                                                                                    {
                                                            
                                                            __cs_local_svp_simple_031_001_func_3___cs_retval__svp_simple_031_001_func_2_1 = 0;
                                                            
                                                            goto __exit__svp_simple_031_001_func_2_1;
                                                  }

                                                  
                                                  __exit__svp_simple_031_001_func_2_1:
                                                  
                                                  ;

                                        }
                                        
                                        __cs_local_svp_simple_031_001_func_3_c = __cs_local_svp_simple_031_001_func_3___cs_retval__svp_simple_031_001_func_2_1;
                              }

                              
                              __cs_local_svp_simple_031_001_func_3___cs_retval__svp_simple_031_001_func_1_1 = __cs_local_svp_simple_031_001_func_3_c;
                    }
          }

}


void *svp_simple_031_001_isr_1_0(void *__cs_param_svp_simple_031_001_isr_1_arg)

{
          
          svp_simple_031_001_tc_block_rcvd_bytes_ch1 = 
          ((* ((volatile unsigned int *) 0x10000000)) >> 3) & 0x1FFF;
          
          __exit_svp_simple_031_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


void idlerun()

{
          
          int __cs_local_idlerun_i = 0;
          
          __cs_local_idlerun_i = 0;
          
          int __cs_local_idlerun_loop_1_IOVar1;
          
          int __cs_local_idlerun_loop_1_block_1;
          
          int __cs_local_idlerun_t_1 = 0;
          
          if (! ((__cs_local_idlerun_t_1 < 1) && (__cs_local_idlerun_i <= 100)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_idlerun_loop_1_IOVar1 = __cs_local_idlerun_i;
                    
                    __cs_local_idlerun_loop_1_block_1 = nondet_int();
                    
                    __cs_local_idlerun_i = __cs_local_idlerun_loop_1_IOVar1 + (1 * __cs_local_idlerun_loop_1_block_1);
                    
                    __CPROVER_assume(__cs_local_idlerun_loop_1_block_1 >= 0);
                    
                    __CPROVER_assume(__cs_local_idlerun_i <= 100);

                                        {
                    }
                    
                    __cs_local_idlerun_i = __cs_local_idlerun_i + 1;
          }
          
          __cs_local_idlerun_t_1 = __cs_local_idlerun_t_1 + 1;
          
          if (! ((__cs_local_idlerun_t_1 < 1) && (__cs_local_idlerun_i <= 100)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_idlerun_loop_1_IOVar1 = __cs_local_idlerun_i;
                    
                    __cs_local_idlerun_loop_1_block_1 = nondet_int();
                    
                    __cs_local_idlerun_i = __cs_local_idlerun_loop_1_IOVar1 + (1 * __cs_local_idlerun_loop_1_block_1);
                    
                    __CPROVER_assume(__cs_local_idlerun_loop_1_block_1 >= 0);
                    
                    __CPROVER_assume(__cs_local_idlerun_i <= 100);

                                        {
                    }
                    
                    __cs_local_idlerun_i = __cs_local_idlerun_i + 1;
          }
          
          __cs_local_idlerun_t_1 = __cs_local_idlerun_t_1 + 1;
          
          _Bool __cs_loop_1 = (__cs_local_idlerun_t_1 < 1) && (__cs_local_idlerun_i <= 100);
          
          __VERIFIER_assume(! __cs_loop_1);
          
          __exit_loop_1:
          
          ;

          
          __CPROVER_assume(! (__cs_local_idlerun_i <= 100));
}


void init()

{
          
          enable_isr(- 1);
}


int main()

{
          
          pthread_t __cs_local_main_t0;
          
          pthread_t __cs_local_main_t1;
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, svp_simple_031_001_isr_1_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

