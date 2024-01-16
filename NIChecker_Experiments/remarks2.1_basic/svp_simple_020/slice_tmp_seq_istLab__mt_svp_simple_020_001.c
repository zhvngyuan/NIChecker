void * main_task( void * arg ) {
    {
        enable_isr ( - 1 ); 
    }

    disable_isr ( 2 ); 
    int reader1 ; 
    int reader2 ; 
    int svp_simple_020_001_local_var1 ; 
    int svp_simple_020_001_local_var2 ; 
    svp_simple_020_001_local_var1 = nondet_rand ( ); 
    svp_simple_020_001_local_var2 = nondet_rand ( ); 
    if( ( svp_simple_020_001_local_var1 + svp_simple_020_001_local_var2 ) > svp_simple_020_001_global_para ){
    }
    
    if( ( svp_simple_020_001_local_var1 + svp_simple_020_001_local_var2 ) < svp_simple_020_001_global_para ){
    }
    
    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_020_001_isr_2( void * arg ) {
    if( svp_simple_020_001_global_flag == 1 ){
        svp_simple_020_001_global_para = 11; 
    }
    
    __exit_svp_simple_020_001_isr_2 : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_020_001_isr_1( void * arg ) {
    svp_simple_020_001_global_flag = 1; 
    enable_isr ( 2 ); 
    __exit_svp_simple_020_001_isr_1 : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_020_001_isr_1 , 0 ); 
    pthread_create ( & t2 , 0 , svp_simple_020_001_isr_2 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
