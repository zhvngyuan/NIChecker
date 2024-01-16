void * svp_simple_006_001_isr_1( void * arg ) {

    int reader2 ; 
    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    svp_simple_006_001_global_var1 = 1; 
    reader2 = svp_simple_006_001_global_var2; 
    __exit_svp_simple_006_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_006_001_isr_1();}
    if(cond){goto label_1;}
    if(cond){goto label_2;}

    int reader1 ; 
    int reader2 ; 
    {
        int i ; 
        for ( i = 0 ; i < 5 ; i ++ ) {
            {
                int j ; 
                for ( j = 0 ; j < 5 ; j ++ ) {
                    label_1:
                    if( i == j ){
                        if( i == 0 ){
                            reader1 = svp_simple_006_001_global_var1; 
                        }
                        else {
                            if( i == 4 ){
                                reader2 = svp_simple_006_001_global_var1; 
                            }
                            else {
                                if( i == 6 ){
                                    reader2 = svp_simple_006_001_global_var1; 
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
                    label_2:
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
void idlerun(  ) {
    int i = 0 ; 
    for ( i = 0 ; i <= 100 ; i ++ ) {
    }
 
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
