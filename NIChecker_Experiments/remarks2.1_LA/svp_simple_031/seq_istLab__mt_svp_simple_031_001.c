void svp_simple_031_001_init(  ) {
    svp_simple_031_001_tc_block_rcvd_bytes_ch1 = nondet_rand ( ); 
    svp_simple_031_001_tc_block_rcvd_bytes_ch2 = nondet_rand ( ); 
    svp_simple_031_001_gloable_var1 = nondet_rand ( ); 
    {
        enable_isr ( - 1 ); 
    }

}
void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_031_001_isr_1();}
    if(cond){goto label_1;}

    {
        svp_simple_031_001_tc_block_rcvd_bytes_ch1 = nondet_rand ( ); 
        svp_simple_031_001_tc_block_rcvd_bytes_ch2 = nondet_rand ( ); 
        svp_simple_031_001_gloable_var1 = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
        }

    }

    struct svp_simple_031_001_tc_block_data tc_block ; 
    int ichan = 0 ; 
    if( ichan == 0 ){
        svp_simple_031_001_tc_buff_p = svp_simple_031_001_tc_chan1_buff; 
        label_1:
        svp_simple_031_001_tc_block_rcvd_bytes = svp_simple_031_001_tc_block_rcvd_bytes_ch1; 
    }
    
    tc_block . type = * ( svp_simple_031_001_tc_buff_p + 2 ); 
    tc_block . id = * ( svp_simple_031_001_tc_buff_p + 4 ); 
    tc_block . valid_len = * ( svp_simple_031_001_tc_buff_p + 5 ); 
    {
        unsigned svp_simple_031_001_flag_chan1 ; 
        svp_simple_031_001_flag_chan1 = 0; 
        if( svp_simple_031_001_tc_block_rcvd_bytes_ch1 >= 16 ){
            int __cs_retval__svp_simple_031_001_func_1_0 ; 
            {
                int a = svp_simple_031_001_gloable_var1 ; 
                int b = svp_simple_031_001_tc_block_rcvd_bytes_ch1 ; 
                int c ; 
                if( a < b ){
                    c = a * b; 
                }
                else {
                    int __cs_retval__svp_simple_031_001_func_2_0 ; 
                    {
                        if( svp_simple_031_001_tc_block_rcvd_bytes_ch1 > 0 ){
                            __cs_retval__svp_simple_031_001_func_2_0 = 10; 
                            goto __exit__svp_simple_031_001_func_2_0 ;; 
                        }
                        else {
                            __cs_retval__svp_simple_031_001_func_2_0 = 0; 
                            goto __exit__svp_simple_031_001_func_2_0 ;; 
                        }

                        __exit__svp_simple_031_001_func_2_0 : 
                        ; 
                    }

                    c = __cs_retval__svp_simple_031_001_func_2_0; 
                }

                __cs_retval__svp_simple_031_001_func_1_0 = c; 
            }

        }
        
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
void * svp_simple_031_001_isr_1( void * arg ) {

    svp_simple_031_001_tc_block_rcvd_bytes_ch1 = ( ( * ( ( volatile unsigned int * ) 0x10000000 ) ) >> 3 ) & 0x1FFF; 
    __exit_svp_simple_031_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void svp_simple_031_001_func_3(  ) {
    unsigned svp_simple_031_001_flag_chan1 ; 
    svp_simple_031_001_flag_chan1 = 0; 
    if( svp_simple_031_001_tc_block_rcvd_bytes_ch1 >= 16 ){
        int __cs_retval__svp_simple_031_001_func_1_1 ; 
        {
            int a = svp_simple_031_001_gloable_var1 ; 
            int b = svp_simple_031_001_tc_block_rcvd_bytes_ch1 ; 
            int c ; 
            if( a < b ){
                c = a * b; 
            }
            else {
                int __cs_retval__svp_simple_031_001_func_2_1 ; 
                {
                    if( svp_simple_031_001_tc_block_rcvd_bytes_ch1 > 0 ){
                        __cs_retval__svp_simple_031_001_func_2_1 = 10; 
                        goto __exit__svp_simple_031_001_func_2_1 ;; 
                    }
                    else {
                        __cs_retval__svp_simple_031_001_func_2_1 = 0; 
                        goto __exit__svp_simple_031_001_func_2_1 ;; 
                    }

                    __exit__svp_simple_031_001_func_2_1 : 
                    ; 
                }

                c = __cs_retval__svp_simple_031_001_func_2_1; 
            }

            __cs_retval__svp_simple_031_001_func_1_1 = c; 
        }

    }
    
}
int svp_simple_031_001_func_2( int x ) {
    if( svp_simple_031_001_tc_block_rcvd_bytes_ch1 > 0 ){
        return ( x ) ; 
    }
    else {
        return ( 0 ) ; 
    }

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