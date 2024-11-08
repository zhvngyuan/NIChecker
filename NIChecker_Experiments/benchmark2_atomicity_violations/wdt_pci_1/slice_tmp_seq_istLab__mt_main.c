void * writer2_isr( void * arg ) {
    count = 0; 
    if( count ){
        if( ! nowayout ){
            if( wdtpci_write_buf != 'V' ){
            }
            
        }
        
    }
    
    if( test_global_condition3 == 0 ){
    }
    
    test_global_var3 = 0x55; 
    __exit_writer2_isr : 
    ;
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    disable_isr ( - 1 ); 
    count = 0; 
    test_global_condition3 = 1; 
    test_global_condition4 = 1; 
    enable_isr ( - 1 ); 
    goto __exit_main_task ; 
    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * closer2_isr( void * arg ) {
    int reader5 ; 
    int reader6 ; 
    count = 1; 
    if( count ){
        if( ! nowayout ){
            if( wdtpci_write_buf != 'V' ){
            }
            
        }
        
        if( test_global_condition3 == 1 ){
            reader5 = test_global_var3; 
        }
        
        if( test_global_condition4 == 1 ){
            reader6 = test_global_var3; 
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
void * closer1_isr( void * arg ) {
    count = 1; 
    if( count ){
        if( ! nowayout ){
            if( wdtpci_write_buf != 'V' ){
            }
            
        }
        
    }
    
    if( expect_close != 42 ){
    }
    else {
    }

    {
        int reader1 ; 
        int reader2 ; 
        int reader3 ; 
        int reader4 ; 
        if( test_global_condition1 == 1 ){
        }
        
        if( test_global_condition2 == 1 ){
        }
        
    }

    __exit_closer1_isr : 
    ;
    pthread_exit ( 0 ); 
}
void * writer1_isr( void * arg ) {
    count = 0; 
    if( count ){
        if( ! nowayout ){
            if( wdtpci_write_buf != 'V' ){
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
