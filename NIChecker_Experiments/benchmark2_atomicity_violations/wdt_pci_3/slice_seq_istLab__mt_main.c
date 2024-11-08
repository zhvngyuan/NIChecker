void * writer2_isr( void * arg ) {
    if( count ){
        if( ! nowayout ){
        }
        
    }
    
    test_global_var3 ++; 
    goto __exit_writer2_isr ;; 
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
void * closer4_isr( void * arg ) {
    if( count ){
        if( ! nowayout ){
        }
        
    }
    
    if( expect_close != 42 ){
    }
    else {
    }

    goto __exit_closer4_isr ;; 
    __exit_closer4_isr : 
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

    int reader ; 
    goto __exit_closer2_isr ;; 
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

    goto __exit_closer3_isr ;; 
    __exit_closer3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer1_isr( void * arg ) {
    if( count ){
        if( ! nowayout ){
        }
        
    }
    
    if( expect_close != 42 ){
    }
    else {
    }

    goto __exit_closer1_isr ;; 
    __exit_closer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer1_isr( void * arg ) {
    if( count ){
        if( ! nowayout ){
        }
        
    }
    
    int reader1 ; 
    int reader2 ; 
    goto __exit_writer1_isr ;; 
    __exit_writer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer4_isr( void * arg ) {
    test_global_var3 = 10; 
    if( count ){
        if( ! nowayout ){
        }
        
    }
    
    goto __exit_writer4_isr ;; 
    __exit_writer4_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer3_isr( void * arg ) {
    if( count ){
        if( ! nowayout ){
        }
        
    }
    
    goto __exit_writer3_isr ;; 
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
