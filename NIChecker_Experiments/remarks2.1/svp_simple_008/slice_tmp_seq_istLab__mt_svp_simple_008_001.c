void * main_task( void * arg ) {
    {
        enable_isr ( - 1 ); 
    }

    int p = 1 ; 
    int q = 2 ; 
    svp_simple_008_001_global_array [ p + q ] = 0x09; 
    svp_simple_008_001_global_array [ 40 ] = 0x01; 
    {
        int reader1 ; 
        int reader2 ; 
        int i = 1 ; 
        int j = 2 ; 
        int p = 1 ; 
        int q = 3 ; 
        reader1 = svp_simple_008_001_global_array [ ( i * 20 ) + ( j * 10 ) ]; 
        reader2 = svp_simple_008_001_global_array [ p + q ]; 
    }

    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_008_001_isr_1( void * arg ) {
    {
        int k ; 
        for ( k = 0 ; k < 100 ; k ++ ) {
            svp_simple_008_001_global_array [ k ] = 0x05; 
        }
 
    }

    __exit_svp_simple_008_001_isr_1 : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_008_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
