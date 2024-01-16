void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_016_001_isr_1();}
    if(cond){goto label_1;}

    {
        enable_isr ( - 1 ); 
    }

    int reader1 ; 
    svp_simple_016_001_global_var1 = 0x01; 
    label_1:
    reader1 = ( svp_simple_016_001_global_var1 + svp_simple_016_001_global_var1 ) + svp_simple_016_001_global_var1; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
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
    pthread_create ( & t1 , 0 , svp_simple_016_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_016_001_isr_1( void * arg ) {

    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    svp_simple_016_001_global_var1 = 0x09; 
    __exit_svp_simple_016_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
