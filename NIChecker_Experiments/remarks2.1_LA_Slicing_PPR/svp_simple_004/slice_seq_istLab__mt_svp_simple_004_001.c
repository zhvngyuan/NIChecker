void * main_task( void * arg ) {
    {
        enable_isr ( - 1 ); 
    }

    int reader1 ; 
    int reader2 ; 
    int reader3 ; 
    int reader4 ; 
    int reader5 ; 
    int reader6 ; 
    disable_isr ( 2 ); 
    if( svp_simple_004_001_condition1 == 1 ){
        reader5 = svp_simple_004_001_global_var3; 
    }
    
    if( svp_simple_004_001_condition2 == 1 ){
        reader6 = svp_simple_004_001_global_var3; 
    }
    
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_004_001_isr_1( void * arg ) {
    if( svp_simple_004_001_condition3 == 1 ){
    }
    else {
        svp_simple_004_001_global_var3 = 0xcc; 
    }

    enable_isr ( 2 ); 
    __exit_svp_simple_004_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_004_001_isr_2( void * arg ) {
    __exit_svp_simple_004_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_004_001_isr_1 , 0 ); 
    pthread_create ( & t2 , 0 , svp_simple_004_001_isr_2 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
