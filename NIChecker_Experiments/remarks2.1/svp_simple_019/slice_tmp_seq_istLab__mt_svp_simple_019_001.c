void * main_task( void * arg ) {
    int reader1 ; 
    int reader2 ; 
    int reader3 ; 
    int reader4 ; 
    int reader5 ; 
    {
        enable_isr ( - 1 ); 
    }

    if( ( svp_simple_019_001_global_para1 + svp_simple_019_001_global_para3 ) > svp_simple_019_001_global_para2 ){
    }
    
    if( ( svp_simple_019_001_global_condition1 == 1 ) && ( svp_simple_019_001_global_condiiton2 == 1 ) ){
    }
    
    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    disable_isr ( 1 ); 
    if( ( svp_simple_019_001_global_condition1 == 1 ) && ( svp_simple_019_001_global_condition3 == 1 ) ){
        enable_isr ( 1 ); 
    }
    
    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    disable_isr ( 1 ); 
    if( ( svp_simple_019_001_global_condiiton2 == 1 ) && ( svp_simple_019_001_global_condition3 == 0 ) ){
    }
    
    enable_isr ( 1 ); 
    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_019_001_isr_1( void * arg ) {
    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    if( ( svp_simple_019_001_global_para1 + svp_simple_019_001_global_para3 ) < svp_simple_019_001_global_para2 ){
    }
    
    svp_simple_019_001_global_condition3 = 1; 
    __exit_svp_simple_019_001_isr_1 : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_019_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
