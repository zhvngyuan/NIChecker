void * main_task( void * arg ) {

    disable_isr ( - 1 ); 
    test_global_condition1 = 1; 
    test_global_condition2 = 1; 
    test_global_condition3 = 1; 
    test_global_condition4 = 1; 
    tco_expect_close = 0; 
    enable_isr ( - 1 ); 
    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){closer2_isr();}
    if(cond){closer1_isr();}
    if(cond){writer1_isr();}
}
int tco_timer_get_timeleft( int * time_left ) {
    unsigned char val ; 
    {
        int l = tco_lock ; 
        {
            __VERIFIER_assume ( ! l ); 
        }

    }

    val = 0; 
    val &= 0x3f; 
    {
        int l = tco_lock ; 
        {
            l = 0; 
        }

    }

    * time_left = ( int ) ( ( val * 6 ) / 10 ); 
    return ( 0 ) ; 
}
int tco_timer_set_heartbeat( int t ) {
    unsigned char val ; 
    unsigned char tmrval ; 
    unsigned char __cs_retval__seconds_to_ticks_0 ; 
    {
        int seconds = t ; 
        __cs_retval__seconds_to_ticks_0 = ( seconds * 10 ) / 6; 
    }

    tmrval = __cs_retval__seconds_to_ticks_0; 
    if( ( tmrval > 0x3f ) || ( tmrval < 0x04 ) ){
        return ( - EINVAL ) ; 
    }
    
    {
        int l = tco_lock ; 
        {
            __VERIFIER_assume ( ! l ); 
        }

    }

    val = 0; 
    val &= 0xc0; 
    val |= tmrval; 
    val = 0; 
    {
        int l = tco_lock ; 
        {
            l = 0; 
        }

    }

    if( ( val & 0x3f ) != tmrval ){
        return ( - EINVAL ) ; 
    }
    
    heartbeat = t; 
    return ( 0 ) ; 
}
void * closer2_isr( void * arg ) {
    if(cond){closer1_isr();}
    if(cond){goto label_1;}
    if(cond){goto label_2;}

    tco_write_buf = 'V'; 
    {
        {
            if( 1 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
                    label_1:
                    if( tco_write_buf == 'V' ){
                        tco_expect_close = 42; 
                    }
                    
                }
                
            }
            
            {
                {
                    {
                        int l = tco1_rld ; 
                        {
                            l = 0x01; 
                        }

                    }

                }

            }

        }

    }

    tco_expect_close = 42; 
    label_2:
    if( tco_expect_close == 42 ){
        {
            int reader1 ; 
            int reader2 ; 
            int reader3 ; 
            int reader4 ; 
            if( test_global_condition1 == 1 ){
                reader1 = test_global_var1; 
            }
            
            if( test_global_condition2 == 1 ){
                reader2 = test_global_var1; 
            }
            
            reader3 = test_global_var2; 
            reader4 = test_global_var2; 
        }

    }
    
    {
        {
            {
                int v = timer_alive ; 
                {
                    v = 0; 
                }

            }

            tco_expect_close = 0; 
        }

    }

    cnt1 ++; 
    __exit_closer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {

    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_t t3 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , closer2_isr , 0 ); 
    pthread_create ( & t2 , 0 , closer1_isr , 0 ); 
    pthread_create ( & t3 , 0 , writer1_isr , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer1_isr( void * arg ) {
    if(cond){closer2_isr();}
    if(cond){goto label_1;}

    if( test_global_condition3 == 1 ){
        test_global_var1 = 0x11; 
    }
    else {
        test_global_var2 = 0x22; 
    }

    tco_write_buf = 'V'; 
    {
        {
            if( 1 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
                    label_1:
                    if( tco_write_buf == 'V' ){
                        tco_expect_close = 42; 
                    }
                    
                }
                
            }
            
            {
                {
                    {
                        int l = tco1_rld ; 
                        {
                            l = 0x01; 
                        }

                    }

                }

            }

        }

    }

    tco_expect_close = 42; 
    {
        {
            {
                int v = timer_alive ; 
                {
                    v = 0; 
                }

            }

            tco_expect_close = 0; 
        }

    }

    cnt2 ++; 
    if( test_global_condition4 == 1 ){
        test_global_array [ 9000 ] = 999; 
    }
    
    __exit_closer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer1_isr( void * arg ) {
    if(cond){closer2_isr();}
    if(cond){goto label_1;}
    if(cond){closer1_isr();}
    if(cond){goto label_2;}

    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
                    label_1:
                    if( tco_write_buf == 'V' ){
                        tco_expect_close = 42; 
                    }
                    
                }
                
            }
            
            {
                {
                    {
                        int l = tco1_rld ; 
                        {
                            l = 0x01; 
                        }

                    }

                }

            }

        }

    }

    cnt3 ++; 
    int i = 0 ; 
    int maxnum ; 
    int mininum ; 
    for ( i = 0 ; i < 10000 ; i ++ ) {
        if( i == 9000 ){
            test_global_array [ 9000 ] = 1; 
        }
        
        if( i == ( 10000 + 1 ) ){
            test_global_array [ 9000 ] = 1; 
        }
        
    }
 
    label_2:
    mininum = test_global_array [ 9000 ] - 10; 
    maxnum = test_global_array [ 0 ] + 10; 
    __exit_writer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
