void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_018_001_isr_2();}
    if(cond){goto label_1;}
    if(cond){svp_simple_018_001_isr_1();}
    if(cond){goto label_1;}

    {
        enable_isr ( - 1 ); 
    }

    float svp_simple_018_001_perimete = 0 ; 
    float svp_simple_018_001_area = 0 ; 
    float __cs_retval__svp_simple_018_001_func1_0 ; 
    {
        float perimete = 0.0 ; 
        label_1:
        perimete = ( 2 * svp_simple_018_001_para1 ) * svp_simple_018_001_para2; 
        __cs_retval__svp_simple_018_001_func1_0 = perimete; 
    }

    svp_simple_018_001_perimete = __cs_retval__svp_simple_018_001_func1_0; 
    float __cs_retval__svp_simple_018_001_func2_0 ; 
    {
        float area = 0.0 ; 
        area = ( svp_simple_018_001_para1 * svp_simple_018_001_para2 ) * svp_simple_018_001_para2; 
        __cs_retval__svp_simple_018_001_func2_0 = area; 
    }

    svp_simple_018_001_area = __cs_retval__svp_simple_018_001_func2_0; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void idlerun(  ) {
    int i = 0 ; 
    for ( i = 0 ; i <= 100 ; i ++ ) {
    }
 
}
float svp_simple_018_001_func2(  ) {
    float area = 0.0 ; 
    area = ( svp_simple_018_001_para1 * svp_simple_018_001_para2 ) * svp_simple_018_001_para2; 
    return ( area ) ; 
}
float svp_simple_018_001_func1(  ) {
    float perimete = 0.0 ; 
    perimete = ( 2 * svp_simple_018_001_para1 ) * svp_simple_018_001_para2; 
    return ( perimete ) ; 
}
void * svp_simple_018_001_isr_2( void * arg ) {
    if(cond){svp_simple_018_001_isr_1();}
    if(cond){goto label_1;}

    {
        int i = 0 ; 
        label_1:
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    {
        svp_simple_018_001_para2 = 1.0; 
    }

    __exit_svp_simple_018_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_018_001_isr_1( void * arg ) {
    if(cond){svp_simple_018_001_isr_2();}
    if(cond){goto label_1;}

    {
        int i = 0 ; 
        label_1:
        for ( i = 0 ; i <= 100 ; i ++ ) {
        }
 
    }

    svp_simple_018_001_para1 = 2.0; 
    __exit_svp_simple_018_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {

    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_018_001_isr_1 , 0 ); 
    pthread_create ( & t2 , 0 , svp_simple_018_001_isr_2 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
