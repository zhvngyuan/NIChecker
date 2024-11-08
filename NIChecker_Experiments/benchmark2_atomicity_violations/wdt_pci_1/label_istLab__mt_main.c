void * writer1_isr_0( void * __cs_param_writer1_isr_arg ) {
addLabel();
    count = 0; 
    _Bool __cs_local_writer1_isr___cs_tmp_if_cond_10 ; 
    __cs_local_writer1_isr___cs_tmp_if_cond_10 = count; 
    if( __cs_local_writer1_isr___cs_tmp_if_cond_10 ){
        _Bool __cs_local_writer1_isr___cs_tmp_if_cond_11 ; 
        __cs_local_writer1_isr___cs_tmp_if_cond_11 = ! nowayout; 
        if( __cs_local_writer1_isr___cs_tmp_if_cond_11 ){
        }
        
    }
    
    __exit_writer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer1_isr_0( void * __cs_param_closer1_isr_arg ) {
addLabel();
    count = 1; 
addLabel();
    _Bool __cs_local_closer1_isr___cs_tmp_if_cond_7 ; 
    __cs_local_closer1_isr___cs_tmp_if_cond_7 = count; 
    if( __cs_local_closer1_isr___cs_tmp_if_cond_7 ){
        _Bool __cs_local_closer1_isr___cs_tmp_if_cond_8 ; 
        __cs_local_closer1_isr___cs_tmp_if_cond_8 = ! nowayout; 
        if( __cs_local_closer1_isr___cs_tmp_if_cond_8 ){
        }
        
    }
    
    _Bool __cs_local_closer1_isr___cs_tmp_if_cond_9 ; 
    __cs_local_closer1_isr___cs_tmp_if_cond_9 = expect_close != 42; 
    if( __cs_local_closer1_isr___cs_tmp_if_cond_9 ){
    }
    else {
    }

    {
        int __cs_local_closer1_isr_reader1 ; 
        int __cs_local_closer1_isr_reader2 ; 
        int __cs_local_closer1_isr_reader3 ; 
        int __cs_local_closer1_isr_reader4 ; 
    }

    __exit_closer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer2_isr_0( void * __cs_param_writer2_isr_arg ) {
addLabel();
    count = 0; 
    _Bool __cs_local_writer2_isr___cs_tmp_if_cond_0 ; 
    __cs_local_writer2_isr___cs_tmp_if_cond_0 = count; 
    if( __cs_local_writer2_isr___cs_tmp_if_cond_0 ){
        _Bool __cs_local_writer2_isr___cs_tmp_if_cond_1 ; 
        __cs_local_writer2_isr___cs_tmp_if_cond_1 = ! nowayout; 
        if( __cs_local_writer2_isr___cs_tmp_if_cond_1 ){
        }
        
    }
    
    test_global_var3 = 0x55; 
    __exit_writer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    disable_isr ( - 1 ); 
    count = 0; 
addLabel();
    test_global_condition3 = 1; 
addLabel();
    test_global_condition4 = 1; 
addLabel();
    enable_isr ( - 1 ); 
addLabel();
    goto __exit_main_task ; 
    ; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer2_isr_0( void * __cs_param_closer2_isr_arg ) {
addLabel();
    int __cs_local_closer2_isr_reader5 ; 
    int __cs_local_closer2_isr_reader6 ; 
    count = 1; 
addLabel();
    _Bool __cs_local_closer2_isr___cs_tmp_if_cond_2 ; 
    __cs_local_closer2_isr___cs_tmp_if_cond_2 = count; 
    if( __cs_local_closer2_isr___cs_tmp_if_cond_2 ){
        _Bool __cs_local_closer2_isr___cs_tmp_if_cond_3 ; 
        __cs_local_closer2_isr___cs_tmp_if_cond_3 = ! nowayout; 
        if( __cs_local_closer2_isr___cs_tmp_if_cond_3 ){
        }
        
        _Bool __cs_local_closer2_isr___cs_tmp_if_cond_4 ; 
        __cs_local_closer2_isr___cs_tmp_if_cond_4 = test_global_condition3 == 1; 
        if( __cs_local_closer2_isr___cs_tmp_if_cond_4 ){
            __cs_local_closer2_isr_reader5 = test_global_var3; 
addLabel();
        }
        
        _Bool __cs_local_closer2_isr___cs_tmp_if_cond_5 ; 
        __cs_local_closer2_isr___cs_tmp_if_cond_5 = test_global_condition4 == 1; 
        if( __cs_local_closer2_isr___cs_tmp_if_cond_5 ){
            __cs_local_closer2_isr_reader6 = test_global_var3; 
addLabel();
        }
        
    }
    
    _Bool __cs_local_closer2_isr___cs_tmp_if_cond_6 ; 
    __cs_local_closer2_isr___cs_tmp_if_cond_6 = expect_close != 42; 
    if( __cs_local_closer2_isr___cs_tmp_if_cond_6 ){
    }
    else {
    }

    __exit_closer2_isr : 
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
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , closer1_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , closer2_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t3 , 0 , writer1_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t4 , 0 , writer2_isr_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
