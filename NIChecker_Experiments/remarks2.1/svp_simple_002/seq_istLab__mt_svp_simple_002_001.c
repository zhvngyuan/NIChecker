void * svp_simple_002_001_isr_2( void * arg ) {
    if(cond){svp_simple_002_001_isr_1();}
    if(cond){goto label_1;}

    {
        int i = 0 ; 
        label_1:
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    svp_simple_002_001_global_array [ 9999 ] = 999; 
    __exit_svp_simple_002_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_002_001_isr_1( void * arg ) {
    if(cond){svp_simple_002_001_isr_2();}
    if(cond){goto label_1;}
    if(cond){goto label_2;}

    int mininum ; 
    int maxnum ; 
    {
        int i ; 
        for ( i = 0 ; i < 10000 ; i ++ ) {
            label_1:
            if( i == 9999 ){
                svp_simple_002_001_global_array [ 9999 ] = 1; 
            }
            
            if( i == ( 10000 + 1 ) ){
                svp_simple_002_001_global_array [ 9999 ] = 1; 
            }
            
        }
 
    }

    label_2:
    mininum = svp_simple_002_001_global_array [ 9999 ] - 10; 
    maxnum = svp_simple_002_001_global_array [ 0 ] + 10; 
    __exit_svp_simple_002_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_002_001_isr_2();}
    if(cond){goto label_1;}

    {
        enable_isr ( - 1 ); 
    }

    {
        int i = 0 ; 
        label_1:
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){svp_simple_002_001_isr_1();}
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
    pthread_create ( & t1 , 0 , svp_simple_002_001_isr_1 , 0 ); 
    pthread_create ( & t2 , 0 , svp_simple_002_001_isr_2 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
