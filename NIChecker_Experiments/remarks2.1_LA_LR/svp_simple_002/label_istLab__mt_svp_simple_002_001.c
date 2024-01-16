void init(  ) {
    enable_isr ( - 1 ); 
}
void idlerun(  ) {
    int __cs_local_idlerun_i = 0 ; 
    __cs_local_idlerun_i = 0; 
    int __cs_local_idlerun_loop_4_IOVar1 ; 
    int __cs_local_idlerun_loop_4_block_1 ; 
    int __cs_local_idlerun_t_4 = 0 ; 
    if( ! ( ( __cs_local_idlerun_t_4 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ) ){
        goto __exit_loop_4 ;; 
    }
    
    {
        __cs_local_idlerun_loop_4_IOVar1 = __cs_local_idlerun_i; 
        __cs_local_idlerun_loop_4_block_1 = nondet_int ( ); 
        __cs_local_idlerun_i = __cs_local_idlerun_loop_4_IOVar1 + ( 1 * __cs_local_idlerun_loop_4_block_1 ); 
        __CPROVER_assume ( __cs_local_idlerun_loop_4_block_1 >= 0 ); 
        __CPROVER_assume ( __cs_local_idlerun_i <= 100 ); 
        {
        }

        __cs_local_idlerun_i = __cs_local_idlerun_i + 1; 
    }

    __cs_local_idlerun_t_4 = __cs_local_idlerun_t_4 + 1; 
    if( ! ( ( __cs_local_idlerun_t_4 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ) ){
        goto __exit_loop_4 ;; 
    }
    
    {
        __cs_local_idlerun_loop_4_IOVar1 = __cs_local_idlerun_i; 
        __cs_local_idlerun_loop_4_block_1 = nondet_int ( ); 
        __cs_local_idlerun_i = __cs_local_idlerun_loop_4_IOVar1 + ( 1 * __cs_local_idlerun_loop_4_block_1 ); 
        __CPROVER_assume ( __cs_local_idlerun_loop_4_block_1 >= 0 ); 
        __CPROVER_assume ( __cs_local_idlerun_i <= 100 ); 
        {
        }

        __cs_local_idlerun_i = __cs_local_idlerun_i + 1; 
    }

    __cs_local_idlerun_t_4 = __cs_local_idlerun_t_4 + 1; 
    _Bool __cs_loop_4 = ( __cs_local_idlerun_t_4 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ; 
    __VERIFIER_assume ( ! __cs_loop_4 ); 
    __exit_loop_4 : 
    ; 
    __CPROVER_assume ( ! ( __cs_local_idlerun_i <= 100 ) ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        enable_isr ( - 1 ); 
addLabel();
    }

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

    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_002_001_isr_1_0( void * __cs_param_svp_simple_002_001_isr_1_arg ) {
addLabel();
    int __cs_local_svp_simple_002_001_isr_1_mininum ; 
    int __cs_local_svp_simple_002_001_isr_1_maxnum ; 
    {
        int __cs_local_svp_simple_002_001_isr_1_i ; 
        __cs_local_svp_simple_002_001_isr_1_i = 0; 
        int __cs_local_svp_simple_002_001_isr_1_loop_2_IOVar1 ; 
        int __cs_local_svp_simple_002_001_isr_1_loop_2_block_3 ; 
        int __cs_local_svp_simple_002_001_isr_1_t_2 = 0 ; 
        if( ! ( ( __cs_local_svp_simple_002_001_isr_1_t_2 < 2 ) && ( __cs_local_svp_simple_002_001_isr_1_i < 10000 ) ) ){
            goto __exit_loop_2 ; 
        }
        
        {
            __cs_local_svp_simple_002_001_isr_1_loop_2_IOVar1 = __cs_local_svp_simple_002_001_isr_1_i; 
            __cs_local_svp_simple_002_001_isr_1_loop_2_block_3 = nondet_int ( ); 
            __cs_local_svp_simple_002_001_isr_1_i = __cs_local_svp_simple_002_001_isr_1_loop_2_IOVar1 + ( 1 * __cs_local_svp_simple_002_001_isr_1_loop_2_block_3 ); 
            __CPROVER_assume ( __cs_local_svp_simple_002_001_isr_1_loop_2_block_3 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_002_001_isr_1_i < 10000 ); 
            {
                _Bool __cs_local_svp_simple_002_001_isr_1___cs_tmp_if_cond_0 ; 
                __cs_local_svp_simple_002_001_isr_1___cs_tmp_if_cond_0 = __cs_local_svp_simple_002_001_isr_1_i == 9999; 
                if( __cs_local_svp_simple_002_001_isr_1___cs_tmp_if_cond_0 ){
                    svp_simple_002_001_global_array [ 9999 ] = 1; 
addLabel();
                }
                
                _Bool __cs_local_svp_simple_002_001_isr_1___cs_tmp_if_cond_1 ; 
                __cs_local_svp_simple_002_001_isr_1___cs_tmp_if_cond_1 = __cs_local_svp_simple_002_001_isr_1_i == 10001; 
                if( __cs_local_svp_simple_002_001_isr_1___cs_tmp_if_cond_1 ){
                    svp_simple_002_001_global_array [ 9999 ] = 1; 
addLabel();
                }
                
            }

            __cs_local_svp_simple_002_001_isr_1_i = __cs_local_svp_simple_002_001_isr_1_i + 1; 
        }

        __cs_local_svp_simple_002_001_isr_1_t_2 = __cs_local_svp_simple_002_001_isr_1_t_2 + 1; 
        if( ! ( ( __cs_local_svp_simple_002_001_isr_1_t_2 < 2 ) && ( __cs_local_svp_simple_002_001_isr_1_i < 10000 ) ) ){
            goto __exit_loop_2 ; 
        }
        
        {
            __cs_local_svp_simple_002_001_isr_1_loop_2_IOVar1 = __cs_local_svp_simple_002_001_isr_1_i; 
            __cs_local_svp_simple_002_001_isr_1_loop_2_block_3 = nondet_int ( ); 
            __cs_local_svp_simple_002_001_isr_1_i = __cs_local_svp_simple_002_001_isr_1_loop_2_IOVar1 + ( 1 * __cs_local_svp_simple_002_001_isr_1_loop_2_block_3 ); 
            __CPROVER_assume ( __cs_local_svp_simple_002_001_isr_1_loop_2_block_3 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_002_001_isr_1_i < 10000 ); 
            {
                _Bool __cs_local_svp_simple_002_001_isr_1___cs_tmp_if_cond_0 ; 
                __cs_local_svp_simple_002_001_isr_1___cs_tmp_if_cond_0 = __cs_local_svp_simple_002_001_isr_1_i == 9999; 
                if( __cs_local_svp_simple_002_001_isr_1___cs_tmp_if_cond_0 ){
                    svp_simple_002_001_global_array [ 9999 ] = 1; 
addLabel();
                }
                
                _Bool __cs_local_svp_simple_002_001_isr_1___cs_tmp_if_cond_1 ; 
                __cs_local_svp_simple_002_001_isr_1___cs_tmp_if_cond_1 = __cs_local_svp_simple_002_001_isr_1_i == 10001; 
                if( __cs_local_svp_simple_002_001_isr_1___cs_tmp_if_cond_1 ){
                    svp_simple_002_001_global_array [ 9999 ] = 1; 
addLabel();
                }
                
            }

            __cs_local_svp_simple_002_001_isr_1_i = __cs_local_svp_simple_002_001_isr_1_i + 1; 
        }

        __cs_local_svp_simple_002_001_isr_1_t_2 = __cs_local_svp_simple_002_001_isr_1_t_2 + 1; 
        _Bool __cs_loop_2 = ( __cs_local_svp_simple_002_001_isr_1_t_2 < 2 ) && ( __cs_local_svp_simple_002_001_isr_1_i < 10000 ) ; 
addLabel();
        __VERIFIER_assume ( ! __cs_loop_2 ); 
        __exit_loop_2 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_svp_simple_002_001_isr_1_i < 10000 ) ); 
    }

    __cs_local_svp_simple_002_001_isr_1_mininum = svp_simple_002_001_global_array [ 9999 ] - 10; 
    __cs_local_svp_simple_002_001_isr_1_maxnum = svp_simple_002_001_global_array [ 0 ] + 10; 
    __exit_svp_simple_002_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_002_001_isr_2_0( void * __cs_param_svp_simple_002_001_isr_2_arg ) {
addLabel();
    {
        int __cs_local_svp_simple_002_001_isr_2_i = 0 ; 
        __cs_local_svp_simple_002_001_isr_2_i = 0; 
        int __cs_local_svp_simple_002_001_isr_2_loop_3_IOVar1 ; 
        int __cs_local_svp_simple_002_001_isr_2_loop_3_block_1 ; 
        int __cs_local_svp_simple_002_001_isr_2_t_3 = 0 ; 
        if( ! ( ( __cs_local_svp_simple_002_001_isr_2_t_3 < 1 ) && ( __cs_local_svp_simple_002_001_isr_2_i <= 100 ) ) ){
            goto __exit_loop_3 ; 
        }
        
        {
            __cs_local_svp_simple_002_001_isr_2_loop_3_IOVar1 = __cs_local_svp_simple_002_001_isr_2_i; 
            __cs_local_svp_simple_002_001_isr_2_loop_3_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_002_001_isr_2_i = __cs_local_svp_simple_002_001_isr_2_loop_3_IOVar1 + ( 1 * __cs_local_svp_simple_002_001_isr_2_loop_3_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_002_001_isr_2_loop_3_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_002_001_isr_2_i <= 100 ); 
            {
            }

            __cs_local_svp_simple_002_001_isr_2_i = __cs_local_svp_simple_002_001_isr_2_i + 1; 
        }

        __cs_local_svp_simple_002_001_isr_2_t_3 = __cs_local_svp_simple_002_001_isr_2_t_3 + 1; 
        if( ! ( ( __cs_local_svp_simple_002_001_isr_2_t_3 < 1 ) && ( __cs_local_svp_simple_002_001_isr_2_i <= 100 ) ) ){
            goto __exit_loop_3 ; 
        }
        
        {
            __cs_local_svp_simple_002_001_isr_2_loop_3_IOVar1 = __cs_local_svp_simple_002_001_isr_2_i; 
            __cs_local_svp_simple_002_001_isr_2_loop_3_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_002_001_isr_2_i = __cs_local_svp_simple_002_001_isr_2_loop_3_IOVar1 + ( 1 * __cs_local_svp_simple_002_001_isr_2_loop_3_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_002_001_isr_2_loop_3_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_002_001_isr_2_i <= 100 ); 
            {
            }

            __cs_local_svp_simple_002_001_isr_2_i = __cs_local_svp_simple_002_001_isr_2_i + 1; 
        }

        __cs_local_svp_simple_002_001_isr_2_t_3 = __cs_local_svp_simple_002_001_isr_2_t_3 + 1; 
        _Bool __cs_loop_3 = ( __cs_local_svp_simple_002_001_isr_2_t_3 < 1 ) && ( __cs_local_svp_simple_002_001_isr_2_i <= 100 ) ; 
addLabel();
        __VERIFIER_assume ( ! __cs_loop_3 ); 
        __exit_loop_3 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_svp_simple_002_001_isr_2_i <= 100 ) ); 
    }

    svp_simple_002_001_global_array [ 9999 ] = 999; 
addLabel();
    __exit_svp_simple_002_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_t __cs_local_main_t2 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_002_001_isr_1_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , svp_simple_002_001_isr_2_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
