void * svp_simple_011_001_isr_1( void * arg ) {
    int reader1 ; 
    int reader2 ; 
    int * m = & svp_simple_011_001_global_var1 ; 
    __exit_svp_simple_011_001_isr_1 : 
    ;
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    {
        enable_isr ( - 1 ); 
    }

    int * p = & svp_simple_011_001_global_var1 ; 
    int * q = & svp_simple_011_001_global_var1 ; 
    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_011_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
