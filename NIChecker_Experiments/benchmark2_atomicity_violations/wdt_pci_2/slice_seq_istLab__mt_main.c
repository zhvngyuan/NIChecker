void * writer2_isr( void * arg ) {
    if( count ){
        if( ! nowayout ){
        }
        
    }
    
    __exit_writer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    disable_isr ( - 1 ); 
    enable_isr ( - 1 ); 
    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer2_isr( void * arg ) {
    if( count ){
        if( ! nowayout ){
        }
        
    }
    
    if( expect_close != 42 ){
    }
    else {
    }

    __exit_closer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer3_isr( void * arg ) {
    if( count ){
        if( ! nowayout ){
        }
        
    }
    
    if( expect_close != 42 ){
    }
    else {
    }

    test_global_array [ 9000 ] = 999; 
    __exit_closer3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer1_isr( void * arg ) {
    if( count ){
        if( ! nowayout ){
        }
        
        {
            int reader1 ; 
            int reader2 ; 
            int reader3 ; 
            int reader4 ; 
        }

    }
    
    if( expect_close != 42 ){
    }
    else {
    }

    __exit_closer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer1_isr( void * arg ) {
    if( count ){
        if( ! nowayout ){
        }
        
    }
    
    __exit_writer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer3_isr( void * arg ) {
    if( count ){
        if( ! nowayout ){
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
 
    mininum = test_global_array [ 9000 ] - 10; 
    maxnum = test_global_array [ 0 ] + 10; 
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
