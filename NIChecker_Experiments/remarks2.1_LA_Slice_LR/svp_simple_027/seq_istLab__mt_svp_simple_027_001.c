void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_027_001_isr_1();}
    if(cond){goto label_1;}

    {
        svp_simple_027_001_gloable_var = 15; 
        {
            enable_isr ( - 1 ); 
        }

    }

    enable_isr ( 1 ); 
    label_1:
    if( svp_simple_027_001_gloable_var > 12 ){
        svp_simple_027_001_gloable_var = 0; 
    }
    
    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){svp_simple_027_001_isr_2();}
    if(cond){svp_simple_027_001_isr_3();}
}
void idlerun(  ) {
    int i = 0 ; 
    for ( i = 0 ; i <= 100 ; i ++ ) {
    }
 
}
void * svp_simple_027_001_isr_1( void * arg ) {
    if(cond){svp_simple_027_001_isr_2();}
    if(cond){goto label_1;}

    label_1:
    svp_simple_027_001_gloable_var ++; 
    __exit_svp_simple_027_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_027_001_isr_2( void * arg ) {
    if(cond){svp_simple_027_001_isr_1();}
    if(cond){goto label_1;}

    label_1:
    svp_simple_027_001_gloable_var += 2; 
    __exit_svp_simple_027_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_027_001_isr_3( void * arg ) {
    if(cond){svp_simple_027_001_isr_1();}
    if(cond){goto label_1;}

    label_1:
    svp_simple_027_001_gloable_var += 3; 
    __exit_svp_simple_027_001_isr_3 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {

    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_t t3 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_027_001_isr_1 , 0 ); 
    pthread_create ( & t2 , 0 , svp_simple_027_001_isr_2 , 0 ); 
    pthread_create ( & t3 , 0 , svp_simple_027_001_isr_3 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
void svp_simple_027_001_init(  ) {
    svp_simple_027_001_gloable_var = 15; 
    {
        enable_isr ( - 1 ); 
    }

}
