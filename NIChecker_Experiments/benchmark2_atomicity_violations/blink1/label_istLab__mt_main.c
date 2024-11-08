void * Timer_B_isr_0( void * __cs_param_Timer_B_isr_arg ) {
addLabel();
    timerCount = 1; 
    _Bool __cs_local_Timer_B_isr___cs_tmp_if_cond_0 ; 
    __cs_local_Timer_B_isr___cs_tmp_if_cond_0 = timerCount == 1; 
addLabel();
    if( __cs_local_Timer_B_isr___cs_tmp_if_cond_0 ){
    }
    
    __exit_Timer_B_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    disable_isr ( - 1 ); 
    timerCount = 0; 
addLabel();
    enable_isr ( - 1 ); 
addLabel();
    goto __exit_main_task ; 
    ; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * Timer_Force_isr_0( void * __cs_param_Timer_Force_isr_arg ) {
addLabel();
    timerCount = 1; 
    timerCount = 0; 
    __exit_Timer_Force_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * Timer_A_isr_0( void * __cs_param_Timer_A_isr_arg ) {
addLabel();
    unsigned int __cs_temporary_0 = 0 ; 
    __cs_temporary_0 = timerCount + 1; 
addLabel();
    timerCount = __cs_temporary_0; 
    _Bool __cs_local_Timer_A_isr___cs_tmp_if_cond_1 ; 
    __cs_local_Timer_A_isr___cs_tmp_if_cond_1 = timerCount == 1; 
addLabel();
    if( __cs_local_Timer_A_isr___cs_tmp_if_cond_1 ){
    }
    
    __exit_Timer_A_isr : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_t __cs_local_main_t2 ; 
    pthread_t __cs_local_main_t3 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , Timer_A_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , Timer_B_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t3 , 0 , Timer_Force_isr_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
