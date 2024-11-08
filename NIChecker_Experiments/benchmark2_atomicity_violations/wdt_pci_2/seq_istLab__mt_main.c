void * writer2_isr( void * arg ) {
    if(cond){closer2_isr();}
    if(cond){goto label_1;}

    count = 0; 
    expect_close = 0; 
    label_1:
    if( count ){
        if( ! nowayout ){
            if( wdtpci_write_buf != 'V' ){
                expect_close = 0; 
            }
            
        }
        
    }
    
    cnt4 ++; 
    __exit_writer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {

    disable_isr ( - 1 ); 
    count = 0; 
    expect_close = 0; 
    test_global_condition1 = 1; 
    test_global_condition2 = 1; 
    test_global_condition3 = 1; 
    test_global_condition4 = 1; 
    enable_isr ( - 1 ); 
    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){writer2_isr();}
    if(cond){closer2_isr();}
    if(cond){closer3_isr();}
    if(cond){closer1_isr();}
    if(cond){writer1_isr();}
    if(cond){writer3_isr();}
}
void wdtpci_ping(  ) {
    {
        {
            int l = wdtpci_lock ; 
            {
                __VERIFIER_assume ( ! l ); 
            }

        }

        ( char ) wdt_dc_port; 
        {
            {
                ( ( ( ( ( 1 * 2 ) * 2 ) * 2 ) * 2 ) * 2 ) * 2; 
                {
                    int v = 1 ; 
                    int l = wdt_ctr_port ; 
                    {
                        l = v; 
                    }

                }

            }

        }

        {
            int val = wd_heartbeat ; 
        }

        {
            int l = wdt_dc_port ; 
            {
                l = 0; 
            }

        }

        {
            int l = wdtpci_lock0 ; 
            {
                l = 0; 
            }

        }

    }

}
void wdtpci_release(  ) {
    {
        if( expect_close != 42 ){
        }
        else {
            {
                {
                    {
                        int l = wdtpci_lock ; 
                        {
                            __VERIFIER_assume ( ! l ); 
                        }

                    }

                    ( char ) wdt_dc_port; 
                    {
                    }

                    {
                        int l = wdtpci_lock ; 
                        {
                            l = 0; 
                        }

                    }

                }

            }

        }

        expect_close = 0; 
        {
            int a = open_sem ; 
            {
                a += 1; 
            }

        }

    }

}
void * closer2_isr( void * arg ) {
    if(cond){writer2_isr();}
    if(cond){goto label_1;}
    if(cond){goto label_3;}
    if(cond){closer3_isr();}
    if(cond){goto label_2;}

    wdtpci_write_buf = 'V'; 
    expect_close = 42; 
    count = 1; 
    label_1:
    if( count ){
        if( ! nowayout ){
            label_2:
            if( wdtpci_write_buf != 'V' ){
                expect_close = 0; 
            }
            
        }
        
    }
    
    label_3:
    if( expect_close != 42 ){
    }
    else {
    }

    expect_close = 0; 
    cnt2 ++; 
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
    pthread_t t5 ; 
    pthread_t t6 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , closer1_isr , 0 ); 
    pthread_create ( & t2 , 0 , closer2_isr , 0 ); 
    pthread_create ( & t3 , 0 , closer3_isr , 0 ); 
    pthread_create ( & t4 , 0 , writer1_isr , 0 ); 
    pthread_create ( & t5 , 0 , writer2_isr , 0 ); 
    pthread_create ( & t6 , 0 , writer3_isr , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
void wdtpci_write( int count ) {
    {
        if( count ){
            if( ! nowayout ){
                expect_close = 0; 
                if( wdtpci_write_buf == 'V' ){
                    expect_close = 42; 
                }
                
            }
            
        }
        
    }

}
void udelay( int t ) {
    {
        ; 
    }

}
void * closer3_isr( void * arg ) {
    if(cond){writer2_isr();}
    if(cond){goto label_1;}
    if(cond){goto label_3;}
    if(cond){closer2_isr();}
    if(cond){goto label_2;}

    wdtpci_write_buf = 'V'; 
    expect_close = 42; 
    count = 1; 
    label_1:
    if( count ){
        if( ! nowayout ){
            label_2:
            if( wdtpci_write_buf != 'V' ){
                expect_close = 0; 
            }
            
        }
        
    }
    
    label_3:
    if( expect_close != 42 ){
    }
    else {
    }

    expect_close = 0; 
    cnt5 ++; 
    test_global_array [ 9000 ] = 999; 
    __exit_closer3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer1_isr( void * arg ) {
    if(cond){writer2_isr();}
    if(cond){goto label_1;}
    if(cond){closer2_isr();}
    if(cond){goto label_2;}
    if(cond){writer1_isr();}
    if(cond){goto label_3;}

    wdtpci_write_buf = 'V'; 
    expect_close = 42; 
    count = 1; 
    label_1:
    if( count ){
        if( ! nowayout ){
            label_2:
            if( wdtpci_write_buf != 'V' ){
                expect_close = 0; 
            }
            
        }
        
        {
            int reader1 ; 
            int reader2 ; 
            int reader3 ; 
            int reader4 ; 
            if( test_global_condition1 == 1 ){
                label_3:
                reader1 = test_global_var1; 
            }
            
            if( test_global_condition2 == 1 ){
                reader2 = test_global_var1; 
            }
            
            reader3 = test_global_var2; 
            reader4 = test_global_var2; 
        }

    }
    
    if( expect_close != 42 ){
    }
    else {
    }

    expect_close = 0; 
    cnt1 ++; 
    __exit_closer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer1_isr( void * arg ) {
    if(cond){writer2_isr();}
    if(cond){goto label_1;}
    if(cond){closer2_isr();}
    if(cond){goto label_2;}

    count = 0; 
    expect_close = 0; 
    label_1:
    if( count ){
        if( ! nowayout ){
            label_2:
            if( wdtpci_write_buf != 'V' ){
                expect_close = 0; 
            }
            
        }
        
    }
    
    cnt3 ++; 
    if( test_global_condition3 == 1 ){
        test_global_var1 = 0x99; 
    }
    
    if( test_global_condition4 == 0 ){
        test_global_var2 = 0x99; 
    }
    
    __exit_writer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void clear_bit( int unused , int v ) {
    {
        v = 0; 
    }

}
void * writer3_isr( void * arg ) {
    if(cond){writer2_isr();}
    if(cond){goto label_1;}
    if(cond){closer2_isr();}
    if(cond){goto label_2;}
    if(cond){closer3_isr();}
    if(cond){goto label_3;}

    count = 0; 
    expect_close = 0; 
    label_1:
    if( count ){
        if( ! nowayout ){
            label_2:
            if( wdtpci_write_buf != 'V' ){
                expect_close = 0; 
            }
            
        }
        
    }
    
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
 
    label_3:
    mininum = test_global_array [ 9000 ] - 10; 
    maxnum = test_global_array [ 0 ] + 10; 
    cnt6 ++; 
    __exit_writer3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
