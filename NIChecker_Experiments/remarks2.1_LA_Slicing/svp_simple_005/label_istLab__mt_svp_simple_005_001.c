void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        enable_isr ( - 1 ); 
addLabel();
    }

    {
        int __cs_local_main_task_i ; 
        __cs_local_main_task_i = 0; 
        int __cs_local_main_task_loop_1_IOVar1 ; 
        int __cs_local_main_task_loop_1_block_2 ; 
        int __cs_local_main_task_t = 0 ; 
        if( ! ( ( __cs_local_main_task_t < 2 ) && ( __cs_local_main_task_i < 10000 ) ) ){
            goto __exit_loop_1 ; 
        }
        
        {
            __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i; 
            __cs_local_main_task_loop_1_block_2 = nondet_int ( ); 
            __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_2 ); 
            __CPROVER_assume ( __cs_local_main_task_loop_1_block_2 >= 0 ); 
            __CPROVER_assume ( __cs_local_main_task_i < 10000 ); 
            {
                {
                    int __cs_local_main_task_j ; 
                    __cs_local_main_task_j = 0; 
                    int __cs_local_main_task_loop_2_IOVar1 ; 
                    int __cs_local_main_task_loop_2_block_2 ; 
                    int __cs_local_main_task_t = 0 ; 
                    if( ! ( ( __cs_local_main_task_t < 2 ) && ( __cs_local_main_task_j < 10000 ) ) ){
                        goto __exit_loop_2 ; 
                    }
                    
                    {
                        __cs_local_main_task_loop_2_IOVar1 = __cs_local_main_task_j; 
                        __cs_local_main_task_loop_2_block_2 = nondet_int ( ); 
                        __cs_local_main_task_j = __cs_local_main_task_loop_2_IOVar1 + ( 1 * __cs_local_main_task_loop_2_block_2 ); 
                        __CPROVER_assume ( __cs_local_main_task_loop_2_block_2 >= 0 ); 
                        __CPROVER_assume ( __cs_local_main_task_j < 10000 ); 
                        {
                            _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
                            __cs_local_main_task___cs_tmp_if_cond_0 = ( __cs_local_main_task_i == 9999 ) && ( __cs_local_main_task_j == 1000 ); 
                            if( __cs_local_main_task___cs_tmp_if_cond_0 ){
                                svp_simple_005_001_global_var = 0x01; 
addLabel();
                            }
                            
                        }

                        __cs_local_main_task_j = __cs_local_main_task_j + 1; 
                    }

                    __cs_local_main_task_t = __cs_local_main_task_t + 1; 
                    if( ! ( ( __cs_local_main_task_t < 2 ) && ( __cs_local_main_task_j < 10000 ) ) ){
                        goto __exit_loop_2 ; 
                    }
                    
                    {
                        __cs_local_main_task_loop_2_IOVar1 = __cs_local_main_task_j; 
                        __cs_local_main_task_loop_2_block_2 = nondet_int ( ); 
                        __cs_local_main_task_j = __cs_local_main_task_loop_2_IOVar1 + ( 1 * __cs_local_main_task_loop_2_block_2 ); 
                        __CPROVER_assume ( __cs_local_main_task_loop_2_block_2 >= 0 ); 
                        __CPROVER_assume ( __cs_local_main_task_j < 10000 ); 
                        {
                            _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
                            __cs_local_main_task___cs_tmp_if_cond_0 = ( __cs_local_main_task_i == 9999 ) && ( __cs_local_main_task_j == 1000 ); 
                            if( __cs_local_main_task___cs_tmp_if_cond_0 ){
                                svp_simple_005_001_global_var = 0x01; 
addLabel();
                            }
                            
                        }

                        __cs_local_main_task_j = __cs_local_main_task_j + 1; 
                    }

                    __cs_local_main_task_t = __cs_local_main_task_t + 1; 
                    _Bool __cs_loop_2 = ( __cs_local_main_task_t < 2 ) && ( __cs_local_main_task_j < 10000 ) ; 
                    __VERIFIER_assume ( ! __cs_loop_2 ); 
                    __exit_loop_2 : 
                    ; 
                    __CPROVER_assume ( ! ( __cs_local_main_task_j < 10000 ) ); 
                }

            }

            __cs_local_main_task_i = __cs_local_main_task_i + 1; 
        }

        __cs_local_main_task_t = __cs_local_main_task_t + 1; 
        if( ! ( ( __cs_local_main_task_t < 2 ) && ( __cs_local_main_task_i < 10000 ) ) ){
            goto __exit_loop_1 ; 
        }
        
        {
            __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i; 
            __cs_local_main_task_loop_1_block_2 = nondet_int ( ); 
            __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_2 ); 
            __CPROVER_assume ( __cs_local_main_task_loop_1_block_2 >= 0 ); 
            __CPROVER_assume ( __cs_local_main_task_i < 10000 ); 
            {
                {
                    int __cs_local_main_task_j ; 
                    __cs_local_main_task_j = 0; 
                    int __cs_local_main_task_loop_2_IOVar1 ; 
                    int __cs_local_main_task_loop_2_block_2 ; 
                    int __cs_local_main_task_t = 0 ; 
                    if( ! ( ( __cs_local_main_task_t < 2 ) && ( __cs_local_main_task_j < 10000 ) ) ){
                        goto __exit_loop_3 ; 
                    }
                    
                    {
                        __cs_local_main_task_loop_2_IOVar1 = __cs_local_main_task_j; 
                        __cs_local_main_task_loop_2_block_2 = nondet_int ( ); 
                        __cs_local_main_task_j = __cs_local_main_task_loop_2_IOVar1 + ( 1 * __cs_local_main_task_loop_2_block_2 ); 
                        __CPROVER_assume ( __cs_local_main_task_loop_2_block_2 >= 0 ); 
                        __CPROVER_assume ( __cs_local_main_task_j < 10000 ); 
                        {
                            _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
                            __cs_local_main_task___cs_tmp_if_cond_0 = ( __cs_local_main_task_i == 9999 ) && ( __cs_local_main_task_j == 1000 ); 
                            if( __cs_local_main_task___cs_tmp_if_cond_0 ){
                                svp_simple_005_001_global_var = 0x01; 
addLabel();
                            }
                            
                        }

                        __cs_local_main_task_j = __cs_local_main_task_j + 1; 
                    }

                    __cs_local_main_task_t = __cs_local_main_task_t + 1; 
                    if( ! ( ( __cs_local_main_task_t < 2 ) && ( __cs_local_main_task_j < 10000 ) ) ){
                        goto __exit_loop_3 ; 
                    }
                    
                    {
                        __cs_local_main_task_loop_2_IOVar1 = __cs_local_main_task_j; 
                        __cs_local_main_task_loop_2_block_2 = nondet_int ( ); 
                        __cs_local_main_task_j = __cs_local_main_task_loop_2_IOVar1 + ( 1 * __cs_local_main_task_loop_2_block_2 ); 
                        __CPROVER_assume ( __cs_local_main_task_loop_2_block_2 >= 0 ); 
                        __CPROVER_assume ( __cs_local_main_task_j < 10000 ); 
                        {
                            _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
                            __cs_local_main_task___cs_tmp_if_cond_0 = ( __cs_local_main_task_i == 9999 ) && ( __cs_local_main_task_j == 1000 ); 
                            if( __cs_local_main_task___cs_tmp_if_cond_0 ){
                                svp_simple_005_001_global_var = 0x01; 
addLabel();
                            }
                            
                        }

                        __cs_local_main_task_j = __cs_local_main_task_j + 1; 
                    }

                    __cs_local_main_task_t = __cs_local_main_task_t + 1; 
                    _Bool __cs_loop_3 = ( __cs_local_main_task_t < 2 ) && ( __cs_local_main_task_j < 10000 ) ; 
                    __VERIFIER_assume ( ! __cs_loop_3 ); 
                    __exit_loop_3 : 
                    ; 
                    __CPROVER_assume ( ! ( __cs_local_main_task_j < 10000 ) ); 
                }

            }

            __cs_local_main_task_i = __cs_local_main_task_i + 1; 
        }

        __cs_local_main_task_t = __cs_local_main_task_t + 1; 
        _Bool __cs_loop_1 = ( __cs_local_main_task_t < 2 ) && ( __cs_local_main_task_i < 10000 ) ; 
        __VERIFIER_assume ( ! __cs_loop_1 ); 
        __exit_loop_1 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_main_task_i < 10000 ) ); 
    }

    _Bool __cs_local_main_task___cs_tmp_if_cond_1 ; 
    __cs_local_main_task___cs_tmp_if_cond_1 = svp_simple_005_001_global_condition == 1; 
    if( __cs_local_main_task___cs_tmp_if_cond_1 ){
        svp_simple_005_001_global_var = 0x09; 
addLabel();
    }
    
    svp_simple_005_001_global_var = 0x05; 
addLabel();
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_005_001_isr_1_0( void * __cs_param_svp_simple_005_001_isr_1_arg ) {
addLabel();
    {
        int __cs_local_svp_simple_005_001_isr_1_i = 0 ; 
    }

    int __cs_local_svp_simple_005_001_isr_1_reader ; 
    __cs_local_svp_simple_005_001_isr_1_reader = svp_simple_005_001_global_var; 
    __exit_svp_simple_005_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_005_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
