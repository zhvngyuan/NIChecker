void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_020_001_isr_2();}
    if(cond){goto label_1;}

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
    label_1:
    if( ( svp_simple_020_001_local_var1 + svp_simple_020_001_local_var2 ) > svp_simple_020_001_global_para ){
        reader1 = svp_simple_020_001_global_var; 
    }
    
    if( ( svp_simple_020_001_local_var1 + svp_simple_020_001_local_var2 ) < svp_simple_020_001_global_para ){
        reader2 = svp_simple_020_001_global_var; 
    }
    
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){svp_simple_020_001_isr_1();}
}
void idlerun(  ) {
    int i = 0 ; 
    for ( i = 0 ; i <= 100 ; i ++ ) {
    }
 
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
void * svp_simple_020_001_isr_2( void * arg ) {
    if(cond){svp_simple_020_001_isr_1();}
    if(cond){goto label_1;}

    label_1:
    if( svp_simple_020_001_global_flag == 1 ){
        svp_simple_020_001_global_para = 11; 
        svp_simple_020_001_global_var = 0x05; 
    }
    
    __exit_svp_simple_020_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_020_001_isr_1( void * arg ) {

    svp_simple_020_001_global_var = 0x01; 
    svp_simple_020_001_global_flag = 1; 
    enable_isr ( 2 ); 
    __exit_svp_simple_020_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
