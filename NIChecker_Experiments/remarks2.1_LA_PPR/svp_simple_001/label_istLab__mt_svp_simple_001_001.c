void init(  ) {
    enable_isr ( - 1 ); 
}
void * svp_simple_001_001_isr_1_0( void * __cs_param_svp_simple_001_001_isr_1_arg ) {
addLabel();
    {
        int __cs_local_svp_simple_001_001_isr_1_i = 0 ; 
        __cs_local_svp_simple_001_001_isr_1_i = 0; 
        int __cs_local_svp_simple_001_001_isr_1_loop_4_IOVar1 ; 
        int __cs_local_svp_simple_001_001_isr_1_loop_4_block_1 ; 
        int __cs_local_svp_simple_001_001_isr_1_t_4 = 0 ; 
        if( ! ( ( __cs_local_svp_simple_001_001_isr_1_t_4 < 1 ) && ( __cs_local_svp_simple_001_001_isr_1_i <= 100 ) ) ){
            goto __exit_loop_4 ; 
        }
        
        {
            __cs_local_svp_simple_001_001_isr_1_loop_4_IOVar1 = __cs_local_svp_simple_001_001_isr_1_i; 
            __cs_local_svp_simple_001_001_isr_1_loop_4_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_001_001_isr_1_i = __cs_local_svp_simple_001_001_isr_1_loop_4_IOVar1 + ( 1 * __cs_local_svp_simple_001_001_isr_1_loop_4_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_001_001_isr_1_loop_4_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_001_001_isr_1_i <= 100 ); 
            {
            }

            __cs_local_svp_simple_001_001_isr_1_i = __cs_local_svp_simple_001_001_isr_1_i + 1; 
        }

        __cs_local_svp_simple_001_001_isr_1_t_4 = __cs_local_svp_simple_001_001_isr_1_t_4 + 1; 
        if( ! ( ( __cs_local_svp_simple_001_001_isr_1_t_4 < 1 ) && ( __cs_local_svp_simple_001_001_isr_1_i <= 100 ) ) ){
            goto __exit_loop_4 ; 
        }
        
        {
            __cs_local_svp_simple_001_001_isr_1_loop_4_IOVar1 = __cs_local_svp_simple_001_001_isr_1_i; 
            __cs_local_svp_simple_001_001_isr_1_loop_4_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_001_001_isr_1_i = __cs_local_svp_simple_001_001_isr_1_loop_4_IOVar1 + ( 1 * __cs_local_svp_simple_001_001_isr_1_loop_4_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_001_001_isr_1_loop_4_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_001_001_isr_1_i <= 100 ); 
            {
            }

            __cs_local_svp_simple_001_001_isr_1_i = __cs_local_svp_simple_001_001_isr_1_i + 1; 
        }

        __cs_local_svp_simple_001_001_isr_1_t_4 = __cs_local_svp_simple_001_001_isr_1_t_4 + 1; 
        _Bool __cs_loop_4 = ( __cs_local_svp_simple_001_001_isr_1_t_4 < 1 ) && ( __cs_local_svp_simple_001_001_isr_1_i <= 100 ) ; 
addLabel();
        __VERIFIER_assume ( ! __cs_loop_4 ); 
        __exit_loop_4 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_svp_simple_001_001_isr_1_i <= 100 ) ); 
    }

    svp_simple_001_001_global_flag = 1; 
addLabel();
    svp_simple_001_001_global_var = 0; 
addLabel();
    svp_simple_001_001_global_var = 1; 
addLabel();
    enable_isr ( 2 ); 
addLabel();
    {
        int __cs_local_svp_simple_001_001_isr_1_i = 0 ; 
        __cs_local_svp_simple_001_001_isr_1_i = 0; 
        int __cs_local_svp_simple_001_001_isr_1_loop_5_IOVar1 ; 
        int __cs_local_svp_simple_001_001_isr_1_loop_5_block_1 ; 
        int __cs_local_svp_simple_001_001_isr_1_t_5 = 0 ; 
        if( ! ( ( __cs_local_svp_simple_001_001_isr_1_t_5 < 1 ) && ( __cs_local_svp_simple_001_001_isr_1_i <= 100 ) ) ){
            goto __exit_loop_5 ; 
        }
        
        {
            __cs_local_svp_simple_001_001_isr_1_loop_5_IOVar1 = __cs_local_svp_simple_001_001_isr_1_i; 
            __cs_local_svp_simple_001_001_isr_1_loop_5_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_001_001_isr_1_i = __cs_local_svp_simple_001_001_isr_1_loop_5_IOVar1 + ( 1 * __cs_local_svp_simple_001_001_isr_1_loop_5_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_001_001_isr_1_loop_5_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_001_001_isr_1_i <= 100 ); 
            {
            }

            __cs_local_svp_simple_001_001_isr_1_i = __cs_local_svp_simple_001_001_isr_1_i + 1; 
        }

        __cs_local_svp_simple_001_001_isr_1_t_5 = __cs_local_svp_simple_001_001_isr_1_t_5 + 1; 
        if( ! ( ( __cs_local_svp_simple_001_001_isr_1_t_5 < 1 ) && ( __cs_local_svp_simple_001_001_isr_1_i <= 100 ) ) ){
            goto __exit_loop_5 ; 
        }
        
        {
            __cs_local_svp_simple_001_001_isr_1_loop_5_IOVar1 = __cs_local_svp_simple_001_001_isr_1_i; 
            __cs_local_svp_simple_001_001_isr_1_loop_5_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_001_001_isr_1_i = __cs_local_svp_simple_001_001_isr_1_loop_5_IOVar1 + ( 1 * __cs_local_svp_simple_001_001_isr_1_loop_5_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_001_001_isr_1_loop_5_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_001_001_isr_1_i <= 100 ); 
            {
            }

            __cs_local_svp_simple_001_001_isr_1_i = __cs_local_svp_simple_001_001_isr_1_i + 1; 
        }

        __cs_local_svp_simple_001_001_isr_1_t_5 = __cs_local_svp_simple_001_001_isr_1_t_5 + 1; 
        _Bool __cs_loop_5 = ( __cs_local_svp_simple_001_001_isr_1_t_5 < 1 ) && ( __cs_local_svp_simple_001_001_isr_1_i <= 100 ) ; 
addLabel();
        __VERIFIER_assume ( ! __cs_loop_5 ); 
        __exit_loop_5 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_svp_simple_001_001_isr_1_i <= 100 ) ); 
    }

    __exit_svp_simple_001_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_001_001_isr_2_0( void * __cs_param_svp_simple_001_001_isr_2_arg ) {
addLabel();
    int __cs_local_svp_simple_001_001_isr_2_reader1 ; 
    int __cs_local_svp_simple_001_001_isr_2_reader3 ; 
    _Bool __cs_local_svp_simple_001_001_isr_2___cs_tmp_if_cond_1 ; 
    __cs_local_svp_simple_001_001_isr_2___cs_tmp_if_cond_1 = svp_simple_001_001_global_flag == 1; 
    if( __cs_local_svp_simple_001_001_isr_2___cs_tmp_if_cond_1 ){
        __cs_local_svp_simple_001_001_isr_2_reader1 = svp_simple_001_001_global_array [ 9999 ]; 
    }
    else {
        __cs_local_svp_simple_001_001_isr_2_reader1 = svp_simple_001_001_global_array [ 0 ]; 
    }

    __cs_local_svp_simple_001_001_isr_2_reader3 = svp_simple_001_001_global_array [ 1000 ]; 
    int __cs_local_svp_simple_001_001_isr_2_reader2 ; 
    __cs_local_svp_simple_001_001_isr_2_reader2 = svp_simple_001_001_global_var; 
    __exit_svp_simple_001_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
void idlerun(  ) {
    int __cs_local_idlerun_i = 0 ; 
    __cs_local_idlerun_i = 0; 
    int __cs_local_idlerun_loop_6_IOVar1 ; 
    int __cs_local_idlerun_loop_6_block_1 ; 
    int __cs_local_idlerun_t_6 = 0 ; 
    if( ! ( ( __cs_local_idlerun_t_6 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ) ){
        goto __exit_loop_6 ;; 
    }
    
    {
        __cs_local_idlerun_loop_6_IOVar1 = __cs_local_idlerun_i; 
        __cs_local_idlerun_loop_6_block_1 = nondet_int ( ); 
        __cs_local_idlerun_i = __cs_local_idlerun_loop_6_IOVar1 + ( 1 * __cs_local_idlerun_loop_6_block_1 ); 
        __CPROVER_assume ( __cs_local_idlerun_loop_6_block_1 >= 0 ); 
        __CPROVER_assume ( __cs_local_idlerun_i <= 100 ); 
        {
        }

        __cs_local_idlerun_i = __cs_local_idlerun_i + 1; 
    }

    __cs_local_idlerun_t_6 = __cs_local_idlerun_t_6 + 1; 
    if( ! ( ( __cs_local_idlerun_t_6 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ) ){
        goto __exit_loop_6 ;; 
    }
    
    {
        __cs_local_idlerun_loop_6_IOVar1 = __cs_local_idlerun_i; 
        __cs_local_idlerun_loop_6_block_1 = nondet_int ( ); 
        __cs_local_idlerun_i = __cs_local_idlerun_loop_6_IOVar1 + ( 1 * __cs_local_idlerun_loop_6_block_1 ); 
        __CPROVER_assume ( __cs_local_idlerun_loop_6_block_1 >= 0 ); 
        __CPROVER_assume ( __cs_local_idlerun_i <= 100 ); 
        {
        }

        __cs_local_idlerun_i = __cs_local_idlerun_i + 1; 
    }

    __cs_local_idlerun_t_6 = __cs_local_idlerun_t_6 + 1; 
    _Bool __cs_loop_6 = ( __cs_local_idlerun_t_6 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ; 
    __VERIFIER_assume ( ! __cs_loop_6 ); 
    __exit_loop_6 : 
    ; 
    __CPROVER_assume ( ! ( __cs_local_idlerun_i <= 100 ) ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    disable_isr ( 2 ); 
    {
        int __cs_local_main_task_i = 0 ; 
        __cs_local_main_task_i = 0; 
        int __cs_local_main_task_loop_1_IOVar1 ; 
        int __cs_local_main_task_loop_1_block_1 ; 
        int __cs_local_main_task_t_1 = 0 ; 
        if( ! ( ( __cs_local_main_task_t_1 < 1 ) && ( __cs_local_main_task_i <= 100 ) ) ){
            goto __exit_loop_1 ; 
        }
        
        {
            __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i; 
            __cs_local_main_task_loop_1_block_1 = nondet_int ( ); 
            __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_1 ); 
            __CPROVER_assume ( __cs_local_main_task_loop_1_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_main_task_i <= 100 ); 
            {
            }

            __cs_local_main_task_i = __cs_local_main_task_i + 1; 
        }

        __cs_local_main_task_t_1 = __cs_local_main_task_t_1 + 1; 
        if( ! ( ( __cs_local_main_task_t_1 < 1 ) && ( __cs_local_main_task_i <= 100 ) ) ){
            goto __exit_loop_1 ; 
        }
        
        {
            __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i; 
            __cs_local_main_task_loop_1_block_1 = nondet_int ( ); 
            __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_1 ); 
            __CPROVER_assume ( __cs_local_main_task_loop_1_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_main_task_i <= 100 ); 
            {
            }

            __cs_local_main_task_i = __cs_local_main_task_i + 1; 
        }

        __cs_local_main_task_t_1 = __cs_local_main_task_t_1 + 1; 
        _Bool __cs_loop_1 = ( __cs_local_main_task_t_1 < 1 ) && ( __cs_local_main_task_i <= 100 ) ; 
addLabel();
        __VERIFIER_assume ( ! __cs_loop_1 ); 
        __exit_loop_1 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_main_task_i <= 100 ) ); 
    }

    {
        int __cs_local_main_task_i ; 
        __cs_local_main_task_i = 0; 
        int __cs_local_main_task_loop_2_IOVar1 ; 
        int __cs_local_main_task_loop_2_block_1 ; 
        int __cs_local_main_task_t_2 = 0 ; 
        if( ! ( ( __cs_local_main_task_t_2 < 2 ) && ( __cs_local_main_task_i < 10000 ) ) ){
            goto __exit_loop_2 ; 
        }
        
        {
            __cs_local_main_task_loop_2_IOVar1 = __cs_local_main_task_i; 
            __cs_local_main_task_loop_2_block_1 = nondet_int ( ); 
            __cs_local_main_task_i = __cs_local_main_task_loop_2_IOVar1 + ( 1 * __cs_local_main_task_loop_2_block_1 ); 
            __CPROVER_assume ( __cs_local_main_task_loop_2_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_main_task_i < 10000 ); 
            {
                svp_simple_001_001_global_array [ __cs_local_main_task_i ] = 0; 
addLabel();
            }

            __cs_local_main_task_i = __cs_local_main_task_i + 1; 
        }

        __cs_local_main_task_t_2 = __cs_local_main_task_t_2 + 1; 
        if( ! ( ( __cs_local_main_task_t_2 < 2 ) && ( __cs_local_main_task_i < 10000 ) ) ){
            goto __exit_loop_2 ; 
        }
        
        {
            __cs_local_main_task_loop_2_IOVar1 = __cs_local_main_task_i; 
            __cs_local_main_task_loop_2_block_1 = nondet_int ( ); 
            __cs_local_main_task_i = __cs_local_main_task_loop_2_IOVar1 + ( 1 * __cs_local_main_task_loop_2_block_1 ); 
            __CPROVER_assume ( __cs_local_main_task_loop_2_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_main_task_i < 10000 ); 
            {
                svp_simple_001_001_global_array [ __cs_local_main_task_i ] = 0; 
addLabel();
            }

            __cs_local_main_task_i = __cs_local_main_task_i + 1; 
        }

        __cs_local_main_task_t_2 = __cs_local_main_task_t_2 + 1; 
        _Bool __cs_loop_2 = ( __cs_local_main_task_t_2 < 2 ) && ( __cs_local_main_task_i < 10000 ) ; 
addLabel();
        __VERIFIER_assume ( ! __cs_loop_2 ); 
        __exit_loop_2 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_main_task_i < 10000 ) ); 
    }

    {
        int __cs_local_main_task_i ; 
        __cs_local_main_task_i = 0; 
        int __cs_local_main_task_loop_3_IOVar1 ; 
        int __cs_local_main_task_loop_3_block_2 ; 
        int __cs_local_main_task_t_3 = 0 ; 
        if( ! ( ( __cs_local_main_task_t_3 < 2 ) && ( __cs_local_main_task_i < 10000 ) ) ){
            goto __exit_loop_3 ; 
        }
        
        {
            __cs_local_main_task_loop_3_IOVar1 = __cs_local_main_task_i; 
            __cs_local_main_task_loop_3_block_2 = nondet_int ( ); 
            __cs_local_main_task_i = __cs_local_main_task_loop_3_IOVar1 + ( 1 * __cs_local_main_task_loop_3_block_2 ); 
            __CPROVER_assume ( __cs_local_main_task_loop_3_block_2 >= 0 ); 
            __CPROVER_assume ( __cs_local_main_task_i < 10000 ); 
            {
                _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
                __cs_local_main_task___cs_tmp_if_cond_0 = __cs_local_main_task_i == 9999; 
                if( __cs_local_main_task___cs_tmp_if_cond_0 ){
                    svp_simple_001_001_global_array [ __cs_local_main_task_i ] = 1; 
addLabel();
                }
                
            }

            __cs_local_main_task_i = __cs_local_main_task_i + 1; 
        }

        __cs_local_main_task_t_3 = __cs_local_main_task_t_3 + 1; 
        if( ! ( ( __cs_local_main_task_t_3 < 2 ) && ( __cs_local_main_task_i < 10000 ) ) ){
            goto __exit_loop_3 ; 
        }
        
        {
            __cs_local_main_task_loop_3_IOVar1 = __cs_local_main_task_i; 
            __cs_local_main_task_loop_3_block_2 = nondet_int ( ); 
            __cs_local_main_task_i = __cs_local_main_task_loop_3_IOVar1 + ( 1 * __cs_local_main_task_loop_3_block_2 ); 
            __CPROVER_assume ( __cs_local_main_task_loop_3_block_2 >= 0 ); 
            __CPROVER_assume ( __cs_local_main_task_i < 10000 ); 
            {
                _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
                __cs_local_main_task___cs_tmp_if_cond_0 = __cs_local_main_task_i == 9999; 
                if( __cs_local_main_task___cs_tmp_if_cond_0 ){
                    svp_simple_001_001_global_array [ __cs_local_main_task_i ] = 1; 
addLabel();
                }
                
            }

            __cs_local_main_task_i = __cs_local_main_task_i + 1; 
        }

        __cs_local_main_task_t_3 = __cs_local_main_task_t_3 + 1; 
        _Bool __cs_loop_3 = ( __cs_local_main_task_t_3 < 2 ) && ( __cs_local_main_task_i < 10000 ) ; 
addLabel();
        __VERIFIER_assume ( ! __cs_loop_3 ); 
        __exit_loop_3 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_main_task_i < 10000 ) ); 
    }

    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_t __cs_local_main_t2 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_001_001_isr_1_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , svp_simple_001_001_isr_2_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
