void * Timer_Force_isr( void * arg ) {
    if(cond){Timer_C_isr();}
    if(cond){goto label_1;}

    label_1:
    timerCount ++; 
    cnt4 ++; 
    __exit_Timer_Force_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * Timer_C_isr( void * arg ) {
    if(cond){Timer_Force_isr();}
    if(cond){goto label_1;}

    timerCount = 1; 
    label_1:
    if( timerCount == 1 ){
        P1OUT = LED_0; 
    }
    
    cnt3 ++; 
    __exit_Timer_C_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {

    disable_isr ( - 1 ); 
    WDTCTL = WDTPW + WDTHOLD; 
    LED_DIR = LED_0 + LED_1; 
    LED_OUT = 1 + ( LED_0 + LED_1 ); 
    CCTL0 = CCIE; 
    TACTL = TASSEL_2 + MC_2; 
    timerCount = 0; 
    enable_isr ( - 1 ); 
    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){Timer_Force_isr();}
    if(cond){Timer_C_isr();}
    if(cond){Timer_B_isr();}
    if(cond){Timer_A_isr();}
    if(cond){Timer_Reset_isr();}
}
void * Timer_B_isr( void * arg ) {
    if(cond){Timer_Force_isr();}
    if(cond){goto label_1;}

    timerCount = 1; 
    label_1:
    if( timerCount == 1 ){
        P1OUT = LED_0; 
    }
    
    cnt2 ++; 
    __exit_Timer_B_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * Timer_A_isr( void * arg ) {
    if(cond){Timer_Force_isr();}
    if(cond){goto label_1;}
    if(cond){goto label_2;}

    label_1:
    timerCount ++; 
    label_2:
    if( timerCount == 1 ){
        P1OUT = LED_0 + LED_1; 
    }
    
    cnt1 ++; 
    __exit_Timer_A_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * Timer_Reset_isr( void * arg ) {

    timerCount = 0; 
    cnt5 ++; 
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
