void * task_communicate_isr_0( void * __cs_param_task_communicate_isr_arg ) {
addLabel();
    int __cs_local_task_communicate_isr__startTime = 1 ; 
    int __cs_local_task_communicate_isr__interval = 1 ; 
    cmd = nondet_rand ( ); 
    rspStatus = nondet_rand ( ); 
    _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_0 ; 
    __cs_local_task_communicate_isr___cs_tmp_if_cond_0 = rspStatus == 1; 
    if( __cs_local_task_communicate_isr___cs_tmp_if_cond_0 ){
        _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_1 ; 
        __cs_local_task_communicate_isr___cs_tmp_if_cond_1 = cmd == 2; 
        if( __cs_local_task_communicate_isr___cs_tmp_if_cond_1 ){
            _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_2 ; 
            __cs_local_task_communicate_isr___cs_tmp_if_cond_2 = systemState != 1; 
            if( __cs_local_task_communicate_isr___cs_tmp_if_cond_2 ){
            }
            else {
                systemState = 0; 
            }

        }
        
        _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_3 ; 
        __cs_local_task_communicate_isr___cs_tmp_if_cond_3 = cmd == 0; 
        if( __cs_local_task_communicate_isr___cs_tmp_if_cond_3 ){
            _Bool __cs_local_task_communicate_isr___cs_tmp_if_cond_4 ; 
            __cs_local_task_communicate_isr___cs_tmp_if_cond_4 = systemState != 0; 
            if( __cs_local_task_communicate_isr___cs_tmp_if_cond_4 ){
            }
            else {
                int __cs_local_task_communicate_isr_tmp_num = numberOfRecords + 1 ; 
                tickCounter = 1; 
                systemState = 1; 
            }

        }
        
    }
    
    __exit_task_communicate_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    systemState = 0; 
addLabel();
    goto __exit_main_task ; 
    ; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * task_measure_isr_0( void * __cs_param_task_measure_isr_arg ) {
addLabel();
    int __cs_temporary_0 = 0 ; 
    __cs_temporary_0 = tickCounter + 1; 
addLabel();
    tickCounter = __cs_temporary_0; 
    int __cs_local_task_measure_isr_tmp_tickCounter = tickCounter ; 
addLabel();
    int __cs_local_task_measure_isr_tmp_interval = interval ; 
    int __cs_local_task_measure_isr_value = 1 ; 
    tickCounter = 0; 
    __exit_task_measure_isr : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_t __cs_local_main_t2 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , task_measure_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , task_communicate_isr_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
