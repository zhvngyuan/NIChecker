void * main_task( void * arg ) {
    disable_isr ( 2 ); 
    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    {
        int i ; 
        for ( i = 0 ; i < 10000 ; i ++ ) {
        }
 
    }

    {
        int i ; 
        for ( i = 0 ; i < 10000 ; i ++ ) {
            if( i == 9999 ){
            }
            
        }
 
    }

    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_001_001_isr_1( void * arg ) {
    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    svp_simple_001_001_global_var = 0; 
    svp_simple_001_001_global_var = 1; 
    enable_isr ( 2 ); 
    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    __exit_svp_simple_001_001_isr_1 : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_001_001_isr_2( void * arg ) {
    int reader1 ; 
    int reader3 ; 
    if( svp_simple_001_001_global_flag == 1 ){
    }
    else {
    }

    int reader2 ; 
    reader2 = svp_simple_001_001_global_var; 
    __exit_svp_simple_001_001_isr_2 : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_001_001_isr_1 , 0 ); 
    pthread_create ( & t2 , 0 , svp_simple_001_001_isr_2 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
