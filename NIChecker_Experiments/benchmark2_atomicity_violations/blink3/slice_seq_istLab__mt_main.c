void * Timer_Force_isr( void * arg ) {
    timerCount ++; 
    __exit_Timer_Force_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * Timer_C_isr( void * arg ) {
    timerCount = 1; 
    if( timerCount == 1 ){
    }
    
    __exit_Timer_C_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    disable_isr ( - 1 ); 
    timerCount = 0; 
    enable_isr ( - 1 ); 
    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * Timer_B_isr( void * arg ) {
    timerCount = 1; 
    if( timerCount == 1 ){
    }
    
    __exit_Timer_B_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * Timer_A_isr( void * arg ) {
    timerCount ++; 
    if( timerCount == 1 ){
    }
    
    __exit_Timer_A_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * Timer_Reset_isr( void * arg ) {
    timerCount = 0; 
    __exit_Timer_Reset_isr : 
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
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , Timer_A_isr , 0 ); 
    pthread_create ( & t2 , 0 , Timer_B_isr , 0 ); 
    pthread_create ( & t3 , 0 , Timer_C_isr , 0 ); 
    pthread_create ( & t4 , 0 , Timer_Force_isr , 0 ); 
    pthread_create ( & t5 , 0 , Timer_Reset_isr , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
