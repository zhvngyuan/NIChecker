void * writer2_isr( void * arg ) {
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
                        }

                    }

                }

            }

        }

    }

    __exit_writer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    disable_isr ( - 1 ); 
    tco_expect_close = 0; 
    enable_isr ( - 1 ); 
    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer2_isr( void * arg ) {
    {
        {
            if( 1 ){
                if( ! nowayout ){
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

    tco_expect_close = 42; 
    if( tco_expect_close == 42 ){
        {
            int reader1 ; 
            int reader2 ; 
            int reader3 ; 
            int reader4 ; 
        }

    }
    
    __exit_closer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer3_isr( void * arg ) {
    {
        {
            if( 1 ){
                if( ! nowayout ){
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

    tco_expect_close = 42; 
    if( tco_expect_close == 42 ){
        test_global_var3 ++; 
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

            tco_expect_close = 0; 
        }

    }

    __exit_closer3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer1_isr( void * arg ) {
    {
        {
            if( 1 ){
                if( ! nowayout ){
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

    tco_expect_close = 42; 
    __exit_closer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer1_isr( void * arg ) {
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
void * writer3_isr( void * arg ) {
    {
        {
            if( 0 ){
                if( ! nowayout ){
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

    test_global_var3 = 0x33; 
    __exit_writer3_isr : 
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
