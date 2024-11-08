void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_023_001_isr_1();}
    if(cond){goto label_1;}

    {
        svp_simple_023_001_global_var = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
        }

    }

    {
        int var = svp_simple_023_001_global_var ; 
        if( ( var > 0 ) && ( var < 12 ) ){
            label_1:
            svp_simple_023_001_global_var = svp_simple_023_001_global_var + 1; 
        }
        
    }

    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void idlerun(  ) {
    int i = 0 ; 
    for ( i = 0 ; i <= 100 ; i ++ ) {
    }
 
}
void svp_simple_023_001_func_1( int var ) {
    if( ( var > 0 ) && ( var < 12 ) ){
        svp_simple_023_001_global_var = svp_simple_023_001_global_var + 1; 
    }
    
}
int main(  ) {

    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_023_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_023_001_isr_1( void * arg ) {

    svp_simple_023_001_global_var = nondet_rand ( ); 
    __exit_svp_simple_023_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void svp_simple_023_001_init(  ) {
    svp_simple_023_001_global_var = nondet_rand ( ); 
    {
        enable_isr ( - 1 ); 
    }

}
