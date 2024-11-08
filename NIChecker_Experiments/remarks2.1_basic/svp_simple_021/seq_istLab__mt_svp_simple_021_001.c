void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_021_001_isr_1();}
    if(cond){goto label_1;}
    if(cond){goto label_2;}

    struct svp_simple_021_001_tc_block_data tc_block ; 
    {
        svp_simple_021_001_tc_block_rcvd_bytes_ch1 = nondet_rand ( ); 
        svp_simple_021_001_tc_block_rcvd_bytes_ch2 = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
        }

    }

    {
        unsigned svp_simple_021_001_flag_chan1 ; 
        svp_simple_021_001_flag_chan1 = 0; 
        label_1:
        if( svp_simple_021_001_tc_block_rcvd_bytes_ch1 >= 16 ){
            svp_simple_021_001_tc_block_rcvd_bytes_ch1 = 0; 
            int i ; 
            for ( i = 0 ; i < 256 ; i ++ ) {
                svp_simple_021_001_tc_chan1_buff [ i ] = 0; 
            }
 
            svp_simple_021_001_flag_chan1 = 0xFF; 
        }
        
    }

    int ichan ; 
    for ( ichan = 0 ; ichan < 2 ; ichan ++ ) {
        if( ichan == 0 ){
            svp_simple_021_001_tc_buff_p = svp_simple_021_001_tc_chan1_buff; 
            label_2:
            svp_simple_021_001_tc_block_rcvd_bytes = svp_simple_021_001_tc_block_rcvd_bytes_ch1; 
        }
        else {
            svp_simple_021_001_tc_buff_p = svp_simple_021_001_tc_chan2_buff; 
            svp_simple_021_001_tc_block_rcvd_bytes = svp_simple_021_001_tc_block_rcvd_bytes_ch2; 
        }

        tc_block . type = * ( svp_simple_021_001_tc_buff_p + 2 ); 
        tc_block . id = * ( svp_simple_021_001_tc_buff_p + 4 ); 
        tc_block . valid_len = * ( svp_simple_021_001_tc_buff_p + 5 ); 
    }
 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void idlerun(  ) {
    int i = 0 ; 
    for ( i = 0 ; i <= 100 ; i ++ ) {
    }
 
}
void * svp_simple_021_001_isr_1( void * arg ) {

    svp_simple_021_001_tc_block_rcvd_bytes_ch1 = ( ( * ( ( volatile unsigned int * ) 0x10000000 ) ) >> 3 ) & 0x1FFF; 
    __exit_svp_simple_021_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {

    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_021_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
