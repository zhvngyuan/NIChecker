void * main_task( void * arg ) {
    disable_isr ( - 1 ); 
    {
        svp_simple_028_001_gloable_var = nondet_rand ( ); 
        svp_simple_028_001_isr_1_flag = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
        }

    }

    disable_isr ( - 1 ); 
    enable_isr ( 1 ); 
    if( svp_simple_028_001_gloable_var > 12 ){
        svp_simple_028_001_gloable_var = 0; 
    }
    
    goto __exit_main_task ; 
    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_028_001_isr_1( void * arg ) {
    svp_simple_028_001_gloable_var ++; 
    svp_simple_028_001_isr_1_flag = 0; 
    enable_isr ( 2 ); 
    __exit_svp_simple_028_001_isr_1 : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_028_001_isr_2( void * arg ) {
    if( svp_simple_028_001_isr_1_flag ){
        svp_simple_028_001_gloable_var ++; 
    }
    
    __exit_svp_simple_028_001_isr_2 : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_028_001_isr_3( void * arg ) {
    svp_simple_028_001_gloable_var ++; 
    __exit_svp_simple_028_001_isr_3 : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_t t3 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_028_001_isr_1 , 0 ); 
    pthread_create ( & t2 , 0 , svp_simple_028_001_isr_2 , 0 ); 
    pthread_create ( & t3 , 0 , svp_simple_028_001_isr_3 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}