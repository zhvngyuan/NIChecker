void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_014_001_isr_1();}
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
    if(cond){svp_simple_014_001_isr_2();}
    if(cond){svp_simple_014_001_isr_3();}
}
void idlerun(  ) {
    int i = 0 ; 
    for ( i = 0 ; i <= 100 ; i ++ ) {
    }
 
}
void * svp_simple_014_001_isr_1( void * arg ) {
    if(cond){svp_simple_014_001_isr_2();}
    if(cond){goto label_1;}
    if(cond){svp_simple_014_001_isr_3();}
    if(cond){goto label_2;}

    disable_isr ( 3 ); 
    int reader1 ; 
    int reader2 ; 
    int reader3 ; 
    int reader4 ; 
    {
        int i ; 
        for ( i = 0 ; i < 100 ; i ++ ) {
            label_1:
            if( i == 99 ){
                label_2:
                reader1 = svp_simple_014_001_global_var1; 
            }
            
        }
 
    }

    reader2 = svp_simple_014_001_global_var1; 
    reader3 = svp_simple_014_001_global_var2; 
    reader4 = svp_simple_014_001_global_var2; 
    __exit_svp_simple_014_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_014_001_isr_2( void * arg ) {
    if(cond){svp_simple_014_001_isr_1();}
    if(cond){goto label_1;}

    svp_simple_014_001_global_flag1 = 1; 
    svp_simple_014_001_global_flag2 = 0; 
    enable_isr ( 3 ); 
    {
        int i = 0 ; 
        label_1:
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    __exit_svp_simple_014_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_014_001_isr_3( void * arg ) {
    if(cond){svp_simple_014_001_isr_2();}
    if(cond){goto label_1;}

    label_1:
    if( svp_simple_014_001_global_flag1 == 1 ){
        svp_simple_014_001_global_var1 = 0x09; 
    }
    
    if( svp_simple_014_001_global_flag2 == 1 ){
        svp_simple_014_001_global_var2 = 0x09; 
    }
    
    __exit_svp_simple_014_001_isr_3 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {

    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_t t3 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_014_001_isr_1 , 0 ); 
    pthread_create ( & t2 , 0 , svp_simple_014_001_isr_2 , 0 ); 
    pthread_create ( & t3 , 0 , svp_simple_014_001_isr_3 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
