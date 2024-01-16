void init(  ) {
    enable_isr ( - 1 ); 
}
void * svp_simple_021_001_isr_1_0( void * __cs_param_svp_simple_021_001_isr_1_arg ) {
addLabel();
    svp_simple_021_001_tc_block_rcvd_bytes_ch1 = ( ( * ( ( volatile unsigned int * ) 0x10000000 ) ) >> 3 ) & 0x1FFF; 
    __exit_svp_simple_021_001_isr_1 : 
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
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    struct svp_simple_021_001_tc_block_data __cs_local_main_task_tc_block ; 
    {
        svp_simple_021_001_tc_block_rcvd_bytes_ch1 = nondet_rand ( ); 
        svp_simple_021_001_tc_block_rcvd_bytes_ch2 = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
addLabel();
        }

    }

    {
        unsigned __cs_local_main_task_svp_simple_021_001_flag_chan1 ; 
        __cs_local_main_task_svp_simple_021_001_flag_chan1 = 0; 
        _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
        __cs_local_main_task___cs_tmp_if_cond_0 = svp_simple_021_001_tc_block_rcvd_bytes_ch1 >= 16; 
addLabel();
        if( __cs_local_main_task___cs_tmp_if_cond_0 ){
            svp_simple_021_001_tc_block_rcvd_bytes_ch1 = 0; 
            int __cs_local_main_task_i ; 
            __cs_local_main_task_i = 0; 
            int __cs_local_main_task_loop_1_IOVar1 ; 
            int __cs_local_main_task_loop_1_block_1 ; 
            int __cs_local_main_task_t_1 = 0 ; 
            if( ! ( ( __cs_local_main_task_t_1 < 2 ) && ( __cs_local_main_task_i < 256 ) ) ){
                goto __exit_loop_1 ; 
            }
            
            {
                __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i; 
                __cs_local_main_task_loop_1_block_1 = nondet_int ( ); 
                __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_1 ); 
                __CPROVER_assume ( __cs_local_main_task_loop_1_block_1 >= 0 ); 
                __CPROVER_assume ( __cs_local_main_task_i < 256 ); 
                {
                    svp_simple_021_001_tc_chan1_buff [ __cs_local_main_task_i ] = 0; 
                }

                __cs_local_main_task_i = __cs_local_main_task_i + 1; 
            }

            __cs_local_main_task_t_1 = __cs_local_main_task_t_1 + 1; 
            if( ! ( ( __cs_local_main_task_t_1 < 2 ) && ( __cs_local_main_task_i < 256 ) ) ){
                goto __exit_loop_1 ; 
            }
            
            {
                __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_i; 
                __cs_local_main_task_loop_1_block_1 = nondet_int ( ); 
                __cs_local_main_task_i = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_1 ); 
                __CPROVER_assume ( __cs_local_main_task_loop_1_block_1 >= 0 ); 
                __CPROVER_assume ( __cs_local_main_task_i < 256 ); 
                {
                    svp_simple_021_001_tc_chan1_buff [ __cs_local_main_task_i ] = 0; 
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
            __cs_local_main_task_svp_simple_021_001_flag_chan1 = 0xFF; 
        }
        
    }

    int __cs_local_main_task_ichan ; 
    __cs_local_main_task_ichan = 0; 
    unsigned8 * __cs_local_main_task_loop_2_IOVar1 ; 
    int __cs_local_main_task_loop_2_IOVar2 ; 
    int __cs_local_main_task_loop_2_k1_1 ; 
    int __cs_local_main_task_loop_2_block_4 ; 
    int __cs_local_main_task_t_2 = 0 ; 
    if( ! ( ( __cs_local_main_task_t_2 < 4 ) && ( __cs_local_main_task_ichan < 2 ) ) ){
        goto __exit_loop_2 ; 
    }
    
    {
        __cs_local_main_task_loop_2_IOVar1 = svp_simple_021_001_tc_buff_p; 
        __cs_local_main_task_loop_2_IOVar2 = __cs_local_main_task_ichan; 
        __cs_local_main_task_loop_2_block_4 = nondet_int ( ); 
        unsigned8 * __cs_local_main_task_resetIOVar_1_list [ 3 ] ; 
        __cs_local_main_task_resetIOVar_1_list [ 0 ] = __cs_local_main_task_loop_2_IOVar1; 
        __cs_local_main_task_resetIOVar_1_list [ 1 ] = svp_simple_021_001_tc_chan1_buff; 
        __cs_local_main_task_resetIOVar_1_list [ 2 ] = svp_simple_021_001_tc_chan2_buff; 
        __cs_local_main_task_loop_2_k1_1 = nondet_int ( ); 
        __CPROVER_assume ( __cs_local_main_task_loop_2_k1_1 >= 0 ); 
        __CPROVER_assume ( __cs_local_main_task_loop_2_k1_1 <= 2 ); 
        svp_simple_021_001_tc_buff_p = __cs_local_main_task_resetIOVar_1_list [ __cs_local_main_task_loop_2_k1_1 ]; 
        __cs_local_main_task_ichan = __cs_local_main_task_loop_2_IOVar2 + ( 1 * __cs_local_main_task_loop_2_block_4 ); 
        __CPROVER_assume ( __cs_local_main_task_loop_2_block_4 >= 0 ); 
        __CPROVER_assume ( __cs_local_main_task_ichan < 2 ); 
        {
            _Bool __cs_local_main_task___cs_tmp_if_cond_1 ; 
            __cs_local_main_task___cs_tmp_if_cond_1 = __cs_local_main_task_ichan == 0; 
            if( __cs_local_main_task___cs_tmp_if_cond_1 ){
                svp_simple_021_001_tc_buff_p = svp_simple_021_001_tc_chan1_buff; 
                svp_simple_021_001_tc_block_rcvd_bytes = svp_simple_021_001_tc_block_rcvd_bytes_ch1; 
addLabel();
            }
            else {
                svp_simple_021_001_tc_buff_p = svp_simple_021_001_tc_chan2_buff; 
                svp_simple_021_001_tc_block_rcvd_bytes = svp_simple_021_001_tc_block_rcvd_bytes_ch2; 
            }

            __cs_local_main_task_tc_block . type = * ( svp_simple_021_001_tc_buff_p + 2 ); 
            __cs_local_main_task_tc_block . id = * ( svp_simple_021_001_tc_buff_p + 4 ); 
            __cs_local_main_task_tc_block . valid_len = * ( svp_simple_021_001_tc_buff_p + 5 ); 
        }

        __cs_local_main_task_ichan = __cs_local_main_task_ichan + 1; 
    }

    __cs_local_main_task_t_2 = __cs_local_main_task_t_2 + 1; 
    if( ! ( ( __cs_local_main_task_t_2 < 4 ) && ( __cs_local_main_task_ichan < 2 ) ) ){
        goto __exit_loop_2 ; 
    }
    
    {
        __cs_local_main_task_loop_2_IOVar1 = svp_simple_021_001_tc_buff_p; 
        __cs_local_main_task_loop_2_IOVar2 = __cs_local_main_task_ichan; 
        __cs_local_main_task_loop_2_block_4 = nondet_int ( ); 
        unsigned8 * __cs_local_main_task_resetIOVar_1_list [ 3 ] ; 
        __cs_local_main_task_resetIOVar_1_list [ 0 ] = __cs_local_main_task_loop_2_IOVar1; 
        __cs_local_main_task_resetIOVar_1_list [ 1 ] = svp_simple_021_001_tc_chan1_buff; 
        __cs_local_main_task_resetIOVar_1_list [ 2 ] = svp_simple_021_001_tc_chan2_buff; 
        __cs_local_main_task_loop_2_k1_1 = nondet_int ( ); 
        __CPROVER_assume ( __cs_local_main_task_loop_2_k1_1 >= 0 ); 
        __CPROVER_assume ( __cs_local_main_task_loop_2_k1_1 <= 2 ); 
        svp_simple_021_001_tc_buff_p = __cs_local_main_task_resetIOVar_1_list [ __cs_local_main_task_loop_2_k1_1 ]; 
        __cs_local_main_task_ichan = __cs_local_main_task_loop_2_IOVar2 + ( 1 * __cs_local_main_task_loop_2_block_4 ); 
        __CPROVER_assume ( __cs_local_main_task_loop_2_block_4 >= 0 ); 
        __CPROVER_assume ( __cs_local_main_task_ichan < 2 ); 
        {
            _Bool __cs_local_main_task___cs_tmp_if_cond_1 ; 
            __cs_local_main_task___cs_tmp_if_cond_1 = __cs_local_main_task_ichan == 0; 
            if( __cs_local_main_task___cs_tmp_if_cond_1 ){
                svp_simple_021_001_tc_buff_p = svp_simple_021_001_tc_chan1_buff; 
                svp_simple_021_001_tc_block_rcvd_bytes = svp_simple_021_001_tc_block_rcvd_bytes_ch1; 
addLabel();
            }
            else {
                svp_simple_021_001_tc_buff_p = svp_simple_021_001_tc_chan2_buff; 
                svp_simple_021_001_tc_block_rcvd_bytes = svp_simple_021_001_tc_block_rcvd_bytes_ch2; 
            }

            __cs_local_main_task_tc_block . type = * ( svp_simple_021_001_tc_buff_p + 2 ); 
            __cs_local_main_task_tc_block . id = * ( svp_simple_021_001_tc_buff_p + 4 ); 
            __cs_local_main_task_tc_block . valid_len = * ( svp_simple_021_001_tc_buff_p + 5 ); 
        }

        __cs_local_main_task_ichan = __cs_local_main_task_ichan + 1; 
    }

    __cs_local_main_task_t_2 = __cs_local_main_task_t_2 + 1; 
    _Bool __cs_loop_2 = ( __cs_local_main_task_t_2 < 4 ) && ( __cs_local_main_task_ichan < 2 ) ; 
addLabel();
    __VERIFIER_assume ( ! __cs_loop_2 ); 
    __exit_loop_2 : 
    ; 
    __CPROVER_assume ( ! ( __cs_local_main_task_ichan < 2 ) ); 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_021_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
