void * req7_isr( void * arg ) {
    if(cond){req8_isr();}
    if(cond){goto label_1;}

    irq = 0; 
    {
        global_id = 7; 
        global_dev = 7; 
    }

    {
        global_id = - 1; 
        global_dev = - 1; 
    }

    cnt7 ++; 
    int i = 0 ; 
    int maxnum ; 
    int mininum ; 
    for ( i = 0 ; i < 10000 ; i ++ ) {
        if( i == 9000 ){
            test_global_array [ 9000 ] = 1; 
        }
        
        if( i == ( 10000 + 1 ) ){
            test_global_array [ 9000 ] = 1; 
        }
        
    }
 
    label_1:
    mininum = test_global_array [ 9000 ] - 10; 
    maxnum = test_global_array [ 0 ] + 10; 
    __exit_req7_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req2_isr( void * arg ) {

    irq = 0; 
    {
        global_id = 2; 
        global_dev = 2; 
    }

    {
        global_id = - 1; 
        global_dev = - 1; 
    }

    cnt2 ++; 
    __exit_req2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req1_isr( void * arg ) {
    if(cond){req7_isr();}
    if(cond){goto label_1;}
    if(cond){req3_isr();}
    if(cond){goto label_2;}

    irq = 0; 
    {
        global_id = 1; 
        global_dev = 1; 
    }

    {
        global_id = - 1; 
        global_dev = - 1; 
    }

    cnt1 ++; 
    label_1:
    if( irq == 0 ){
        {
            int reader1 ; 
            int reader2 ; 
            int reader3 ; 
            int reader4 ; 
            if( test_global_condition1 == 1 ){
                label_2:
                reader1 = test_global_var1; 
            }
            
            if( test_global_condition2 == 1 ){
                reader2 = test_global_var1; 
            }
            
            reader3 = test_global_var2; 
            reader4 = test_global_var2; 
        }

    }
    
    __exit_req1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {

    disable_isr ( - 1 ); 
    test_global_condition1 = 1; 
    test_global_condition2 = 1; 
    test_global_condition3 = 1; 
    test_global_condition4 = 1; 
    enable_isr ( - 1 ); 
    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){req7_isr();}
    if(cond){req2_isr();}
    if(cond){req1_isr();}
    if(cond){req8_isr();}
    if(cond){req3_isr();}
    if(cond){req6_isr();}
    if(cond){req5_isr();}
    if(cond){req4_isr();}
}
void * req8_isr( void * arg ) {
    if(cond){req7_isr();}
    if(cond){goto label_1;}

    irq = 0; 
    {
        global_id = 8; 
        global_dev = 8; 
    }

    {
        label_1:
        if( global_dev != 8 ){
        }
        
        if( irq > ( - 1 ) ){
            if( global_id != 8 ){
            }
            
        }
        
    }

    {
        global_id = - 1; 
        global_dev = - 1; 
    }

    cnt8 ++; 
    test_global_array [ 9000 ] = 999; 
    __exit_req8_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req3_isr( void * arg ) {
    if(cond){req7_isr();}
    if(cond){goto label_1;}

    irq = 0; 
    {
        global_id = 3; 
        global_dev = 3; 
    }

    {
        global_id = - 1; 
        global_dev = - 1; 
    }

    cnt3 ++; 
    label_1:
    if( global_id == ( - 1 ) ){
        test_global_var1 = 0x11; 
    }
    else {
        test_global_var2 = 0x22; 
    }

    __exit_req3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req6_isr( void * arg ) {
    if(cond){req7_isr();}
    if(cond){goto label_1;}

    irq = - 1; 
    label_1:
    if( irq == ( - 1 ) ){
        test_global_var3 = 0x33; 
    }
    
    cnt6 ++; 
    __exit_req6_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req5_isr( void * arg ) {

    irq = 0; 
    {
        global_id = 5; 
        global_dev = 5; 
    }

    {
        global_id = - 1; 
        global_dev = - 1; 
    }

    cnt5 ++; 
    __exit_req5_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req4_isr( void * arg ) {

    irq = 0; 
    {
        global_id = 4; 
        global_dev = 4; 
    }

    {
        global_id = - 1; 
        global_dev = - 1; 
    }

    cnt4 ++; 
    __exit_req4_isr : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {

    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_t t3 ; 
    pthread_t t4 ; 
    pthread_t t5 ; 
    pthread_t t6 ; 
    pthread_t t7 ; 
    pthread_t t8 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , req1_isr , 0 ); 
    pthread_create ( & t2 , 0 , req2_isr , 0 ); 
    pthread_create ( & t3 , 0 , req3_isr , 0 ); 
    pthread_create ( & t4 , 0 , req4_isr , 0 ); 
    pthread_create ( & t5 , 0 , req5_isr , 0 ); 
    pthread_create ( & t6 , 0 , req6_isr , 0 ); 
    pthread_create ( & t7 , 0 , req7_isr , 0 ); 
    pthread_create ( & t8 , 0 , req8_isr , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
