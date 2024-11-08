void svp_simple_029_001_init(  ) {
    {
        int __cs_local_svp_simple_029_001_init_i ; 
        __cs_local_svp_simple_029_001_init_i = 0; 
        int __cs_local_svp_simple_029_001_init_loop_2_IOVar1 ; 
        int __cs_local_svp_simple_029_001_init_loop_2_block_1 ; 
        int __cs_local_svp_simple_029_001_init_t_2 = 0 ; 
        if( ! ( ( __cs_local_svp_simple_029_001_init_t_2 < 2 ) && ( __cs_local_svp_simple_029_001_init_i < 4096 ) ) ){
            goto __exit_loop_2 ;; 
        }
        
        {
            __cs_local_svp_simple_029_001_init_loop_2_IOVar1 = __cs_local_svp_simple_029_001_init_i; 
            __cs_local_svp_simple_029_001_init_loop_2_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_029_001_init_i = __cs_local_svp_simple_029_001_init_loop_2_IOVar1 + ( 1 * __cs_local_svp_simple_029_001_init_loop_2_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_029_001_init_loop_2_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_029_001_init_i < 4096 ); 
            {
                svp_simple_029_001_tm_blocks [ __cs_local_svp_simple_029_001_init_i ] = nondet_rand ( ); 
            }

            __cs_local_svp_simple_029_001_init_i = __cs_local_svp_simple_029_001_init_i + 1; 
        }

        __cs_local_svp_simple_029_001_init_t_2 = __cs_local_svp_simple_029_001_init_t_2 + 1; 
        if( ! ( ( __cs_local_svp_simple_029_001_init_t_2 < 2 ) && ( __cs_local_svp_simple_029_001_init_i < 4096 ) ) ){
            goto __exit_loop_2 ;; 
        }
        
        {
            __cs_local_svp_simple_029_001_init_loop_2_IOVar1 = __cs_local_svp_simple_029_001_init_i; 
            __cs_local_svp_simple_029_001_init_loop_2_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_029_001_init_i = __cs_local_svp_simple_029_001_init_loop_2_IOVar1 + ( 1 * __cs_local_svp_simple_029_001_init_loop_2_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_029_001_init_loop_2_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_029_001_init_i < 4096 ); 
            {
                svp_simple_029_001_tm_blocks [ __cs_local_svp_simple_029_001_init_i ] = nondet_rand ( ); 
            }

            __cs_local_svp_simple_029_001_init_i = __cs_local_svp_simple_029_001_init_i + 1; 
        }

        __cs_local_svp_simple_029_001_init_t_2 = __cs_local_svp_simple_029_001_init_t_2 + 1; 
        _Bool __cs_loop_2 = ( __cs_local_svp_simple_029_001_init_t_2 < 2 ) && ( __cs_local_svp_simple_029_001_init_i < 4096 ) ; 
        __VERIFIER_assume ( ! __cs_loop_2 ); 
        __exit_loop_2 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_svp_simple_029_001_init_i < 4096 ) ); 
    }

    svp_simple_029_001_average_adjust_flag = 0xFF; 
    {
        enable_isr ( - 1 ); 
    }

}
void svp_simple_029_001_SetTmData( unsigned32 __cs_param_svp_simple_029_001_SetTmData_tm_name , unsigned8 __cs_param_svp_simple_029_001_SetTmData_tm_data ) {
    svp_simple_029_001_tm_blocks [ __cs_param_svp_simple_029_001_SetTmData_tm_name ] = __cs_param_svp_simple_029_001_SetTmData_tm_data; 
}
void init(  ) {
    enable_isr ( - 1 ); 
}
void * svp_simple_029_001_isr_1_0( void * __cs_param_svp_simple_029_001_isr_1_arg ) {
addLabel();
    _Bool __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_10 ; 
    __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_10 = svp_simple_029_001_average_adjust_flag == 0xFF; 
    if( __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_10 ){
        svp_simple_029_001_average_adjust_count = svp_simple_029_001_average_adjust_count + 1; 
        _Bool __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_11 ; 
        __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_11 = svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData; 
        if( __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_11 ){
            {
                unsigned8 __cs_local_svp_simple_029_001_isr_1_tm_data = svp_simple_029_001_average_adjust_count ; 
                svp_simple_029_001_tm_blocks [ 36 ] = __cs_local_svp_simple_029_001_isr_1_tm_data; 
            }

        }
        else {
            _Bool __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_12 ; 
            __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_12 = svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData; 
            if( __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_12 ){
                {
                    unsigned8 __cs_local_svp_simple_029_001_isr_1_tm_data = svp_simple_029_001_average_adjust_count ; 
                    svp_simple_029_001_tm_blocks [ 36 ] = __cs_local_svp_simple_029_001_isr_1_tm_data; 
                }

            }
            
        }

        ; 
    }
    else {
        svp_simple_029_001_average_adjust_count = 0; 
        _Bool __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_13 ; 
        __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_13 = svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData; 
        if( __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_13 ){
            {
                unsigned8 __cs_local_svp_simple_029_001_isr_1_tm_data = svp_simple_029_001_average_adjust_count ; 
                svp_simple_029_001_tm_blocks [ 36 ] = __cs_local_svp_simple_029_001_isr_1_tm_data; 
            }

        }
        else {
            _Bool __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_14 ; 
            __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_14 = svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData; 
            if( __cs_local_svp_simple_029_001_isr_1___cs_tmp_if_cond_14 ){
                {
                    unsigned8 __cs_local_svp_simple_029_001_isr_1_tm_data = svp_simple_029_001_average_adjust_count ; 
                    svp_simple_029_001_tm_blocks [ 36 ] = __cs_local_svp_simple_029_001_isr_1_tm_data; 
                }

            }
            
        }

        ; 
    }

    __exit_svp_simple_029_001_isr_1 : 
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
void svp_simple_029_001_SetSelfCtrlFlag( unsigned32 __cs_param_svp_simple_029_001_SetSelfCtrlFlag_tm_para , unsigned8 __cs_param_svp_simple_029_001_SetSelfCtrlFlag_ctrl_flag , unsigned8 __cs_param_svp_simple_029_001_SetSelfCtrlFlag_flag_pos ) {
    unsigned8 __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tmp1 ; 
    unsigned8 __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tmp2 ; 
    unsigned8 __cs_local_svp_simple_029_001_SetSelfCtrlFlag_ctrl_sts ; 
    _Bool __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_tmp_if_cond_6 ; 
    __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_tmp_if_cond_6 = __cs_param_svp_simple_029_001_SetSelfCtrlFlag_ctrl_flag > 0x80; 
    if( __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_tmp_if_cond_6 ){
        __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tmp1 = 1; 
    }
    else {
        __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tmp1 = 0; 
    }

    __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tmp1 <<= __cs_param_svp_simple_029_001_SetSelfCtrlFlag_flag_pos; 
    __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tmp2 = 1; 
    __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tmp2 <<= ~ __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tmp2; 
    _Bool __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_tmp_if_cond_7 ; 
    __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_tmp_if_cond_7 = svp_simple_029_001_ptr_GetTmData == svp_simple_029_001_GetTmData; 
    if( __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_tmp_if_cond_7 ){
        unsigned8 __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_retval__svp_simple_029_001_GetTmData_2 ; 
        {
            unsigned32 __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tm_name = __cs_param_svp_simple_029_001_SetSelfCtrlFlag_tm_para ; 
            __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_retval__svp_simple_029_001_GetTmData_2 = svp_simple_029_001_tm_blocks [ __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tm_name ]; 
        }

        __cs_local_svp_simple_029_001_SetSelfCtrlFlag_ctrl_sts = __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_retval__svp_simple_029_001_GetTmData_2; 
    }
    
    ; 
    _Bool __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_tmp_if_cond_8 ; 
    __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_tmp_if_cond_8 = svp_simple_029_001_ptr_GetTmData == svp_simple_029_001_GetTmData; 
    if( __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_tmp_if_cond_8 ){
        unsigned8 __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_retval__svp_simple_029_001_GetTmData_3 ; 
        {
            unsigned32 __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tm_name = __cs_param_svp_simple_029_001_SetSelfCtrlFlag_tm_para + 1 ; 
            __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_retval__svp_simple_029_001_GetTmData_3 = svp_simple_029_001_tm_blocks [ __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tm_name ]; 
        }

        __cs_local_svp_simple_029_001_SetSelfCtrlFlag_ctrl_sts = __cs_local_svp_simple_029_001_SetSelfCtrlFlag_ctrl_sts - __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_retval__svp_simple_029_001_GetTmData_3; 
    }
    
    ; 
    __cs_local_svp_simple_029_001_SetSelfCtrlFlag_ctrl_sts |= __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tmp1; 
    _Bool __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_tmp_if_cond_9 ; 
    __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_tmp_if_cond_9 = svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData; 
    if( __cs_local_svp_simple_029_001_SetSelfCtrlFlag___cs_tmp_if_cond_9 ){
        {
            unsigned32 __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tm_name = __cs_param_svp_simple_029_001_SetSelfCtrlFlag_tm_para ; 
            unsigned8 __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tm_data = __cs_local_svp_simple_029_001_SetSelfCtrlFlag_ctrl_sts ; 
            svp_simple_029_001_tm_blocks [ __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tm_name ] = __cs_local_svp_simple_029_001_SetSelfCtrlFlag_tm_data; 
        }

    }
    
    ; 
}
unsigned8 svp_simple_029_001_GetTmData( unsigned32 __cs_param_svp_simple_029_001_GetTmData_tm_name ) {
    return ( svp_simple_029_001_tm_blocks [ __cs_param_svp_simple_029_001_GetTmData_tm_name ] ) ; 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    unsigned8 __cs_local_main_task_svp_simple_029_001_local_status = 1 ; 
    {
        {
            int __cs_local_main_task_i ; 
            __cs_local_main_task_i = 0; 
            int __cs_local_main_task_loop_1_IOVar1 ; 
            int __cs_local_main_task_loop_1_block_1 ; 
            int __cs_local_main_task_t_1 = 0 ; 
            if( ! ( ( __cs_local_main_task_t_1 < 2 ) && ( __cs_local_main_task_i < 4096 ) ) ){
                goto __exit_loop_1 ; 
            }
            
            {
                __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i; 
                __cs_local_main_task_loop_1_block_1 = nondet_int ( ); 
                __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_1 ); 
                __CPROVER_assume ( __cs_local_main_task_loop_1_block_1 >= 0 ); 
                __CPROVER_assume ( __cs_local_main_task_i < 4096 ); 
                {
                    svp_simple_029_001_tm_blocks [ __cs_local_main_task_i ] = nondet_rand ( ); 
                }

                __cs_local_main_task_i = __cs_local_main_task_i + 1; 
            }

            __cs_local_main_task_t_1 = __cs_local_main_task_t_1 + 1; 
            if( ! ( ( __cs_local_main_task_t_1 < 2 ) && ( __cs_local_main_task_i < 4096 ) ) ){
                goto __exit_loop_1 ; 
            }
            
            {
                __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i; 
                __cs_local_main_task_loop_1_block_1 = nondet_int ( ); 
                __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_1 ); 
                __CPROVER_assume ( __cs_local_main_task_loop_1_block_1 >= 0 ); 
                __CPROVER_assume ( __cs_local_main_task_i < 4096 ); 
                {
                    svp_simple_029_001_tm_blocks [ __cs_local_main_task_i ] = nondet_rand ( ); 
                }

                __cs_local_main_task_i = __cs_local_main_task_i + 1; 
            }

            __cs_local_main_task_t_1 = __cs_local_main_task_t_1 + 1; 
            _Bool __cs_loop_1 = ( __cs_local_main_task_t_1 < 2 ) && ( __cs_local_main_task_i < 4096 ) ; 
addLabel();
            __VERIFIER_assume ( ! __cs_loop_1 ); 
            __exit_loop_1 : 
            ; 
            __CPROVER_assume ( ! ( __cs_local_main_task_i < 4096 ) ); 
        }

        svp_simple_029_001_average_adjust_flag = 0xFF; 
addLabel();
        {
            enable_isr ( - 1 ); 
addLabel();
        }

    }

    {
        svp_simple_029_001_ptr_SetTmData = svp_simple_029_001_SetTmData; 
addLabel();
        svp_simple_029_001_ptr_GetTmData = svp_simple_029_001_GetTmData; 
        svp_simple_029_001_ptr_SetSelfCtrlFlag = svp_simple_029_001_SetSelfCtrlFlag; 
    }

    _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
    __cs_local_main_task___cs_tmp_if_cond_0 = __cs_local_main_task_svp_simple_029_001_local_status == 1; 
    if( __cs_local_main_task___cs_tmp_if_cond_0 ){
        _Bool __cs_local_main_task___cs_tmp_if_cond_1 ; 
        __cs_local_main_task___cs_tmp_if_cond_1 = svp_simple_029_001_ptr_SetSelfCtrlFlag == svp_simple_029_001_SetSelfCtrlFlag; 
        if( __cs_local_main_task___cs_tmp_if_cond_1 ){
            {
                unsigned8 __cs_local_main_task_tmp1 ; 
                unsigned8 __cs_local_main_task_tmp2 ; 
                unsigned8 __cs_local_main_task_ctrl_sts ; 
                _Bool __cs_local_main_task___cs_tmp_if_cond_2 ; 
                __cs_local_main_task___cs_tmp_if_cond_2 = 0xFF > 0x80; 
                if( __cs_local_main_task___cs_tmp_if_cond_2 ){
                    __cs_local_main_task_tmp1 = 1; 
                }
                else {
                    __cs_local_main_task_tmp1 = 0; 
                }

                __cs_local_main_task_tmp1 <<= 0; 
                __cs_local_main_task_tmp2 = 1; 
                __cs_local_main_task_tmp2 <<= ~ __cs_local_main_task_tmp2; 
                _Bool __cs_local_main_task___cs_tmp_if_cond_3 ; 
                __cs_local_main_task___cs_tmp_if_cond_3 = svp_simple_029_001_ptr_GetTmData == svp_simple_029_001_GetTmData; 
                if( __cs_local_main_task___cs_tmp_if_cond_3 ){
                    unsigned8 __cs_local_main_task___cs_retval__svp_simple_029_001_GetTmData_0 ; 
                    {
                        unsigned32 __cs_local_main_task_tm_name = 36 ; 
                        __cs_local_main_task___cs_retval__svp_simple_029_001_GetTmData_0 = svp_simple_029_001_tm_blocks [ __cs_local_main_task_tm_name ]; 
addLabel();
                    }

                    __cs_local_main_task_ctrl_sts = __cs_local_main_task___cs_retval__svp_simple_029_001_GetTmData_0; 
                }
                
                ; 
                _Bool __cs_local_main_task___cs_tmp_if_cond_4 ; 
                __cs_local_main_task___cs_tmp_if_cond_4 = svp_simple_029_001_ptr_GetTmData == svp_simple_029_001_GetTmData; 
                if( __cs_local_main_task___cs_tmp_if_cond_4 ){
                    unsigned8 __cs_local_main_task___cs_retval__svp_simple_029_001_GetTmData_1 ; 
                    {
                        unsigned32 __cs_local_main_task_tm_name = 37 ; 
                        __cs_local_main_task___cs_retval__svp_simple_029_001_GetTmData_1 = svp_simple_029_001_tm_blocks [ __cs_local_main_task_tm_name ]; 
addLabel();
                    }

                    __cs_local_main_task_ctrl_sts = __cs_local_main_task_ctrl_sts - __cs_local_main_task___cs_retval__svp_simple_029_001_GetTmData_1; 
                }
                
                ; 
                __cs_local_main_task_ctrl_sts |= __cs_local_main_task_tmp1; 
                _Bool __cs_local_main_task___cs_tmp_if_cond_5 ; 
                __cs_local_main_task___cs_tmp_if_cond_5 = svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData; 
                if( __cs_local_main_task___cs_tmp_if_cond_5 ){
                    {
                        unsigned32 __cs_local_main_task_tm_name = 36 ; 
                        unsigned8 __cs_local_main_task_tm_data = __cs_local_main_task_ctrl_sts ; 
                        svp_simple_029_001_tm_blocks [ __cs_local_main_task_tm_name ] = __cs_local_main_task_tm_data; 
                    }

                }
                
                ; 
            }

        }
        
        ; 
    }
    
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void svp_simple_029_001_TmOrgFuncMap(  ) {
    svp_simple_029_001_ptr_SetTmData = svp_simple_029_001_SetTmData; 
    svp_simple_029_001_ptr_GetTmData = svp_simple_029_001_GetTmData; 
    svp_simple_029_001_ptr_SetSelfCtrlFlag = svp_simple_029_001_SetSelfCtrlFlag; 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_029_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
