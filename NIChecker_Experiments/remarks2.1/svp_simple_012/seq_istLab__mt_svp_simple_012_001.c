void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {

    {
        enable_isr ( - 1 ); 
    }

    int * p = & svp_simple_012_001_global_var ; 
    svp_simple_012_001_global_var = 0x01; 
    * p = 0x02; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){svp_simple_012_001_isr_1();}
}
void idlerun(  ) {
    int i = 0 ; 
    for ( i = 0 ; i <= 100 ; i ++ ) {
    }
 
}
void * svp_simple_012_001_isr_1( void * arg ) {

    int reader1 ; 
    reader1 = svp_simple_012_001_global_var; 
    __exit_svp_simple_012_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {

    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_012_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
