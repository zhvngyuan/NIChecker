
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

void *main_task(void *arg)

{
          
          struct svp_simple_021_001_tc_block_data tc_block;

                    {
                    
                    svp_simple_021_001_tc_block_rcvd_bytes_ch1 = nondet_rand();
                    
                    svp_simple_021_001_tc_block_rcvd_bytes_ch2 = nondet_rand();

                                        {
                              
                              enable_isr(- 1);
                    }
          }

                    {
                    
                    unsigned svp_simple_021_001_flag_chan1;
                    
                    svp_simple_021_001_flag_chan1 = 0;
                    
                    _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (svp_simple_021_001_tc_block_rcvd_bytes_ch1 >= 16); 
                    if (__cs_tmp_if_cond_0)

                                        {
                              
                              svp_simple_021_001_tc_block_rcvd_bytes_ch1 = 0;
                              
                              int i;
                              
                              i = 0;
                              
                              int loop_1_IOVar1;
                              
                              int loop_1_block_1;
                              
                              for (int t_1 = 0; (t_1 < 2) && (i < 256); t_1++)                              {
                                        
                                        loop_1_IOVar1 = i;
                                        
                                        loop_1_block_1 = nondet_int();
                                        
                                        i = loop_1_IOVar1 + (1 * loop_1_block_1);
                                        
                                        __CPROVER_assume(loop_1_block_1 >= 0);
                                        
                                        __CPROVER_assume(i < 256);

                                                                                {
                                                  
                                                  svp_simple_021_001_tc_chan1_buff[i] = 0;
                                        }
                                        
                                        i++;
                              }

                              
                              __CPROVER_assume(! (i < 256));
                              
                              svp_simple_021_001_flag_chan1 = 0xFF;
                    }

          }
          
          int ichan;
          
          ichan = 0;
          
          unsigned8 *loop_2_IOVar1;
          
          int loop_2_IOVar2;
          
          int loop_2_k1_1;
          
          int loop_2_block_4;
          
          for (int t_2 = 0; (t_2 < 4) && (ichan < 2); t_2++)          {
                    
                    loop_2_IOVar1 = svp_simple_021_001_tc_buff_p;
                    
                    loop_2_IOVar2 = ichan;
                    
                    loop_2_block_4 = nondet_int();
                    
                    unsigned8 *resetIOVar_1_list[3];
                    
                    resetIOVar_1_list[0] = loop_2_IOVar1;
                    
                    resetIOVar_1_list[1] = svp_simple_021_001_tc_chan1_buff;
                    
                    resetIOVar_1_list[2] = svp_simple_021_001_tc_chan2_buff;
                    
                    loop_2_k1_1 = nondet_int();
                    
                    __CPROVER_assume(loop_2_k1_1 >= 0);
                    
                    __CPROVER_assume(loop_2_k1_1 <= 2);
                    
                    svp_simple_021_001_tc_buff_p = resetIOVar_1_list[loop_2_k1_1];
                    
                    ichan = loop_2_IOVar2 + (1 * loop_2_block_4);
                    
                    __CPROVER_assume(loop_2_block_4 >= 0);
                    
                    __CPROVER_assume(ichan < 2);

                                        {
                              
                              _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (ichan == 0); 
                              if (__cs_tmp_if_cond_1)

                                                            {
                                        
                                        svp_simple_021_001_tc_buff_p = svp_simple_021_001_tc_chan1_buff;
                                        
                                        svp_simple_021_001_tc_block_rcvd_bytes = 
                                        svp_simple_021_001_tc_block_rcvd_bytes_ch1;
                              }
                              else

                                                            {
                                        
                                        svp_simple_021_001_tc_buff_p = svp_simple_021_001_tc_chan2_buff;
                                        
                                        svp_simple_021_001_tc_block_rcvd_bytes = 
                                        svp_simple_021_001_tc_block_rcvd_bytes_ch2;
                              }

                              
                              tc_block.type = * (svp_simple_021_001_tc_buff_p + 2);
                              
                              tc_block.id = * (svp_simple_021_001_tc_buff_p + 4);
                              
                              tc_block.valid_len = * (svp_simple_021_001_tc_buff_p + 5);
                    }
                    
                    ichan++;
          }

          
          __CPROVER_assume(! (ichan < 2));
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_021_001_isr_1(void *arg)

{
          
          svp_simple_021_001_tc_block_rcvd_bytes_ch1 = 
          ((* ((volatile unsigned int *) 0x10000000)) >> 3) & 0x1FFF;
          
          __exit_svp_simple_021_001_isr_1:
          
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
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_021_001_isr_1, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


