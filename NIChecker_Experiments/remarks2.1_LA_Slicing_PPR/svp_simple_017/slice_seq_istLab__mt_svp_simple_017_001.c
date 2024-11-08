void * main_task( void * arg ) {
    {
        enable_isr ( - 1 ); 
    }

    int i = 0 ; 
    for ( svp_simple_017_001_global_var = 0 ; svp_simple_017_001_global_var < 100 ; svp_simple_017_001_global_var ++ ) {
        svp_simple_017_001_local_array [ svp_simple_017_001_global_var ] = i ++; 
    }
 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_017_001_isr_1( void * arg ) {
    {
        int i = 0 ; 
    }

    svp_simple_017_001_global_var = 50; 
    svp_simple_017_001_local_array [ 50 ] = 0; 
    __exit_svp_simple_017_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_017_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
