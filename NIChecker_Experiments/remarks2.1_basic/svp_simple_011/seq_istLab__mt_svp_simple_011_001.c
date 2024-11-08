void * svp_simple_011_001_isr_1( void * arg ) {

    int reader1 ; 
    int reader2 ; 
    int * m = & svp_simple_011_001_global_var1 ; 
    reader1 = * m; 
    reader2 = * svp_simple_011_001_u; 
    __exit_svp_simple_011_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {

    {
        enable_isr ( - 1 ); 
    }

    int * p = & svp_simple_011_001_global_var1 ; 
    int * q = & svp_simple_011_001_global_var1 ; 
    * p = 0x01; 
    * q = 0x02; 
    svp_simple_011_001_u = & svp_simple_011_001_global_var2; 
    * svp_simple_011_001_u = 0x01; 
    svp_simple_011_001_u = & svp_simple_011_001_global_var3; 
    * svp_simple_011_001_u = 0x02; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){svp_simple_011_001_isr_1();}
}
void idlerun(  ) {
    int i = 0 ; 
    for ( i = 0 ; i <= 100 ; i ++ ) {
    }
 
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
