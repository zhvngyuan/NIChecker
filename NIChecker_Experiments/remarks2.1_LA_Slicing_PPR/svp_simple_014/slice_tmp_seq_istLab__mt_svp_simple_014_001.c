void * main_task( void * arg ) {
    {
        enable_isr ( - 1 ); 
    }

    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_014_001_isr_1( void * arg ) {
    disable_isr ( 3 ); 
    int reader1 ; 
    int reader2 ; 
    int reader3 ; 
    int reader4 ; 
    {
        int i ; 
        for ( i = 0 ; i < 100 ; i ++ ) {
            if( i == 99 ){
            }
            
        }
 
    }

    reader3 = svp_simple_014_001_global_var2; 
    reader4 = svp_simple_014_001_global_var2; 
    __exit_svp_simple_014_001_isr_1 : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_014_001_isr_2( void * arg ) {
    svp_simple_014_001_global_flag2 = 0; 
    enable_isr ( 3 ); 
    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    __exit_svp_simple_014_001_isr_2 : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_014_001_isr_3( void * arg ) {
    if( svp_simple_014_001_global_flag1 == 1 ){
    }
    
    if( svp_simple_014_001_global_flag2 == 1 ){
        svp_simple_014_001_global_var2 = 0x09; 
    }
    
    __exit_svp_simple_014_001_isr_3 : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_t t3 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_014_001_isr_1 , 0 ); 
    pthread_create ( & t2 , 0 , svp_simple_014_001_isr_2 , 0 ); 
    pthread_create ( & t3 , 0 , svp_simple_014_001_isr_3 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
