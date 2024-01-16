void * closer3_isr_0( void * __cs_param_closer3_isr_arg ) {
addLabel();
    _Bool __cs_local_closer3_isr___cs_tmp_if_cond_5 ; 
    __cs_local_closer3_isr___cs_tmp_if_cond_5 = count; 
    if( __cs_local_closer3_isr___cs_tmp_if_cond_5 ){
        _Bool __cs_local_closer3_isr___cs_tmp_if_cond_6 ; 
        __cs_local_closer3_isr___cs_tmp_if_cond_6 = ! nowayout; 
        if( __cs_local_closer3_isr___cs_tmp_if_cond_6 ){
        }
        
    }
    
    _Bool __cs_local_closer3_isr___cs_tmp_if_cond_7 ; 
    __cs_local_closer3_isr___cs_tmp_if_cond_7 = expect_close != 42; 
    if( __cs_local_closer3_isr___cs_tmp_if_cond_7 ){
    }
    else {
    }

    test_global_array [ 9000 ] = 999; 
addLabel();
    __exit_closer3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer1_isr_0( void * __cs_param_writer1_isr_arg ) {
addLabel();
    _Bool __cs_local_writer1_isr___cs_tmp_if_cond_11 ; 
    __cs_local_writer1_isr___cs_tmp_if_cond_11 = count; 
    if( __cs_local_writer1_isr___cs_tmp_if_cond_11 ){
        _Bool __cs_local_writer1_isr___cs_tmp_if_cond_12 ; 
        __cs_local_writer1_isr___cs_tmp_if_cond_12 = ! nowayout; 
        if( __cs_local_writer1_isr___cs_tmp_if_cond_12 ){
        }
        
    }
    
    __exit_writer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer1_isr_0( void * __cs_param_closer1_isr_arg ) {
addLabel();
    _Bool __cs_local_closer1_isr___cs_tmp_if_cond_8 ; 
    __cs_local_closer1_isr___cs_tmp_if_cond_8 = count; 
    if( __cs_local_closer1_isr___cs_tmp_if_cond_8 ){
        _Bool __cs_local_closer1_isr___cs_tmp_if_cond_9 ; 
        __cs_local_closer1_isr___cs_tmp_if_cond_9 = ! nowayout; 
        if( __cs_local_closer1_isr___cs_tmp_if_cond_9 ){
        }
        
        {
            int __cs_local_closer1_isr_reader1 ; 
            int __cs_local_closer1_isr_reader2 ; 
            int __cs_local_closer1_isr_reader3 ; 
            int __cs_local_closer1_isr_reader4 ; 
        }

    }
    
    _Bool __cs_local_closer1_isr___cs_tmp_if_cond_10 ; 
    __cs_local_closer1_isr___cs_tmp_if_cond_10 = expect_close != 42; 
    if( __cs_local_closer1_isr___cs_tmp_if_cond_10 ){
    }
    else {
    }

    __exit_closer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer2_isr_0( void * __cs_param_writer2_isr_arg ) {
addLabel();
    _Bool __cs_local_writer2_isr___cs_tmp_if_cond_0 ; 
    __cs_local_writer2_isr___cs_tmp_if_cond_0 = count; 
    if( __cs_local_writer2_isr___cs_tmp_if_cond_0 ){
        _Bool __cs_local_writer2_isr___cs_tmp_if_cond_1 ; 
        __cs_local_writer2_isr___cs_tmp_if_cond_1 = ! nowayout; 
        if( __cs_local_writer2_isr___cs_tmp_if_cond_1 ){
        }
        
    }
    
    __exit_writer2_isr : 
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
void * closer2_isr_0( void * __cs_param_closer2_isr_arg ) {
addLabel();
    _Bool __cs_local_closer2_isr___cs_tmp_if_cond_2 ; 
    __cs_local_closer2_isr___cs_tmp_if_cond_2 = count; 
    if( __cs_local_closer2_isr___cs_tmp_if_cond_2 ){
        _Bool __cs_local_closer2_isr___cs_tmp_if_cond_3 ; 
        __cs_local_closer2_isr___cs_tmp_if_cond_3 = ! nowayout; 
        if( __cs_local_closer2_isr___cs_tmp_if_cond_3 ){
        }
        
    }
    
    _Bool __cs_local_closer2_isr___cs_tmp_if_cond_4 ; 
    __cs_local_closer2_isr___cs_tmp_if_cond_4 = expect_close != 42; 
    if( __cs_local_closer2_isr___cs_tmp_if_cond_4 ){
    }
    else {
    }

    __exit_closer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer3_isr_0( void * __cs_param_writer3_isr_arg ) {
addLabel();
    _Bool __cs_local_writer3_isr___cs_tmp_if_cond_13 ; 
    __cs_local_writer3_isr___cs_tmp_if_cond_13 = count; 
    if( __cs_local_writer3_isr___cs_tmp_if_cond_13 ){
        _Bool __cs_local_writer3_isr___cs_tmp_if_cond_14 ; 
        __cs_local_writer3_isr___cs_tmp_if_cond_14 = ! nowayout; 
        if( __cs_local_writer3_isr___cs_tmp_if_cond_14 ){
        }
        
    }
    
    int __cs_local_writer3_isr_i = 0 ; 
    int __cs_local_writer3_isr_maxnum ; 
    int __cs_local_writer3_isr_mininum ; 
    __cs_local_writer3_isr_i = 0; 
    int __cs_local_writer3_isr_loop_1_IOVar1 ; 
    int __cs_local_writer3_isr_loop_1_block_3 ; 
    int __cs_local_writer3_isr_t_1 = 0 ; 
    if( ! ( ( __cs_local_writer3_isr_t_1 < 2 ) && ( __cs_local_writer3_isr_i < 10000 ) ) ){
        goto __exit_loop_1 ; 
    }
    
    {
        __cs_local_writer3_isr_loop_1_IOVar1 = __cs_local_writer3_isr_i; 
        __cs_local_writer3_isr_loop_1_block_3 = nondet_int ( ); 
        __cs_local_writer3_isr_i = __cs_local_writer3_isr_loop_1_IOVar1 + ( 1 * __cs_local_writer3_isr_loop_1_block_3 ); 
        __CPROVER_assume ( __cs_local_writer3_isr_loop_1_block_3 >= 0 ); 
        __CPROVER_assume ( __cs_local_writer3_isr_i < 10000 ); 
        {
            _Bool __cs_local_writer3_isr___cs_tmp_if_cond_15 ; 
            __cs_local_writer3_isr___cs_tmp_if_cond_15 = __cs_local_writer3_isr_i == 9000; 
            if( __cs_local_writer3_isr___cs_tmp_if_cond_15 ){
                test_global_array [ 9000 ] = 1; 
addLabel();
            }
            
            _Bool __cs_local_writer3_isr___cs_tmp_if_cond_16 ; 
            __cs_local_writer3_isr___cs_tmp_if_cond_16 = __cs_local_writer3_isr_i == 10001; 
            if( __cs_local_writer3_isr___cs_tmp_if_cond_16 ){
                test_global_array [ 9000 ] = 1; 
addLabel();
            }
            
        }

        __cs_local_writer3_isr_i = __cs_local_writer3_isr_i + 1; 
    }

    __cs_local_writer3_isr_t_1 = __cs_local_writer3_isr_t_1 + 1; 
    if( ! ( ( __cs_local_writer3_isr_t_1 < 2 ) && ( __cs_local_writer3_isr_i < 10000 ) ) ){
        goto __exit_loop_1 ; 
    }
    
    {
        __cs_local_writer3_isr_loop_1_IOVar1 = __cs_local_writer3_isr_i; 
        __cs_local_writer3_isr_loop_1_block_3 = nondet_int ( ); 
        __cs_local_writer3_isr_i = __cs_local_writer3_isr_loop_1_IOVar1 + ( 1 * __cs_local_writer3_isr_loop_1_block_3 ); 
        __CPROVER_assume ( __cs_local_writer3_isr_loop_1_block_3 >= 0 ); 
        __CPROVER_assume ( __cs_local_writer3_isr_i < 10000 ); 
        {
            _Bool __cs_local_writer3_isr___cs_tmp_if_cond_15 ; 
            __cs_local_writer3_isr___cs_tmp_if_cond_15 = __cs_local_writer3_isr_i == 9000; 
            if( __cs_local_writer3_isr___cs_tmp_if_cond_15 ){
                test_global_array [ 9000 ] = 1; 
addLabel();
            }
            
            _Bool __cs_local_writer3_isr___cs_tmp_if_cond_16 ; 
            __cs_local_writer3_isr___cs_tmp_if_cond_16 = __cs_local_writer3_isr_i == 10001; 
            if( __cs_local_writer3_isr___cs_tmp_if_cond_16 ){
                test_global_array [ 9000 ] = 1; 
addLabel();
            }
            
        }

        __cs_local_writer3_isr_i = __cs_local_writer3_isr_i + 1; 
    }

    __cs_local_writer3_isr_t_1 = __cs_local_writer3_isr_t_1 + 1; 
    _Bool __cs_loop_1 = ( __cs_local_writer3_isr_t_1 < 2 ) && ( __cs_local_writer3_isr_i < 10000 ) ; 
    __VERIFIER_assume ( ! __cs_loop_1 ); 
    __exit_loop_1 : 
    ; 
    __CPROVER_assume ( ! ( __cs_local_writer3_isr_i < 10000 ) ); 
    __cs_local_writer3_isr_mininum = test_global_array [ 9000 ] - 10; 
    __cs_local_writer3_isr_maxnum = test_global_array [ 0 ] + 10; 
    __exit_writer3_isr : 
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
    pthread_create ( & __cs_local_main_t1 , 0 , closer1_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , closer2_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t3 , 0 , closer3_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t4 , 0 , writer1_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t5 , 0 , writer2_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t6 , 0 , writer3_isr_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
