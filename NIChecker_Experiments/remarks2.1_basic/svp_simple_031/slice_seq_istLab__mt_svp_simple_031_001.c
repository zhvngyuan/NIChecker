void * main_task( void * arg ) {
    {
        svp_simple_031_001_tc_block_rcvd_bytes_ch1 = nondet_rand ( ); 
        svp_simple_031_001_gloable_var1 = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
        }

    }

    struct svp_simple_031_001_tc_block_data tc_block ; 
    int ichan = 0 ; 
    if( ichan == 0 ){
        svp_simple_031_001_tc_block_rcvd_bytes = svp_simple_031_001_tc_block_rcvd_bytes_ch1; 
    }
    
    {
        unsigned svp_simple_031_001_flag_chan1 ; 
        if( svp_simple_031_001_tc_block_rcvd_bytes_ch1 >= 16 ){
            int __cs_retval__svp_simple_031_001_func_1_0 ; 
            {
                int a = svp_simple_031_001_gloable_var1 ; 
                int b = svp_simple_031_001_tc_block_rcvd_bytes_ch1 ; 
                int c ; 
                if( a < b ){
                }
                else {
                    int __cs_retval__svp_simple_031_001_func_2_0 ; 
                    {
                        if( svp_simple_031_001_tc_block_rcvd_bytes_ch1 > 0 ){
                            goto __exit__svp_simple_031_001_func_2_0 ;; 
                        }
                        else {
                            goto __exit__svp_simple_031_001_func_2_0 ;; 
                        }

                        __exit__svp_simple_031_001_func_2_0 : 
                        ; 
                    }

                }

            }

        }
        
    }

    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_031_001_isr_1( void * arg ) {
    svp_simple_031_001_tc_block_rcvd_bytes_ch1 = ( ( * ( ( volatile unsigned int * ) 0x10000000 ) ) >> 3 ) & 0x1FFF; 
    __exit_svp_simple_031_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_031_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
