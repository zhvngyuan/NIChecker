void init(  ) {
    enable_isr ( - 1 ); 
}
void * svp_simple_018_001_isr_2_0( void * __cs_param_svp_simple_018_001_isr_2_arg ) {
addLabel();
    {
        int __cs_local_svp_simple_018_001_isr_2_i = 0 ; 
        __cs_local_svp_simple_018_001_isr_2_i = 0; 
        int __cs_local_svp_simple_018_001_isr_2_loop_2_IOVar1 ; 
        int __cs_local_svp_simple_018_001_isr_2_loop_2_block_1 ; 
        int __cs_local_svp_simple_018_001_isr_2_t_2 = 0 ; 
        if( ! ( ( __cs_local_svp_simple_018_001_isr_2_t_2 < 1 ) && ( __cs_local_svp_simple_018_001_isr_2_i <= 100 ) ) ){
            goto __exit_loop_2 ; 
        }
        
        {
            __cs_local_svp_simple_018_001_isr_2_loop_2_IOVar1 = __cs_local_svp_simple_018_001_isr_2_i; 
            __cs_local_svp_simple_018_001_isr_2_loop_2_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_018_001_isr_2_i = __cs_local_svp_simple_018_001_isr_2_loop_2_IOVar1 + ( 1 * __cs_local_svp_simple_018_001_isr_2_loop_2_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_018_001_isr_2_loop_2_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_018_001_isr_2_i <= 100 ); 
            {
            }

            __cs_local_svp_simple_018_001_isr_2_i = __cs_local_svp_simple_018_001_isr_2_i + 1; 
        }

        __cs_local_svp_simple_018_001_isr_2_t_2 = __cs_local_svp_simple_018_001_isr_2_t_2 + 1; 
        if( ! ( ( __cs_local_svp_simple_018_001_isr_2_t_2 < 1 ) && ( __cs_local_svp_simple_018_001_isr_2_i <= 100 ) ) ){
            goto __exit_loop_2 ; 
        }
        
        {
            __cs_local_svp_simple_018_001_isr_2_loop_2_IOVar1 = __cs_local_svp_simple_018_001_isr_2_i; 
            __cs_local_svp_simple_018_001_isr_2_loop_2_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_018_001_isr_2_i = __cs_local_svp_simple_018_001_isr_2_loop_2_IOVar1 + ( 1 * __cs_local_svp_simple_018_001_isr_2_loop_2_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_018_001_isr_2_loop_2_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_018_001_isr_2_i <= 100 ); 
            {
            }

            __cs_local_svp_simple_018_001_isr_2_i = __cs_local_svp_simple_018_001_isr_2_i + 1; 
        }

        __cs_local_svp_simple_018_001_isr_2_t_2 = __cs_local_svp_simple_018_001_isr_2_t_2 + 1; 
        _Bool __cs_loop_2 = ( __cs_local_svp_simple_018_001_isr_2_t_2 < 1 ) && ( __cs_local_svp_simple_018_001_isr_2_i <= 100 ) ; 
addLabel();
        __VERIFIER_assume ( ! __cs_loop_2 ); 
        __exit_loop_2 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_svp_simple_018_001_isr_2_i <= 100 ) ); 
    }

    {
        svp_simple_018_001_para2 = 1.0; 
    }

    __exit_svp_simple_018_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_018_001_isr_1_0( void * __cs_param_svp_simple_018_001_isr_1_arg ) {
addLabel();
    {
        int __cs_local_svp_simple_018_001_isr_1_i = 0 ; 
        __cs_local_svp_simple_018_001_isr_1_i = 0; 
        int __cs_local_svp_simple_018_001_isr_1_loop_1_IOVar1 ; 
        int __cs_local_svp_simple_018_001_isr_1_loop_1_block_1 ; 
        int __cs_local_svp_simple_018_001_isr_1_t_1 = 0 ; 
        if( ! ( ( __cs_local_svp_simple_018_001_isr_1_t_1 < 1 ) && ( __cs_local_svp_simple_018_001_isr_1_i <= 100 ) ) ){
            goto __exit_loop_1 ; 
        }
        
        {
            __cs_local_svp_simple_018_001_isr_1_loop_1_IOVar1 = __cs_local_svp_simple_018_001_isr_1_i; 
            __cs_local_svp_simple_018_001_isr_1_loop_1_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_018_001_isr_1_i = __cs_local_svp_simple_018_001_isr_1_loop_1_IOVar1 + ( 1 * __cs_local_svp_simple_018_001_isr_1_loop_1_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_018_001_isr_1_loop_1_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_018_001_isr_1_i <= 100 ); 
            {
            }

            __cs_local_svp_simple_018_001_isr_1_i = __cs_local_svp_simple_018_001_isr_1_i + 1; 
        }

        __cs_local_svp_simple_018_001_isr_1_t_1 = __cs_local_svp_simple_018_001_isr_1_t_1 + 1; 
        if( ! ( ( __cs_local_svp_simple_018_001_isr_1_t_1 < 1 ) && ( __cs_local_svp_simple_018_001_isr_1_i <= 100 ) ) ){
            goto __exit_loop_1 ; 
        }
        
        {
            __cs_local_svp_simple_018_001_isr_1_loop_1_IOVar1 = __cs_local_svp_simple_018_001_isr_1_i; 
            __cs_local_svp_simple_018_001_isr_1_loop_1_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_018_001_isr_1_i = __cs_local_svp_simple_018_001_isr_1_loop_1_IOVar1 + ( 1 * __cs_local_svp_simple_018_001_isr_1_loop_1_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_018_001_isr_1_loop_1_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_018_001_isr_1_i <= 100 ); 
            {
            }

            __cs_local_svp_simple_018_001_isr_1_i = __cs_local_svp_simple_018_001_isr_1_i + 1; 
        }

        __cs_local_svp_simple_018_001_isr_1_t_1 = __cs_local_svp_simple_018_001_isr_1_t_1 + 1; 
        _Bool __cs_loop_1 = ( __cs_local_svp_simple_018_001_isr_1_t_1 < 1 ) && ( __cs_local_svp_simple_018_001_isr_1_i <= 100 ) ; 
addLabel();
        __VERIFIER_assume ( ! __cs_loop_1 ); 
        __exit_loop_1 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_svp_simple_018_001_isr_1_i <= 100 ) ); 
    }

    svp_simple_018_001_para1 = 2.0; 
    __exit_svp_simple_018_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void idlerun(  ) {
    int __cs_local_idlerun_i = 0 ; 
    __cs_local_idlerun_i = 0; 
    int __cs_local_idlerun_loop_3_IOVar1 ; 
    int __cs_local_idlerun_loop_3_block_1 ; 
    int __cs_local_idlerun_t_3 = 0 ; 
    if( ! ( ( __cs_local_idlerun_t_3 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ) ){
        goto __exit_loop_3 ;; 
    }
    
    {
        __cs_local_idlerun_loop_3_IOVar1 = __cs_local_idlerun_i; 
        __cs_local_idlerun_loop_3_block_1 = nondet_int ( ); 
        __cs_local_idlerun_i = __cs_local_idlerun_loop_3_IOVar1 + ( 1 * __cs_local_idlerun_loop_3_block_1 ); 
        __CPROVER_assume ( __cs_local_idlerun_loop_3_block_1 >= 0 ); 
        __CPROVER_assume ( __cs_local_idlerun_i <= 100 ); 
        {
        }

        __cs_local_idlerun_i = __cs_local_idlerun_i + 1; 
    }

    __cs_local_idlerun_t_3 = __cs_local_idlerun_t_3 + 1; 
    if( ! ( ( __cs_local_idlerun_t_3 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ) ){
        goto __exit_loop_3 ;; 
    }
    
    {
        __cs_local_idlerun_loop_3_IOVar1 = __cs_local_idlerun_i; 
        __cs_local_idlerun_loop_3_block_1 = nondet_int ( ); 
        __cs_local_idlerun_i = __cs_local_idlerun_loop_3_IOVar1 + ( 1 * __cs_local_idlerun_loop_3_block_1 ); 
        __CPROVER_assume ( __cs_local_idlerun_loop_3_block_1 >= 0 ); 
        __CPROVER_assume ( __cs_local_idlerun_i <= 100 ); 
        {
        }

        __cs_local_idlerun_i = __cs_local_idlerun_i + 1; 
    }

    __cs_local_idlerun_t_3 = __cs_local_idlerun_t_3 + 1; 
    _Bool __cs_loop_3 = ( __cs_local_idlerun_t_3 < 1 ) && ( __cs_local_idlerun_i <= 100 ) ; 
    __VERIFIER_assume ( ! __cs_loop_3 ); 
    __exit_loop_3 : 
    ; 
    __CPROVER_assume ( ! ( __cs_local_idlerun_i <= 100 ) ); 
}
float svp_simple_018_001_func2(  ) {
    float __cs_local_svp_simple_018_001_func2_area = 0.0 ; 
    float __cs_temporary_0 ; 
    __cs_temporary_0 = svp_simple_018_001_para2; 
    float __cs_temporary_1 ; 
    __cs_temporary_1 = svp_simple_018_001_para2; 
    __cs_local_svp_simple_018_001_func2_area = ( svp_simple_018_001_para1 * __cs_temporary_0 ) * __cs_temporary_1; 
    return ( __cs_local_svp_simple_018_001_func2_area ) ; 
}
float svp_simple_018_001_func1(  ) {
    float __cs_local_svp_simple_018_001_func1_perimete = 0.0 ; 
    __cs_local_svp_simple_018_001_func1_perimete = ( 2 * svp_simple_018_001_para1 ) * svp_simple_018_001_para2; 
    return ( __cs_local_svp_simple_018_001_func1_perimete ) ; 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        enable_isr ( - 1 ); 
addLabel();
    }

    float __cs_local_main_task_svp_simple_018_001_perimete = 0 ; 
    float __cs_local_main_task_svp_simple_018_001_area = 0 ; 
    float __cs_local_main_task___cs_retval__svp_simple_018_001_func1_0 ; 
    {
        float __cs_local_main_task_perimete = 0.0 ; 
        __cs_local_main_task_perimete = ( 2 * svp_simple_018_001_para1 ) * svp_simple_018_001_para2; 
addLabel();
        __cs_local_main_task___cs_retval__svp_simple_018_001_func1_0 = __cs_local_main_task_perimete; 
    }

    __cs_local_main_task_svp_simple_018_001_perimete = __cs_local_main_task___cs_retval__svp_simple_018_001_func1_0; 
    float __cs_local_main_task___cs_retval__svp_simple_018_001_func2_0 ; 
    {
        float __cs_local_main_task_area = 0.0 ; 
        float __cs_temporary_0 ; 
        __cs_temporary_0 = svp_simple_018_001_para2; 
addLabel();
        float __cs_temporary_1 ; 
        __cs_temporary_1 = svp_simple_018_001_para2; 
addLabel();
        __cs_local_main_task_area = ( svp_simple_018_001_para1 * __cs_temporary_0 ) * __cs_temporary_1; 
        __cs_local_main_task___cs_retval__svp_simple_018_001_func2_0 = __cs_local_main_task_area; 
    }

    __cs_local_main_task_svp_simple_018_001_area = __cs_local_main_task___cs_retval__svp_simple_018_001_func2_0; 
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
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_018_001_isr_1_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , svp_simple_018_001_isr_2_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
