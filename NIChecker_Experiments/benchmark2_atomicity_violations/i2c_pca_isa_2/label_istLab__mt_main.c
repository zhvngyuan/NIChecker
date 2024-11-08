void * req6_isr_0( void * __cs_param_req6_isr_arg ) {
addLabel();
    irq = - 1; 
addLabel();
    {
        int __cs_local_req6_isr_reader1 ; 
        int __cs_local_req6_isr_reader2 ; 
        int __cs_local_req6_isr_reader3 ; 
        int __cs_local_req6_isr_reader4 ; 
    }

    __exit_req6_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req2_isr_0( void * __cs_param_req2_isr_arg ) {
addLabel();
    irq = 2; 
addLabel();
    {
    }

    {
    }

    _Bool __cs_local_req2_isr___cs_tmp_if_cond_0 ; 
    __cs_local_req2_isr___cs_tmp_if_cond_0 = irq == 2; 
    if( __cs_local_req2_isr___cs_tmp_if_cond_0 ){
    }
    
    __exit_req2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req4_isr_0( void * __cs_param_req4_isr_arg ) {
addLabel();
    irq = 0; 
addLabel();
    {
    }

    {
    }

    _Bool __cs_local_req4_isr___cs_tmp_if_cond_3 ; 
    __cs_local_req4_isr___cs_tmp_if_cond_3 = irq == 0; 
    if( __cs_local_req4_isr___cs_tmp_if_cond_3 ){
    }
    
    __exit_req4_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req1_isr_0( void * __cs_param_req1_isr_arg ) {
addLabel();
    irq = 1; 
addLabel();
    {
    }

    {
    }

    __exit_req1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    disable_isr ( - 1 ); 
    enable_isr ( - 1 ); 
addLabel();
    goto __exit_main_task ; 
    ; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * req5_isr_0( void * __cs_param_req5_isr_arg ) {
addLabel();
    irq = 0; 
addLabel();
    {
    }

    {
        _Bool __cs_local_req5_isr___cs_tmp_if_cond_1 ; 
        __cs_local_req5_isr___cs_tmp_if_cond_1 = irq > ( - 1 ); 
        if( __cs_local_req5_isr___cs_tmp_if_cond_1 ){
        }
        
    }

    {
    }

    _Bool __cs_local_req5_isr___cs_tmp_if_cond_2 ; 
    __cs_local_req5_isr___cs_tmp_if_cond_2 = irq == 0; 
    if( __cs_local_req5_isr___cs_tmp_if_cond_2 ){
    }
    
    __exit_req5_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * req3_isr_0( void * __cs_param_req3_isr_arg ) {
addLabel();
    irq = 3; 
addLabel();
    {
    }

    {
    }

    __exit_req3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_t __cs_local_main_t2 ; 
    pthread_t __cs_local_main_t3 ; 
    pthread_t __cs_local_main_t4 ; 
    pthread_t __cs_local_main_t5 ; 
    pthread_t __cs_local_main_t6 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , req1_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , req2_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t3 , 0 , req3_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t4 , 0 , req4_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t5 , 0 , req5_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t6 , 0 , req6_isr_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
