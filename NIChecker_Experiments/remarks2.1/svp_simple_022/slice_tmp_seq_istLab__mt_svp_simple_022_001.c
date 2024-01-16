void * main_task( void * arg ) {
    {
        svp_simple_022_001_global_var1 = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
        }

    }

    svp_simple_022_001_global_var1 = 0; 
    {
        {
            if( svp_simple_022_001_global_var1 >= 12 ){
                svp_simple_022_001_global_var1 = 12; 
            }
            else {
                svp_simple_022_001_global_var1 = 0; 
            }

        }

    }

    int i ; 
    for ( i = 0 ; i < 256 ; i ++ ) {
    }
 
    {
        {
            svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
        }

    }

    svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * svp_simple_022_001_isr_1( void * arg ) {
    svp_simple_022_001_global_var1 = nondet_rand ( ); 
    __exit_svp_simple_022_001_isr_1 : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_022_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
