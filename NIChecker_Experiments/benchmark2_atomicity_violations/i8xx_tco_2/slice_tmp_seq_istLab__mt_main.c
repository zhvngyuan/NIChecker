void * writer2_isr( void * arg ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    if( tco_write_buf == 'V' ){
                    }
                    
                }
                
            }
            
            {
                {
                    {
                        int l = tco1_rld ; 
                        {
                        }

                    }

                }

            }

        }

    }

    if( test_global_condition3 == 0 ){
    }
    
    __exit_writer2_isr : 
    ;
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    disable_isr ( - 1 ); 
    test_global_condition1 = 1; 
    test_global_condition2 = 1; 
    enable_isr ( - 1 ); 
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
        
    }

    goto __exit_main_task ; 
    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * closer2_isr( void * arg ) {
    {
        {
            if( 1 ){
                if( ! nowayout ){
                    if( tco_write_buf == 'V' ){
                    }
                    
                }
                
            }
            
            {
                {
                    {
                        int l = tco1_rld ; 
                        {
                        }

                    }

                }

            }

        }

    }

    {
        {
            if( tco_expect_close != 42 ){
            }
            else {
            }

            {
                int v = timer_alive ; 
                {
                }

            }

        }

    }

    test_global_var1 = 0x11; 
    __exit_closer2_isr : 
    ;
    pthread_exit ( 0 ); 
}
void * closer1_isr( void * arg ) {
    {
        {
            if( 1 ){
                if( ! nowayout ){
                    if( tco_write_buf == 'V' ){
                    }
                    
                }
                
            }
            
            {
                {
                    {
                        int l = tco1_rld ; 
                        {
                        }

                    }

                }

            }

        }

    }

    if( tco_expect_close == 42 ){
    }
    
    __exit_closer1_isr : 
    ;
    pthread_exit ( 0 ); 
}
void * writer1_isr( void * arg ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
                    if( tco_write_buf == 'V' ){
                    }
                    
                }
                
            }
            
            {
                {
                    {
                        int l = tco1_rld ; 
                        {
                        }

                    }

                }

            }

        }

    }

    __exit_writer1_isr : 
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
