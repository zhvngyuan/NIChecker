void * req2_isr( void * arg ) {
    irq = 2; 
    {
    }

    {
    }

    if( irq == 2 ){
    }
    
    __exit_req2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req1_isr( void * arg ) {
    irq = 1; 
    {
    }

    {
    }

    __exit_req1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    disable_isr ( - 1 ); 
    enable_isr ( - 1 ); 
    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * req3_isr( void * arg ) {
    irq = 3; 
    {
    }

    {
    }

    __exit_req3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req6_isr( void * arg ) {
    irq = - 1; 
    {
        int reader1 ; 
        int reader2 ; 
        int reader3 ; 
        int reader4 ; 
    }

    __exit_req6_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req5_isr( void * arg ) {
    irq = 0; 
    {
    }

    {
        if( irq > ( - 1 ) ){
        }
        
    }

    {
    }

    if( irq == 0 ){
    }
    
    __exit_req5_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req4_isr( void * arg ) {
    irq = 0; 
    {
    }

    {
    }

    if( irq == 0 ){
    }
    
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
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , req1_isr , 0 ); 
    pthread_create ( & t2 , 0 , req2_isr , 0 ); 
    pthread_create ( & t3 , 0 , req3_isr , 0 ); 
    pthread_create ( & t4 , 0 , req4_isr , 0 ); 
    pthread_create ( & t5 , 0 , req5_isr , 0 ); 
    pthread_create ( & t6 , 0 , req6_isr , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
