void * svp_simple_006_001_isr_1( void * arg ) {
    int reader2 ; 
    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    reader2 = svp_simple_006_001_global_var2; 
    __exit_svp_simple_006_001_isr_1 : 
    ;
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    int reader1 ; 
    int reader2 ; 
    int reader3 ; 
    {
        int i ; 
        for ( i = 0 ; i < 5 ; i ++ ) {
            {
                int j ; 
                for ( j = 0 ; j < 5 ; j ++ ) {
                    if( i == j ){
                        if( i == 0 ){
                        }
                        else {
                            if( i == 4 ){
                            }
                            else {
                                if( i == 6 ){
                                }
                                
                            }

                        }

                    }
                    
                }
 
            }

        }
 
    }

    {
        int i ; 
        for ( i = 0 ; i < 5 ; i ++ ) {
            {
                int j ; 
                for ( j = 0 ; j < 5 ; j ++ ) {
                    if( ( ( i + j ) == 6 ) && ( i < j ) ){
                        svp_simple_006_001_global_var2 = 0x02; 
                    }
                    
                }
 
            }

        }
 
    }

    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_006_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}