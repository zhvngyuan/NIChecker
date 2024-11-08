void * writer2_isr( void * arg ) {
    if(cond){closer2_isr();}
    if(cond){goto label_1;}
    if(cond){writer1_isr();}
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

    cnt4 ++; 
    label_2:
    if( test_global_condition3 == 0 ){
        test_global_var2 = 0x22; 
    }
    
    __exit_writer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer20( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer22( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * main_task( void * arg ) {
    if(cond){writer2_isr();}
    if(cond){goto label_2;}
    if(cond){closer2_isr();}
    if(cond){goto label_1;}

    disable_isr ( - 1 ); 
    test_global_condition1 = 1; 
    test_global_condition2 = 1; 
    test_global_condition3 = 1; 
    test_global_condition4 = 1; 
    tco_expect_close = 0; 
    enable_isr ( - 1 ); 
    {
        int reader1 ; 
        int reader2 ; 
        int reader3 ; 
        int reader4 ; 
        if( test_global_condition1 == 1 ){
            label_1:
            reader1 = test_global_var1; 
        }
        
        if( test_global_condition2 == 1 ){
            reader2 = test_global_var1; 
        }
        
        label_2:
        reader3 = test_global_var2; 
        reader4 = test_global_var2; 
    }

    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
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
void * writer21( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer24( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer23( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer26( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer25( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer28( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer27( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
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
    if(cond){writer2_isr();}
    if(cond){goto label_2;}
    if(cond){closer1_isr();}
    if(cond){goto label_1;}

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
            label_2:
            if( tco_expect_close != 42 ){
                assert ( 0 ); 
            }
            else {
            }

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
    test_global_var1 = 0x11; 
    __exit_closer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {

    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_t t3 ; 
    pthread_t t4 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , closer1_isr , 0 ); 
    pthread_create ( & t2 , 0 , closer2_isr , 0 ); 
    pthread_create ( & t3 , 0 , writer1_isr , 0 ); 
    pthread_create ( & t4 , 0 , writer2_isr , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer29( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer30( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer11( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer10( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer13( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer12( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer15( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer14( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer6( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer17( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer5( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer16( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer4( void * unused ) {
    while ( 1 ) {
        {
            {
                if( 0 ){
                    if( ! nowayout ){
                        tco_expect_close = 0; 
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

    }
 
    return ( NULL ) ; 
}
void * writer19( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer3( void * unused ) {
    while ( 1 ) {
        {
            {
                if( 0 ){
                    if( ! nowayout ){
                        tco_expect_close = 0; 
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

    }
 
    return ( NULL ) ; 
}
void * writer18( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void tco_timer_stop(  ) {
    {
        unsigned char val ; 
        unsigned char val1 ; 
        {
            int l = tco_lock ; 
            {
                __VERIFIER_assume ( ! l ); 
            }

        }

        val = ( tco1_cnt_b4 = 1 ); 
        {
            int l = tco_lock ; 
            {
                l = 0; 
            }

        }

    }

}
void * writer9( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer8( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * writer7( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    tco_expect_close = 0; 
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

    return ( NULL ) ; 
}
void * closer1_isr( void * arg ) {
    if(cond){writer2_isr();}
    if(cond){goto label_2;}
    if(cond){closer2_isr();}
    if(cond){goto label_1;}

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
        test_global_var3 ++; 
    }
    
    cnt1 ++; 
    __exit_closer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer1_isr( void * arg ) {
    if(cond){closer2_isr();}
    if(cond){goto label_1;}

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
    test_global_condition3 = 0; 
    __exit_writer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
