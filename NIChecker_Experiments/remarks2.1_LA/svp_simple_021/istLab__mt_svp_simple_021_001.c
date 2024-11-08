
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

unsigned16 svp_simple_021_001_tc_block_rcvd_bytes_ch1;

unsigned16 svp_simple_021_001_tc_block_rcvd_bytes_ch2;

unsigned16 svp_simple_021_001_tc_block_rcvd_bytes;

unsigned8 svp_simple_021_001_tc_chan1_buff[256];

unsigned8 svp_simple_021_001_tc_chan2_buff[256];

unsigned8 *svp_simple_021_001_tc_buff_p;

struct svp_simple_021_001_tc_block_data
{
          
          unsigned8 type;
          
          unsigned8 id;
          
          unsigned8 valid_len;
};

void *main_task_0(void *__cs_param_main_task_arg)

{
          
          struct svp_simple_021_001_tc_block_data __cs_local_main_task_tc_block;

                    {
                    
                    svp_simple_021_001_tc_block_rcvd_bytes_ch1 = nondet_rand();

                                        {
                              
                              enable_isr(- 1);
                    }
          }

                    {
                    
                    unsigned __cs_local_main_task_svp_simple_021_001_flag_chan1;
                    
                    _Bool __cs_local_main_task___cs_tmp_if_cond_0;
                    
                    __cs_local_main_task___cs_tmp_if_cond_0 = svp_simple_021_001_tc_block_rcvd_bytes_ch1 >= 16;
                    
                    if (__cs_local_main_task___cs_tmp_if_cond_0)

                                        {
                              
                              svp_simple_021_001_tc_block_rcvd_bytes_ch1 = 0;
                              
                              int __cs_local_main_task_i;
                    }

          }
          
          int __cs_local_main_task_ichan;
          
          __cs_local_main_task_ichan = 0;
          
          int __cs_local_main_task_loop_1_IOVar1;
          
          int __cs_local_main_task_loop_1_block_2;
          
          int __cs_local_main_task_t = 0;
          
          if (! ((__cs_local_main_task_t < 2) && (__cs_local_main_task_ichan < 2)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_ichan;
                    
                    __cs_local_main_task_loop_1_block_2 = nondet_int();
                    
                    __cs_local_main_task_ichan = __cs_local_main_task_loop_1_IOVar1 + (1 * __cs_local_main_task_loop_1_block_2);
                    
                    __CPROVER_assume(__cs_local_main_task_loop_1_block_2 >= 0);
                    
                    __CPROVER_assume(__cs_local_main_task_ichan < 2);

                                        {
                              
                              _Bool __cs_local_main_task___cs_tmp_if_cond_1;
                              
                              __cs_local_main_task___cs_tmp_if_cond_1 = __cs_local_main_task_ichan == 0;
                              
                              if (__cs_local_main_task___cs_tmp_if_cond_1)

                                                            {
                                        
                                        svp_simple_021_001_tc_block_rcvd_bytes = svp_simple_021_001_tc_block_rcvd_bytes_ch1;
                              }
                              else

                                                            {
                              }

                    }
                    
                    __cs_local_main_task_ichan = __cs_local_main_task_ichan + 1;
          }
          
          __cs_local_main_task_t = __cs_local_main_task_t + 1;
          
          if (! ((__cs_local_main_task_t < 2) && (__cs_local_main_task_ichan < 2)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_ichan;
                    
                    __cs_local_main_task_loop_1_block_2 = nondet_int();
                    
                    __cs_local_main_task_ichan = __cs_local_main_task_loop_1_IOVar1 + (1 * __cs_local_main_task_loop_1_block_2);
                    
                    __CPROVER_assume(__cs_local_main_task_loop_1_block_2 >= 0);
                    
                    __CPROVER_assume(__cs_local_main_task_ichan < 2);

                                        {
                              
                              _Bool __cs_local_main_task___cs_tmp_if_cond_1;
                              
                              __cs_local_main_task___cs_tmp_if_cond_1 = __cs_local_main_task_ichan == 0;
                              
                              if (__cs_local_main_task___cs_tmp_if_cond_1)

                                                            {
                                        
                                        svp_simple_021_001_tc_block_rcvd_bytes = svp_simple_021_001_tc_block_rcvd_bytes_ch1;
                              }
                              else

                                                            {
                              }

                    }
                    
                    __cs_local_main_task_ichan = __cs_local_main_task_ichan + 1;
          }
          
          __cs_local_main_task_t = __cs_local_main_task_t + 1;
          
          _Bool __cs_loop_1 = (__cs_local_main_task_t < 2) && (__cs_local_main_task_ichan < 2);
          
          __VERIFIER_assume(! __cs_loop_1);
          
          __exit_loop_1:
          
          ;

          
          __CPROVER_assume(! (__cs_local_main_task_ichan < 2));
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_021_001_isr_1_0(void *__cs_param_svp_simple_021_001_isr_1_arg)

{
          
          svp_simple_021_001_tc_block_rcvd_bytes_ch1 = ((* ((volatile unsigned int *) 0x10000000)) >> 3) & 0x1FFF;
          
          __exit_svp_simple_021_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t __cs_local_main_t0;
          
          pthread_t __cs_local_main_t1;
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, svp_simple_021_001_isr_1_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

