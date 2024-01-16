void * writer2_isr( void * arg ) {
    if(cond){closer4_isr();}
    if(cond){goto label_1;}
    if(cond){writer4_isr();}
    if(cond){goto label_2;}

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
    
    label_2:
    test_global_var3 ++; 
    cnt4 ++; 
    goto __exit_writer2_isr ;; 
    __exit_writer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer20( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
                    }
                    
                }
                
            }
            
        }

    }

    return ( NULL ) ; 
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
    if(cond){closer4_isr();}
    if(cond){closer2_isr();}
    if(cond){closer3_isr();}
    if(cond){closer1_isr();}
    if(cond){writer1_isr();}
    if(cond){writer4_isr();}
    if(cond){writer3_isr();}
}
void * writer21( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
                    }
                    
                }
                
            }
            
        }

    }

    return ( NULL ) ; 
}
void * closer2_isr( void * arg ) {
    if(cond){writer2_isr();}
    if(cond){goto label_1;}
    if(cond){goto label_3;}
    if(cond){closer4_isr();}
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
    int reader ; 
    if( test_global_condition1 == 1 ){
        reader = test_global_var2; 
    }
    
    goto __exit_closer2_isr ;; 
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
    pthread_t t7 ; 
    pthread_t t8 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , closer1_isr , 0 ); 
    pthread_create ( & t2 , 0 , closer2_isr , 0 ); 
    pthread_create ( & t3 , 0 , closer3_isr , 0 ); 
    pthread_create ( & t4 , 0 , closer4_isr , 0 ); 
    pthread_create ( & t5 , 0 , writer1_isr , 0 ); 
    pthread_create ( & t6 , 0 , writer2_isr , 0 ); 
    pthread_create ( & t7 , 0 , writer3_isr , 0 ); 
    pthread_create ( & t8 , 0 , writer4_isr , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer29( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
                    }
                    
                }
                
            }
            
        }

    }

    return ( NULL ) ; 
}
void * closer3_isr( void * arg ) {
    if(cond){writer2_isr();}
    if(cond){goto label_1;}
    if(cond){goto label_3;}
    if(cond){closer4_isr();}
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
    goto __exit_closer3_isr ;; 
    __exit_closer3_isr : 
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
    if(cond){closer4_isr();}
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
    
    cnt6 ++; 
    goto __exit_writer3_isr ;; 
    __exit_writer3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer11( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
                    }
                    
                }
                
            }
            
        }

    }

    return ( NULL ) ; 
}
void * closer4_isr( void * arg ) {
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

    if( test_global_condition3 == 1 ){
        test_global_var2 = 1; 
    }
    
    if( test_global_condition4 == 1 ){
        test_global_var2 = 1; 
    }
    
    expect_close = 0; 
    cnt8 ++; 
    goto __exit_closer4_isr ;; 
    __exit_closer4_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer13( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
                    }
                    
                }
                
            }
            
        }

    }

    return ( NULL ) ; 
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
void * writer6( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
                    }
                    
                }
                
            }
            
        }

    }

    return ( NULL ) ; 
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
void * writer19( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
                    }
                    
                }
                
            }
            
        }

    }

    return ( NULL ) ; 
}
void * writer9( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
                    }
                    
                }
                
            }
            
        }

    }

    return ( NULL ) ; 
}
void * writer4_isr( void * arg ) {
    if(cond){writer2_isr();}
    if(cond){goto label_1;}
    if(cond){closer4_isr();}
    if(cond){goto label_2;}

    test_global_var3 = 10; 
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
    
    cnt7 ++; 
    goto __exit_writer4_isr ;; 
    __exit_writer4_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer8( void * unused ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
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
                    expect_close = 0; 
                    if( wdtpci_write_buf == 'V' ){
                        expect_close = 42; 
                    }
                    
                }
                
            }
            
        }

    }

    return ( NULL ) ; 
}
void udelay( int t ) {
    {
        ; 
    }

}
void * closer1_isr( void * arg ) {
    if(cond){writer2_isr();}
    if(cond){goto label_1;}
    if(cond){goto label_3;}
    if(cond){closer4_isr();}
    if(cond){goto label_2;}

    test_global_var1 = 1; 
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
    cnt1 ++; 
    goto __exit_closer1_isr ;; 
    __exit_closer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer1_isr( void * arg ) {
    if(cond){writer2_isr();}
    if(cond){goto label_1;}
    if(cond){closer4_isr();}
    if(cond){goto label_2;}
    if(cond){closer1_isr();}
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
    
    cnt3 ++; 
    int reader1 ; 
    int reader2 ; 
    test_global_var1 = 0; 
    label_3:
    reader1 = test_global_var1; 
    reader2 = test_global_var1; 
    goto __exit_writer1_isr ;; 
    __exit_writer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
