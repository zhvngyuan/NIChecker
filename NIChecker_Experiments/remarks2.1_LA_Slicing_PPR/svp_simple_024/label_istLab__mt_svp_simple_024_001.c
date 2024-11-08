void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    struct bytetoword __cs_local_main_task_svp_simple_024_001_local_a ; 
    struct bytetoword __cs_local_main_task_svp_simple_024_001_local_b ; 
    {
        {
            enable_isr ( - 1 ); 
addLabel();
        }

    }

    unsigned int __cs_local_main_task___cs_retval__svp_simple_024_001_RTData_0 ; 
    {
        struct bytetoword __cs_local_main_task_svp_simple_024_001_local_r ; 
        __cs_local_main_task_svp_simple_024_001_local_r . bytedata [ 0 ] = svp_simple_024_001_global_array [ 1 ]; 
addLabel();
        __cs_local_main_task_svp_simple_024_001_local_r . bytedata [ 1 ] = svp_simple_024_001_global_array [ 0 ]; 
addLabel();
    }

    unsigned int __cs_local_main_task___cs_retval__svp_simple_024_001_RTData_1 ; 
    {
        struct bytetoword __cs_local_main_task_svp_simple_024_001_local_r ; 
        __cs_local_main_task_svp_simple_024_001_local_r . bytedata [ 0 ] = svp_simple_024_001_global_array [ 2 ]; 
addLabel();
        __cs_local_main_task_svp_simple_024_001_local_r . bytedata [ 1 ] = svp_simple_024_001_global_array [ 1 ]; 
addLabel();
    }

    int __cs_local_main_task_svp_simple_024_001_local_casereg = __cs_local_main_task_svp_simple_024_001_local_a . worddata | ( __cs_local_main_task_svp_simple_024_001_local_b . worddata & 0x02f0 ) ; 
    ; 
    static
    int __cs_local_main_task___cs_switch_cond_main_task_1 ; 
    __cs_local_main_task___cs_switch_cond_main_task_1 = __cs_local_main_task_svp_simple_024_001_local_casereg; 
    _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
    __cs_local_main_task___cs_tmp_if_cond_0 = __cs_local_main_task___cs_switch_cond_main_task_1 == 0x02f0; 
    if( __cs_local_main_task___cs_tmp_if_cond_0 ){
        ; 
        goto __cs_switch_main_task_1_exit ; 
    }
    
    _Bool __cs_local_main_task___cs_tmp_if_cond_1 ; 
    __cs_local_main_task___cs_tmp_if_cond_1 = __cs_local_main_task___cs_switch_cond_main_task_1 == 0x0390; 
    if( __cs_local_main_task___cs_tmp_if_cond_1 ){
        __cs_switch_main_task_1_case_2 : 
        ; 
        ; 
        goto __cs_switch_main_task_1_exit ; 
    }
    
    _Bool __cs_local_main_task___cs_tmp_if_cond_2 ; 
    __cs_local_main_task___cs_tmp_if_cond_2 = ! ( ( __cs_local_main_task___cs_switch_cond_main_task_1 == 0x02f0 ) || ( __cs_local_main_task___cs_switch_cond_main_task_1 == 0x0390 ) ); 
    if( __cs_local_main_task___cs_tmp_if_cond_2 ){
        __cs_switch_main_task_1_case_3 : 
        ; 
        ; 
        goto __cs_switch_main_task_1_exit ; 
    }
    
    __cs_switch_main_task_1_exit : 
    ; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_024_001_isr_1_0( void * __cs_param_svp_simple_024_001_isr_1_arg ) {
addLabel();
    {
        int __cs_local_svp_simple_024_001_isr_1_i ; 
        __cs_local_svp_simple_024_001_isr_1_i = 0; 
        int __cs_local_svp_simple_024_001_isr_1_loop_1_IOVar1 ; 
        int __cs_local_svp_simple_024_001_isr_1_loop_1_block_1 ; 
        int __cs_local_svp_simple_024_001_isr_1_t_1 = 0 ; 
        if( ! ( ( __cs_local_svp_simple_024_001_isr_1_t_1 < 2 ) && ( __cs_local_svp_simple_024_001_isr_1_i < 100 ) ) ){
            goto __exit_loop_1 ; 
        }
        
        {
            __cs_local_svp_simple_024_001_isr_1_loop_1_IOVar1 = __cs_local_svp_simple_024_001_isr_1_i; 
            __cs_local_svp_simple_024_001_isr_1_loop_1_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_024_001_isr_1_i = __cs_local_svp_simple_024_001_isr_1_loop_1_IOVar1 + ( 1 * __cs_local_svp_simple_024_001_isr_1_loop_1_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_024_001_isr_1_loop_1_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_024_001_isr_1_i < 100 ); 
            {
                svp_simple_024_001_global_array [ __cs_local_svp_simple_024_001_isr_1_i ] = 10; 
            }

            __cs_local_svp_simple_024_001_isr_1_i = __cs_local_svp_simple_024_001_isr_1_i + 1; 
        }

        __cs_local_svp_simple_024_001_isr_1_t_1 = __cs_local_svp_simple_024_001_isr_1_t_1 + 1; 
        if( ! ( ( __cs_local_svp_simple_024_001_isr_1_t_1 < 2 ) && ( __cs_local_svp_simple_024_001_isr_1_i < 100 ) ) ){
            goto __exit_loop_1 ; 
        }
        
        {
            __cs_local_svp_simple_024_001_isr_1_loop_1_IOVar1 = __cs_local_svp_simple_024_001_isr_1_i; 
            __cs_local_svp_simple_024_001_isr_1_loop_1_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_024_001_isr_1_i = __cs_local_svp_simple_024_001_isr_1_loop_1_IOVar1 + ( 1 * __cs_local_svp_simple_024_001_isr_1_loop_1_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_024_001_isr_1_loop_1_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_024_001_isr_1_i < 100 ); 
            {
                svp_simple_024_001_global_array [ __cs_local_svp_simple_024_001_isr_1_i ] = 10; 
            }

            __cs_local_svp_simple_024_001_isr_1_i = __cs_local_svp_simple_024_001_isr_1_i + 1; 
        }

        __cs_local_svp_simple_024_001_isr_1_t_1 = __cs_local_svp_simple_024_001_isr_1_t_1 + 1; 
        _Bool __cs_loop_1 = ( __cs_local_svp_simple_024_001_isr_1_t_1 < 2 ) && ( __cs_local_svp_simple_024_001_isr_1_i < 100 ) ; 
addLabel();
        __VERIFIER_assume ( ! __cs_loop_1 ); 
        __exit_loop_1 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_svp_simple_024_001_isr_1_i < 100 ) ); 
    }

    __exit_svp_simple_024_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_024_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
