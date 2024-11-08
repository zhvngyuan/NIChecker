void init(  ) {
    enable_isr ( - 1 ); 
}
void idlerun(  ) {
    int __cs_local_idlerun_i = 0 ; 
    __cs_local_idlerun_i = 0; 
    int __cs_local_idlerun_loop_1_IOVar1 ; 
    int __cs_local_idlerun_loop_1_block_1 ; 
    int __cs_local_idlerun_t_1 = 0 ; 
    if( ! ( ( __cs_local_idlerun_t_1 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ) ){
        goto __exit_loop_1 ;; 
    }
    
    {
        __cs_local_idlerun_loop_1_IOVar1 = __cs_local_idlerun_i; 
        __cs_local_idlerun_loop_1_block_1 = nondet_int ( ); 
        __cs_local_idlerun_i = __cs_local_idlerun_loop_1_IOVar1 + ( 1 * __cs_local_idlerun_loop_1_block_1 ); 
        __CPROVER_assume ( __cs_local_idlerun_loop_1_block_1 >= 0 ); 
        __CPROVER_assume ( __cs_local_idlerun_i <= 100 ); 
        {
        }

        __cs_local_idlerun_i = __cs_local_idlerun_i + 1; 
    }

    __cs_local_idlerun_t_1 = __cs_local_idlerun_t_1 + 1; 
    if( ! ( ( __cs_local_idlerun_t_1 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ) ){
        goto __exit_loop_1 ;; 
    }
    
    {
        __cs_local_idlerun_loop_1_IOVar1 = __cs_local_idlerun_i; 
        __cs_local_idlerun_loop_1_block_1 = nondet_int ( ); 
        __cs_local_idlerun_i = __cs_local_idlerun_loop_1_IOVar1 + ( 1 * __cs_local_idlerun_loop_1_block_1 ); 
        __CPROVER_assume ( __cs_local_idlerun_loop_1_block_1 >= 0 ); 
        __CPROVER_assume ( __cs_local_idlerun_i <= 100 ); 
        {
        }

        __cs_local_idlerun_i = __cs_local_idlerun_i + 1; 
    }

    __cs_local_idlerun_t_1 = __cs_local_idlerun_t_1 + 1; 
    _Bool __cs_loop_1 = ( __cs_local_idlerun_t_1 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ; 
    __VERIFIER_assume ( ! __cs_loop_1 ); 
    __exit_loop_1 : 
    ; 
    __CPROVER_assume ( ! ( __cs_local_idlerun_i <= 100 ) ); 
}
void svp_simple_025_001_func_1( int * __cs_param_svp_simple_025_001_func_1_ptr_var ) {
    * __cs_param_svp_simple_025_001_func_1_ptr_var = ( * __cs_param_svp_simple_025_001_func_1_ptr_var ) + 1; 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        svp_simple_025_001_global_var = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
addLabel();
        }

    }

    {
        int * __cs_local_main_task_ptr_var = & svp_simple_025_001_global_var ; 
        int __cs_temporary_0 = 0 ; 
        __cs_temporary_0 = svp_simple_025_001_global_var + 1; 
addLabel();
        svp_simple_025_001_global_var = __cs_temporary_0; 
    }

    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_025_001_isr_1_0( void * __cs_param_svp_simple_025_001_isr_1_arg ) {
addLabel();
    svp_simple_025_001_global_var = nondet_rand ( ); 
    __exit_svp_simple_025_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void svp_simple_025_001_init(  ) {
    svp_simple_025_001_global_var = nondet_rand ( ); 
    {
        enable_isr ( - 1 ); 
    }

}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_025_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
