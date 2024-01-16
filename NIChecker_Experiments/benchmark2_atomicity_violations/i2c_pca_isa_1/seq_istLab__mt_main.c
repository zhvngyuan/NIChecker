void * req2_isr( void * arg ) {
    if(cond){req1_isr();}
    if(cond){goto label_1;}

    irq = 2; 
    {
        global_id = 2; 
        global_dev = 2; 
    }

    {
        label_1:
        if( global_dev != 2 ){
        }
        
        if( irq > ( - 1 ) ){
            if( global_id != 2 ){
            }
            
        }
        
    }

    {
        global_id = - 1; 
        global_dev = - 1; 
    }

    cnt2 ++; 
    int reader ; 
    reader = test_global_var3; 
    __exit_req2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req1_isr( void * arg ) {
    if(cond){req2_isr();}
    if(cond){goto label_1;}

    test_global_var3 = 0x33; 
    irq = 1; 
    {
        global_id = 1; 
        global_dev = 1; 
    }

    {
        label_1:
        if( global_dev != 1 ){
        }
        
        if( irq > ( - 1 ) ){
            if( global_id != 1 ){
            }
            
        }
        
    }

    {
        global_id = - 1; 
        global_dev = - 1; 
    }

    cnt1 ++; 
    test_global_var3 = 0x44; 
    __exit_req1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    if(cond){req3_isr();}
    if(cond){goto label_2;}
    if(cond){req4_isr();}
    if(cond){goto label_1;}

    disable_isr ( - 1 ); 
    test_global_condition1 = 1; 
    test_global_condition2 = 1; 
    test_global_condition3 = 1; 
    test_global_condition4 = 1; 
    enable_isr ( - 1 ); 
    {
        int reader1 ; 
        int reader2 ; 
        int reader3 ; 
        int reader4 ; 
        if( test_global_condition1 == 1 ){
            label_1:
            reader1 = test_global_var1; 
        }
        
        if( test_global_condition2 == 1 ){
            reader2 = test_global_var1; 
        }
        
        label_2:
        reader3 = test_global_var2; 
        reader4 = test_global_var2; 
    }

    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){req2_isr();}
    if(cond){req1_isr();}
}
void * req3_isr( void * arg ) {
    if(cond){req2_isr();}
    if(cond){goto label_1;}
    if(cond){goto label_2;}

    irq = 3; 
    label_1:
    if( irq == 3 ){
        if( test_global_condition4 == 0 ){
            test_global_var2 = 0x22; 
        }
        
    }
    
    {
        global_id = 3; 
        global_dev = 3; 
    }

    {
        label_2:
        if( global_dev != 3 ){
        }
        
        if( irq > ( - 1 ) ){
            if( global_id != 3 ){
            }
            
        }
        
    }

    {
        global_id = - 1; 
        global_dev = - 1; 
    }

    cnt3 ++; 
    __exit_req3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req4_isr( void * arg ) {
    if(cond){req2_isr();}
    if(cond){goto label_1;}

    irq = - 1; 
    label_1:
    if( irq == ( - 1 ) ){
        if( test_global_condition3 == 1 ){
            test_global_var1 = 0x11; 
        }
        
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
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , req1_isr , 0 ); 
    pthread_create ( & t2 , 0 , req2_isr , 0 ); 
    pthread_create ( & t3 , 0 , req3_isr , 0 ); 
    pthread_create ( & t4 , 0 , req4_isr , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
