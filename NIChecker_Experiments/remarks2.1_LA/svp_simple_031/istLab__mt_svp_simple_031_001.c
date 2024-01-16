
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
                    
                    svp_simple_031_001_tc_block_rcvd_bytes = svp_simple_031_001_tc_block_rcvd_bytes_ch1;
          }


                    {
                    
                    unsigned __cs_local_main_task_svp_simple_031_001_flag_chan1;
                    
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
                                        }
                                        else

                                                                                {
                                                  
                                                  int __cs_local_main_task___cs_retval__svp_simple_031_001_func_2_0;

                                                                                                    {
                                                            
                                                            _Bool __cs_local_main_task___cs_tmp_if_cond_3;
                                                            
                                                            __cs_local_main_task___cs_tmp_if_cond_3 = svp_simple_031_001_tc_block_rcvd_bytes_ch1 > 0;
                                                            
                                                            if (__cs_local_main_task___cs_tmp_if_cond_3)

                                                                                                                        {
                                                                      
                                                                      goto __exit__svp_simple_031_001_func_2_0;
                                                                      
                                                                      ;
                                                            }
                                                            else

                                                                                                                        {
                                                                      
                                                                      goto __exit__svp_simple_031_001_func_2_0;
                                                                      
                                                                      ;
                                                            }

                                                            
                                                            __exit__svp_simple_031_001_func_2_0:
                                                            
                                                            ;

                                                  }
                                        }

                              }
                    }

          }
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_031_001_isr_1_0(void *__cs_param_svp_simple_031_001_isr_1_arg)

{
          
          svp_simple_031_001_tc_block_rcvd_bytes_ch1 = ((* ((volatile unsigned int *) 0x10000000)) >> 3) & 0x1FFF;
          
          __exit_svp_simple_031_001_isr_1:
          
          ;

          
          pthread_exit(0);
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

