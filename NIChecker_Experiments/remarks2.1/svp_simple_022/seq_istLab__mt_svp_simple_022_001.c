void init(  ) {
    enable_isr ( - 1 ); 
}
void * main_task( void * arg ) {
    if(cond){svp_simple_022_001_isr_1();}
    if(cond){goto label_1;}
    if(cond){goto label_2;}

    {
        svp_simple_022_001_global_var1 = nondet_rand ( ); 
        svp_simple_022_001_global_var2 = nondet_rand ( ); 
        svp_simple_022_001_global_var3 = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
        }

    }

    svp_simple_022_001_global_var1 = 0; 
    {
        {
            label_1:
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
        svp_simple_022_001_global_array [ i ] = 0; 
    }
 
    {
        {
            label_2:
            svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
        }

    }

    svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void idlerun(  ) {
    int i = 0 ; 
    for ( i = 0 ; i <= 100 ; i ++ ) {
    }
 
}
void svp_simple_022_001_func_2(  ) {
    {
        svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
    }

}
void svp_simple_022_001_init(  ) {
    svp_simple_022_001_global_var1 = nondet_rand ( ); 
    svp_simple_022_001_global_var2 = nondet_rand ( ); 
    svp_simple_022_001_global_var3 = nondet_rand ( ); 
    {
        enable_isr ( - 1 ); 
    }

}
void svp_simple_022_001_func_1(  ) {
    {
        if( svp_simple_022_001_global_var1 >= 12 ){
            svp_simple_022_001_global_var1 = 12; 
        }
        else {
            svp_simple_022_001_global_var1 = 0; 
        }

    }

}
void svp_simple_022_001_func_4(  ) {
    svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
}
void svp_simple_022_001_func_3(  ) {
    if( svp_simple_022_001_global_var1 >= 12 ){
        svp_simple_022_001_global_var1 = 12; 
    }
    else {
        svp_simple_022_001_global_var1 = 0; 
    }

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
