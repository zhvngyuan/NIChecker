void * main_task( void * arg ) {
    {
        enable_isr ( - 1 ); 
    }

    {
        int i ; 
        for ( i = 0 ; i < 10000 ; i ++ ) {
            {
                int j ; 
                for ( j = 0 ; j < 10000 ; j ++ ) {
                    if( ( i == 9999 ) && ( j == 1000 ) ){
                        svp_simple_005_001_global_var = 0x01; 
                    }
                    
                }
 
            }

        }
 
    }

    if( svp_simple_005_001_global_condition == 1 ){
        svp_simple_005_001_global_var = 0x09; 
    }
    
    svp_simple_005_001_global_var = 0x05; 
    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_005_001_isr_1( void * arg ) {
    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    int reader ; 
    reader = svp_simple_005_001_global_var; 
    __exit_svp_simple_005_001_isr_1 : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_005_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
