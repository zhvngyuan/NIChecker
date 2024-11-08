void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_009_001_isr_1();}
    if(cond){goto label_1;}

    {
        enable_isr ( - 1 ); 
    }

    int svp_simple_009_001_local_var1 = 0x01 ; 
    int svp_simple_009_001_local_var2 = 0x09 ; 
    svp_simple_009_001_p = & svp_simple_009_001_local_var1; 
    svp_simple_009_001_q = & svp_simple_009_001_local_var1; 
    * svp_simple_009_001_p = 0x02; 
    * svp_simple_009_001_q = 0x03; 
    svp_simple_009_001_m = & svp_simple_009_001_local_var2; 
    label_1:
    * svp_simple_009_001_m = 0x06; 
    * svp_simple_009_001_m = 0x06; 
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
    pthread_create ( & t1 , 0 , svp_simple_009_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_009_001_isr_1( void * arg ) {

    int reader1 ; 
    int reader2 ; 
    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    reader1 = * svp_simple_009_001_p; 
    int svp_simple_009_001_local_var3 = 0x08 ; 
    svp_simple_009_001_m = & svp_simple_009_001_local_var3; 
    reader2 = * svp_simple_009_001_m; 
    __exit_svp_simple_009_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
