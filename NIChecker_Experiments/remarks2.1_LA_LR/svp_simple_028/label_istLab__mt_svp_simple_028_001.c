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
void svp_simple_028_001_init(  ) {
    svp_simple_028_001_gloable_var = nondet_rand ( ); 
    svp_simple_028_001_isr_1_flag = nondet_rand ( ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    disable_isr ( - 1 ); 
    {
        svp_simple_028_001_gloable_var = nondet_rand ( ); 
addLabel();
        svp_simple_028_001_isr_1_flag = nondet_rand ( ); 
addLabel();
    }

    disable_isr ( - 1 ); 
    enable_isr ( 1 ); 
addLabel();
    _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
    __cs_local_main_task___cs_tmp_if_cond_0 = svp_simple_028_001_gloable_var > 12; 
addLabel();
    if( __cs_local_main_task___cs_tmp_if_cond_0 ){
        svp_simple_028_001_gloable_var = 0; 
addLabel();
    }
    
    goto __exit_main_task ; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_028_001_isr_2_0( void * __cs_param_svp_simple_028_001_isr_2_arg ) {
addLabel();
    _Bool __cs_local_svp_simple_028_001_isr_2___cs_tmp_if_cond_1 ; 
    __cs_local_svp_simple_028_001_isr_2___cs_tmp_if_cond_1 = svp_simple_028_001_isr_1_flag; 
    if( __cs_local_svp_simple_028_001_isr_2___cs_tmp_if_cond_1 ){
        int __cs_temporary_0 = 0 ; 
addLabel();
        __cs_temporary_0 = svp_simple_028_001_gloable_var + 1; 
addLabel();
        svp_simple_028_001_gloable_var = __cs_temporary_0; 
addLabel();
    }
    
    __exit_svp_simple_028_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_028_001_isr_3_0( void * __cs_param_svp_simple_028_001_isr_3_arg ) {
addLabel();
    int __cs_temporary_0 = 0 ; 
    __cs_temporary_0 = svp_simple_028_001_gloable_var + 1; 
addLabel();
    svp_simple_028_001_gloable_var = __cs_temporary_0; 
    __exit_svp_simple_028_001_isr_3 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_028_001_isr_1_0( void * __cs_param_svp_simple_028_001_isr_1_arg ) {
addLabel();
    int __cs_temporary_0 = 0 ; 
addLabel();
    __cs_temporary_0 = svp_simple_028_001_gloable_var + 1; 
addLabel();
    svp_simple_028_001_gloable_var = __cs_temporary_0; 
addLabel();
    svp_simple_028_001_isr_1_flag = 0; 
addLabel();
    enable_isr ( 2 ); 
addLabel();
    __exit_svp_simple_028_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_t __cs_local_main_t2 ; 
    pthread_t __cs_local_main_t3 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_028_001_isr_1_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , svp_simple_028_001_isr_2_0 , 0 ); 
    pthread_create ( & __cs_local_main_t3 , 0 , svp_simple_028_001_isr_3_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
