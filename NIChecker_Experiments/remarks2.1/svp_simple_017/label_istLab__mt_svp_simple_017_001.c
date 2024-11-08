void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        enable_isr ( - 1 ); 
addLabel();
    }

    int __cs_local_main_task_i = 0 ; 
    svp_simple_017_001_global_var = 0; 
    int __cs_local_main_task_loop_1_IOVar1 ; 
    int __cs_local_main_task_loop_1_block_2 ; 
    int __cs_local_main_task_t = 0 ; 
    if( ! ( ( __cs_local_main_task_t < 2 ) && ( svp_simple_017_001_global_var < 100 ) ) ){
        goto __exit_loop_1 ; 
    }
    
    {
        __cs_local_main_task_loop_1_IOVar1 = svp_simple_017_001_global_var; 
        __cs_local_main_task_loop_1_block_2 = nondet_int ( ); 
        svp_simple_017_001_global_var = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_2 ); 
        __CPROVER_assume ( __cs_local_main_task_loop_1_block_2 >= 0 ); 
        __CPROVER_assume ( svp_simple_017_001_global_var < 100 ); 
        {
            svp_simple_017_001_local_array [ svp_simple_017_001_global_var ] = __cs_local_main_task_i ++; 
        }

        svp_simple_017_001_global_var = svp_simple_017_001_global_var + 1; 
    }

    __cs_local_main_task_t = __cs_local_main_task_t + 1; 
    if( ! ( ( __cs_local_main_task_t < 2 ) && ( svp_simple_017_001_global_var < 100 ) ) ){
        goto __exit_loop_1 ; 
    }
    
    {
        __cs_local_main_task_loop_1_IOVar1 = svp_simple_017_001_global_var; 
        __cs_local_main_task_loop_1_block_2 = nondet_int ( ); 
        svp_simple_017_001_global_var = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_2 ); 
        __CPROVER_assume ( __cs_local_main_task_loop_1_block_2 >= 0 ); 
        __CPROVER_assume ( svp_simple_017_001_global_var < 100 ); 
        {
            svp_simple_017_001_local_array [ svp_simple_017_001_global_var ] = __cs_local_main_task_i ++; 
        }

        svp_simple_017_001_global_var = svp_simple_017_001_global_var + 1; 
    }

    __cs_local_main_task_t = __cs_local_main_task_t + 1; 
    _Bool __cs_loop_1 = ( __cs_local_main_task_t < 2 ) && ( svp_simple_017_001_global_var < 100 ) ; 
    __VERIFIER_assume ( ! __cs_loop_1 ); 
    __exit_loop_1 : 
    ; 
    __CPROVER_assume ( ! ( svp_simple_017_001_global_var < 100 ) ); 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_017_001_isr_1_0( void * __cs_param_svp_simple_017_001_isr_1_arg ) {
addLabel();
    {
        int __cs_local_svp_simple_017_001_isr_1_i = 0 ; 
    }

    svp_simple_017_001_global_var = 50; 
    svp_simple_017_001_local_array [ 50 ] = 0; 
    __exit_svp_simple_017_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_017_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
