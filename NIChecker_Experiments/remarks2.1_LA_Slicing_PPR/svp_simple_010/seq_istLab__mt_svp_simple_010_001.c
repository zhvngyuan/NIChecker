void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {

    {
        enable_isr ( - 1 ); 
    }

    int svp_simple_010_001_local_var1 = 0x01 ; 
    int svp_simple_010_001_local_var2 = 0x02 ; 
    int svp_simple_010_001_local_var3 = 0x03 ; 
    int svp_simple_010_001_local_var4 = 0x04 ; 
    svp_simple_010_001_global_union . header = svp_simple_010_001_local_var1; 
    svp_simple_010_001_global_union . data = svp_simple_010_001_local_var2; 
    svp_simple_010_001_global_struct . header = svp_simple_010_001_local_var3; 
    svp_simple_010_001_global_struct . data = svp_simple_010_001_local_var4; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){svp_simple_010_001_isr_1();}
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
    pthread_create ( & t1 , 0 , svp_simple_010_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_010_001_isr_1( void * arg ) {

    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    int reader1 ; 
    int reader2 ; 
    reader1 = svp_simple_010_001_global_union . header; 
    reader2 = svp_simple_010_001_global_struct . header; 
    __exit_svp_simple_010_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
