
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

void *main_task(void *arg)

{

                    {
                    
                    svp_simple_031_001_tc_block_rcvd_bytes_ch1 = nondet_rand();
                    
                    svp_simple_031_001_gloable_var1 = nondet_rand();

                                        {
                              
                              enable_isr(- 1);
                    }
          }
          
          struct svp_simple_031_001_tc_block_data tc_block;
          
          int ichan = 0;
          
          _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (ichan == 0); 
          if (__cs_tmp_if_cond_0)

                    {
                    
                    svp_simple_031_001_tc_block_rcvd_bytes = svp_simple_031_001_tc_block_rcvd_bytes_ch1;
          }


                    {
                    
                    unsigned svp_simple_031_001_flag_chan1;
                    
                    _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (svp_simple_031_001_tc_block_rcvd_bytes_ch1 >= 16); 
                    if (__cs_tmp_if_cond_1)

                                        {
                              
                              int __cs_retval__svp_simple_031_001_func_1_0;

                                                            {
                                        
                                        int a = svp_simple_031_001_gloable_var1;
                                        
                                        int b = svp_simple_031_001_tc_block_rcvd_bytes_ch1;
                                        
                                        int c;
                                        
                                        _Bool __cs_tmp_if_cond_2; __cs_tmp_if_cond_2 = (a < b); 
                                        if (__cs_tmp_if_cond_2)

                                                                                {
                                        }
                                        else

                                                                                {
                                                  
                                                  int __cs_retval__svp_simple_031_001_func_2_0;

                                                                                                    {
                                                            
                                                            _Bool __cs_tmp_if_cond_3; __cs_tmp_if_cond_3 = (svp_simple_031_001_tc_block_rcvd_bytes_ch1 > 0); 
                                                            if (__cs_tmp_if_cond_3)

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


void *svp_simple_031_001_isr_1(void *arg)

{
          
          svp_simple_031_001_tc_block_rcvd_bytes_ch1 = ((* ((volatile unsigned int *) 0x10000000)) >> 3) & 0x1FFF;
          
          __exit_svp_simple_031_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_031_001_isr_1, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


