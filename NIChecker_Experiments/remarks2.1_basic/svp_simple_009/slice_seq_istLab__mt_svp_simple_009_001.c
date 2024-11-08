void * main_task( void * arg ) {
    {
        enable_isr ( - 1 ); 
    }

    int svp_simple_009_001_local_var1 = 0x01 ; 
    int svp_simple_009_001_local_var2 = 0x09 ; 
    svp_simple_009_001_q = & svp_simple_009_001_local_var1; 
    * svp_simple_009_001_q = 0x03; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_009_001_isr_1( void * arg ) {
    int reader1 ; 
    int reader2 ; 
    {
        int i = 0 ; 
    }

    int svp_simple_009_001_local_var3 = 0x08 ; 
    __exit_svp_simple_009_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
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
