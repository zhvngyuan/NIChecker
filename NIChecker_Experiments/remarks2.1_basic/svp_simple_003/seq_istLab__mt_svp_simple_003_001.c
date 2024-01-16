void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_003_001_isr_2();}
    if(cond){goto label_1;}
    if(cond){goto label_2;}
    if(cond){goto label_4;}
    if(cond){svp_simple_003_001_isr_1();}
    if(cond){goto label_3;}

    int reader1 ; 
    int reader2 ; 
    int reader3 ; 
    int reader4 ; 
    {
        int i = 0 ; 
        label_1:
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    disable_isr ( 1 ); 
    disable_isr ( 2 ); 
    {
        int i ; 
        for ( i = 0 ; i < 10000 ; i ++ ) {
            label_2:
            if( i == 9999 ){
                label_3:
                reader3 = svp_simple_003_001_global_var2; 
            }
            
        }
 
    }

    {
        int j ; 
        for ( j = 10000 ; j > 0 ; j -- ) {
            if( j == 9999 ){
                reader4 = svp_simple_003_001_global_var2; 
            }
            
        }
 
    }

    enable_isr ( 1 ); 
    {
        int i ; 
        for ( i = 0 ; i < 10000 ; i ++ ) {
            label_4:
            if( i == 9999 ){
                reader1 = svp_simple_003_001_global_var1; 
            }
            
        }
 
    }

    {
        int j ; 
        for ( j = 10000 ; j > 0 ; j -- ) {
            if( j == 9999 ){
                reader2 = svp_simple_003_001_global_var1; 
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
    pthread_t t2 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_003_001_isr_1 , 0 ); 
    pthread_create ( & t2 , 0 , svp_simple_003_001_isr_2 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_003_001_isr_2( void * arg ) {

    {
        int i = 0 ; 
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    svp_simple_003_001_global_flag = 1; 
    __exit_svp_simple_003_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_003_001_isr_1( void * arg ) {
    if(cond){svp_simple_003_001_isr_2();}
    if(cond){goto label_1;}

    enable_isr ( 2 ); 
    svp_simple_003_001_global_var2 = 999; 
    label_1:
    if( svp_simple_003_001_global_flag == 1 ){
        svp_simple_003_001_global_var1 = 999; 
    }
    else {
        if( svp_simple_003_001_global_flag1 == 2 ){
            svp_simple_003_001_global_var1 = 888; 
        }
        
    }

    __exit_svp_simple_003_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
