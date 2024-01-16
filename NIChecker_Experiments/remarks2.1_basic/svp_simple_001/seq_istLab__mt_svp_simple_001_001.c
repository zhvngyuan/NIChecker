void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_001_001_isr_1();}
    if(cond){goto label_1;}
    if(cond){goto label_2;}
    if(cond){goto label_3;}

    disable_isr ( 2 ); 
    {
        int i = 0 ; 
        label_1:
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    {
        int i ; 
        for ( i = 0 ; i < 10000 ; i ++ ) {
            label_2:
            svp_simple_001_001_global_array [ i ] = 0; 
        }
 
    }

    {
        int i ; 
        for ( i = 0 ; i < 10000 ; i ++ ) {
            label_3:
            if( i == 9999 ){
                svp_simple_001_001_global_array [ i ] = 1; 
            }
            
        }
 
    }

    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){svp_simple_001_001_isr_2();}
}
void * svp_simple_001_001_isr_1( void * arg ) {

    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    svp_simple_001_001_global_flag = 1; 
    svp_simple_001_001_global_var = 0; 
    svp_simple_001_001_global_var = 1; 
    enable_isr ( 2 ); 
    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    __exit_svp_simple_001_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void idlerun(  ) {
    int i = 0 ; 
    for ( i = 0 ; i <= 100 ; i ++ ) {
    }
 
}
void * svp_simple_001_001_isr_2( void * arg ) {
    if(cond){svp_simple_001_001_isr_1();}
    if(cond){goto label_1;}

    int reader1 ; 
    int reader3 ; 
    label_1:
    if( svp_simple_001_001_global_flag == 1 ){
        reader1 = svp_simple_001_001_global_array [ 9999 ]; 
    }
    else {
        reader1 = svp_simple_001_001_global_array [ 0 ]; 
    }

    reader3 = svp_simple_001_001_global_array [ 1000 ]; 
    int reader2 ; 
    reader2 = svp_simple_001_001_global_var; 
    __exit_svp_simple_001_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {

    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_001_001_isr_1 , 0 ); 
    pthread_create ( & t2 , 0 , svp_simple_001_001_isr_2 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
