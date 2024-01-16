void * main_task( void * arg ) {
    struct bytetoword svp_simple_024_001_local_a ; 
    struct bytetoword svp_simple_024_001_local_b ; 
    {
        {
            enable_isr ( - 1 ); 
        }

    }

    unsigned int __cs_retval__svp_simple_024_001_RTData_0 ; 
    {
        struct bytetoword svp_simple_024_001_local_r ; 
        svp_simple_024_001_local_r . bytedata [ 0 ] = svp_simple_024_001_global_array [ 0 + 1 ]; 
        svp_simple_024_001_local_r . bytedata [ 1 ] = svp_simple_024_001_global_array [ 0 ]; 
    }

    unsigned int __cs_retval__svp_simple_024_001_RTData_1 ; 
    {
        struct bytetoword svp_simple_024_001_local_r ; 
        svp_simple_024_001_local_r . bytedata [ 0 ] = svp_simple_024_001_global_array [ 1 + 1 ]; 
        svp_simple_024_001_local_r . bytedata [ 1 ] = svp_simple_024_001_global_array [ 1 ]; 
    }

    int svp_simple_024_001_local_casereg = svp_simple_024_001_local_a . worddata | ( svp_simple_024_001_local_b . worddata & 0x02f0 ) ; 
    switch ( svp_simple_024_001_local_casereg ) {
        case 0x02f0 : 
        ;
        break ; 
        case 0x0390 : 
        ;
        break ; 
        default : 
        ;
        break ; 
    }
 
    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_024_001_isr_1( void * arg ) {
    {
        int i ; 
        for ( i = 0 ; i < 100 ; i ++ ) {
            svp_simple_024_001_global_array [ i ] = 10; 
        }
 
    }

    __exit_svp_simple_024_001_isr_1 : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_024_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
