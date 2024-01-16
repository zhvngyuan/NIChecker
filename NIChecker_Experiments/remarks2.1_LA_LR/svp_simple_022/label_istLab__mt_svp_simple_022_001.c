void init(  ) {
    enable_isr ( - 1 ); 
}
void idlerun(  ) {
    int __cs_local_idlerun_i = 0 ; 
    __cs_local_idlerun_i = 0; 
    int __cs_local_idlerun_loop_2_IOVar1 ; 
    int __cs_local_idlerun_loop_2_block_1 ; 
    int __cs_local_idlerun_t_2 = 0 ; 
    if( ! ( ( __cs_local_idlerun_t_2 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ) ){
        goto __exit_loop_2 ;; 
    }
    
    {
        __cs_local_idlerun_loop_2_IOVar1 = __cs_local_idlerun_i; 
        __cs_local_idlerun_loop_2_block_1 = nondet_int ( ); 
        __cs_local_idlerun_i = __cs_local_idlerun_loop_2_IOVar1 + ( 1 * __cs_local_idlerun_loop_2_block_1 ); 
        __CPROVER_assume ( __cs_local_idlerun_loop_2_block_1 >= 0 ); 
        __CPROVER_assume ( __cs_local_idlerun_i <= 100 ); 
        {
        }

        __cs_local_idlerun_i = __cs_local_idlerun_i + 1; 
    }

    __cs_local_idlerun_t_2 = __cs_local_idlerun_t_2 + 1; 
    if( ! ( ( __cs_local_idlerun_t_2 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ) ){
        goto __exit_loop_2 ;; 
    }
    
    {
        __cs_local_idlerun_loop_2_IOVar1 = __cs_local_idlerun_i; 
        __cs_local_idlerun_loop_2_block_1 = nondet_int ( ); 
        __cs_local_idlerun_i = __cs_local_idlerun_loop_2_IOVar1 + ( 1 * __cs_local_idlerun_loop_2_block_1 ); 
        __CPROVER_assume ( __cs_local_idlerun_loop_2_block_1 >= 0 ); 
        __CPROVER_assume ( __cs_local_idlerun_i <= 100 ); 
        {
        }

        __cs_local_idlerun_i = __cs_local_idlerun_i + 1; 
    }

    __cs_local_idlerun_t_2 = __cs_local_idlerun_t_2 + 1; 
    _Bool __cs_loop_2 = ( __cs_local_idlerun_t_2 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ; 
    __VERIFIER_assume ( ! __cs_loop_2 ); 
    __exit_loop_2 : 
    ; 
    __CPROVER_assume ( ! ( __cs_local_idlerun_i <= 100 ) ); 
}
void svp_simple_022_001_func_2(  ) {
    {
        svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
    }

}
void svp_simple_022_001_init(  ) {
    svp_simple_022_001_global_var1 = nondet_rand ( ); 
    svp_simple_022_001_global_var2 = nondet_rand ( ); 
    svp_simple_022_001_global_var3 = nondet_rand ( ); 
    {
        enable_isr ( - 1 ); 
    }

}
void svp_simple_022_001_func_1(  ) {
    {
        _Bool __cs_local_svp_simple_022_001_func_1___cs_tmp_if_cond_1 ; 
        __cs_local_svp_simple_022_001_func_1___cs_tmp_if_cond_1 = svp_simple_022_001_global_var1 >= 12; 
        if( __cs_local_svp_simple_022_001_func_1___cs_tmp_if_cond_1 ){
            svp_simple_022_001_global_var1 = 12; 
        }
        else {
            svp_simple_022_001_global_var1 = 0; 
        }

    }

}
void * svp_simple_022_001_isr_1_0( void * __cs_param_svp_simple_022_001_isr_1_arg ) {
addLabel();
    svp_simple_022_001_global_var1 = nondet_rand ( ); 
    __exit_svp_simple_022_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void svp_simple_022_001_func_4(  ) {
    svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        svp_simple_022_001_global_var1 = nondet_rand ( ); 
        svp_simple_022_001_global_var2 = nondet_rand ( ); 
        svp_simple_022_001_global_var3 = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
addLabel();
        }

    }

    svp_simple_022_001_global_var1 = 0; 
    {
        {
            _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
            __cs_local_main_task___cs_tmp_if_cond_0 = svp_simple_022_001_global_var1 >= 12; 
addLabel();
            if( __cs_local_main_task___cs_tmp_if_cond_0 ){
                svp_simple_022_001_global_var1 = 12; 
            }
            else {
                svp_simple_022_001_global_var1 = 0; 
            }

        }

    }

    int __cs_local_main_task_i ; 
    __cs_local_main_task_i = 0; 
    int __cs_local_main_task_loop_1_IOVar1 ; 
    int __cs_local_main_task_loop_1_block_2 ; 
    int __cs_local_main_task_t_1 = 0 ; 
    if( ! ( ( __cs_local_main_task_t_1 < 2 ) && ( __cs_local_main_task_i < 256 ) ) ){
        goto __exit_loop_1 ; 
    }
    
    {
        __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i; 
        __cs_local_main_task_loop_1_block_2 = nondet_int ( ); 
        __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_2 ); 
        __CPROVER_assume ( __cs_local_main_task_loop_1_block_2 >= 0 ); 
        __CPROVER_assume ( __cs_local_main_task_i < 256 ); 
        {
            svp_simple_022_001_global_array [ __cs_local_main_task_i ] = 0; 
        }

        __cs_local_main_task_i = __cs_local_main_task_i + 1; 
    }

    __cs_local_main_task_t_1 = __cs_local_main_task_t_1 + 1; 
    if( ! ( ( __cs_local_main_task_t_1 < 2 ) && ( __cs_local_main_task_i < 256 ) ) ){
        goto __exit_loop_1 ; 
    }
    
    {
        __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i; 
        __cs_local_main_task_loop_1_block_2 = nondet_int ( ); 
        __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_2 ); 
        __CPROVER_assume ( __cs_local_main_task_loop_1_block_2 >= 0 ); 
        __CPROVER_assume ( __cs_local_main_task_i < 256 ); 
        {
            svp_simple_022_001_global_array [ __cs_local_main_task_i ] = 0; 
        }

        __cs_local_main_task_i = __cs_local_main_task_i + 1; 
    }

    __cs_local_main_task_t_1 = __cs_local_main_task_t_1 + 1; 
    _Bool __cs_loop_1 = ( __cs_local_main_task_t_1 < 2 ) && ( __cs_local_main_task_i < 256 ) ; 
addLabel();
    __VERIFIER_assume ( ! __cs_loop_1 ); 
    __exit_loop_1 : 
    ; 
    __CPROVER_assume ( ! ( __cs_local_main_task_i < 256 ) ); 
    {
        {
            svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
addLabel();
        }

    }

    svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
addLabel();
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void svp_simple_022_001_func_3(  ) {
    _Bool __cs_local_svp_simple_022_001_func_3___cs_tmp_if_cond_2 ; 
    __cs_local_svp_simple_022_001_func_3___cs_tmp_if_cond_2 = svp_simple_022_001_global_var1 >= 12; 
    if( __cs_local_svp_simple_022_001_func_3___cs_tmp_if_cond_2 ){
        svp_simple_022_001_global_var1 = 12; 
    }
    else {
        svp_simple_022_001_global_var1 = 0; 
    }

}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_022_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
