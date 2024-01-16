void * main_task( void * arg ) {
    int reader1 ; 
    int reader2 ; 
    int reader3 ; 
    int reader4 ; 
    {
        int i = 0 ; 
    }

    disable_isr ( 1 ); 
    disable_isr ( 2 ); 
    {
        int i ; 
        for ( i = 0 ; i < 10000 ; i ++ ) {
            if( i == 9999 ){
                reader3 = svp_simple_003_001_global_var2; 
            }
            
        }
 
    }

    {
        int j ; 
        for ( j = 10000 ; j > 0 ; j -- ) {
            if( j == 9999 ){
                reader4 = svp_simple_003_001_global_var2; 
            }
            
        }
 
    }

    enable_isr ( 1 ); 
    {
        int i ; 
        for ( i = 0 ; i < 10000 ; i ++ ) {
        }
 
    }

    {
        int j ; 
        for ( j = 10000 ; j > 0 ; j -- ) {
        }
 
    }

    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_003_001_isr_2( void * arg ) {
    {
        int i = 0 ; 
    }

    __exit_svp_simple_003_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_003_001_isr_1( void * arg ) {
    enable_isr ( 2 ); 
    svp_simple_003_001_global_var2 = 999; 
    if( svp_simple_003_001_global_flag == 1 ){
    }
    else {
    }

    __exit_svp_simple_003_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_003_001_isr_1 , 0 ); 
    pthread_create ( & t2 , 0 , svp_simple_003_001_isr_2 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
