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
void * svp_simple_015_001_isr_1_0( void * __cs_param_svp_simple_015_001_isr_1_arg ) {
addLabel();
    {
        int __cs_local_svp_simple_015_001_isr_1_i = 0 ; 
        __cs_local_svp_simple_015_001_isr_1_i = 0; 
        int __cs_local_svp_simple_015_001_isr_1_loop_1_IOVar1 ; 
        int __cs_local_svp_simple_015_001_isr_1_loop_1_block_1 ; 
        int __cs_local_svp_simple_015_001_isr_1_t_1 = 0 ; 
        if( ! ( ( __cs_local_svp_simple_015_001_isr_1_t_1 < 1 ) && ( __cs_local_svp_simple_015_001_isr_1_i <= 100 ) ) ){
            goto __exit_loop_1 ; 
        }
        
        {
            __cs_local_svp_simple_015_001_isr_1_loop_1_IOVar1 = __cs_local_svp_simple_015_001_isr_1_i; 
            __cs_local_svp_simple_015_001_isr_1_loop_1_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_015_001_isr_1_i = __cs_local_svp_simple_015_001_isr_1_loop_1_IOVar1 + ( 1 * __cs_local_svp_simple_015_001_isr_1_loop_1_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_015_001_isr_1_loop_1_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_015_001_isr_1_i <= 100 ); 
            {
            }

            __cs_local_svp_simple_015_001_isr_1_i = __cs_local_svp_simple_015_001_isr_1_i + 1; 
        }

        __cs_local_svp_simple_015_001_isr_1_t_1 = __cs_local_svp_simple_015_001_isr_1_t_1 + 1; 
        if( ! ( ( __cs_local_svp_simple_015_001_isr_1_t_1 < 1 ) && ( __cs_local_svp_simple_015_001_isr_1_i <= 100 ) ) ){
            goto __exit_loop_1 ; 
        }
        
        {
            __cs_local_svp_simple_015_001_isr_1_loop_1_IOVar1 = __cs_local_svp_simple_015_001_isr_1_i; 
            __cs_local_svp_simple_015_001_isr_1_loop_1_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_015_001_isr_1_i = __cs_local_svp_simple_015_001_isr_1_loop_1_IOVar1 + ( 1 * __cs_local_svp_simple_015_001_isr_1_loop_1_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_015_001_isr_1_loop_1_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_015_001_isr_1_i <= 100 ); 
            {
            }

            __cs_local_svp_simple_015_001_isr_1_i = __cs_local_svp_simple_015_001_isr_1_i + 1; 
        }

        __cs_local_svp_simple_015_001_isr_1_t_1 = __cs_local_svp_simple_015_001_isr_1_t_1 + 1; 
        _Bool __cs_loop_1 = ( __cs_local_svp_simple_015_001_isr_1_t_1 < 1 ) && ( __cs_local_svp_simple_015_001_isr_1_i <= 100 ) ; 
addLabel();
        __VERIFIER_assume ( ! __cs_loop_1 ); 
        __exit_loop_1 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_svp_simple_015_001_isr_1_i <= 100 ) ); 
    }

    svp_simple_015_001_global_var1 = 5; 
    svp_simple_015_001_global_var2 = 5; 
    __exit_svp_simple_015_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        enable_isr ( - 1 ); 
addLabel();
    }

    int __cs_local_main_task_x = nondet_rand ( ) ; 
    int __cs_local_main_task_y = nondet_rand ( ) ; 
    int __cs_local_main_task_z ; 
    int __cs_local_main_task_p = nondet_rand ( ) ; 
    _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
    __cs_local_main_task___cs_tmp_if_cond_0 = ( svp_simple_015_001_global_var1 < __cs_local_main_task_y ) && ( svp_simple_015_001_global_var1 > __cs_local_main_task_x ); 
    if( __cs_local_main_task___cs_tmp_if_cond_0 ){
        __cs_local_main_task_z = __cs_local_main_task_x + __cs_local_main_task_y; 
    }
    
    ( __cs_local_main_task_p == 1 ) ? ( svp_simple_015_001_global_var2 ) : ( svp_simple_015_001_global_var2 ); 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_015_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
