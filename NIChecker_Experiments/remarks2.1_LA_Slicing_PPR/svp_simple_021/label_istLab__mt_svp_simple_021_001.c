void * svp_simple_021_001_isr_1_0( void * __cs_param_svp_simple_021_001_isr_1_arg ) {
addLabel();
    svp_simple_021_001_tc_block_rcvd_bytes_ch1 = ( ( * ( ( volatile unsigned int * ) 0x10000000 ) ) >> 3 ) & 0x1FFF; 
    __exit_svp_simple_021_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    struct svp_simple_021_001_tc_block_data __cs_local_main_task_tc_block ; 
    {
        svp_simple_021_001_tc_block_rcvd_bytes_ch1 = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
addLabel();
        }

    }

    {
        unsigned __cs_local_main_task_svp_simple_021_001_flag_chan1 ; 
        _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
        __cs_local_main_task___cs_tmp_if_cond_0 = svp_simple_021_001_tc_block_rcvd_bytes_ch1 >= 16; 
addLabel();
        if( __cs_local_main_task___cs_tmp_if_cond_0 ){
            svp_simple_021_001_tc_block_rcvd_bytes_ch1 = 0; 
            int __cs_local_main_task_i ; 
        }
        
    }

    int __cs_local_main_task_ichan ; 
    __cs_local_main_task_ichan = 0; 
    int __cs_local_main_task_loop_1_IOVar1 ; 
    int __cs_local_main_task_loop_1_block_2 ; 
    int __cs_local_main_task_t_1 = 0 ; 
    if( ! ( ( __cs_local_main_task_t_1 < 2 ) && ( __cs_local_main_task_ichan < 2 ) ) ){
        goto __exit_loop_1 ; 
    }
    
    {
        __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_ichan; 
        __cs_local_main_task_loop_1_block_2 = nondet_int ( ); 
        __cs_local_main_task_ichan = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_2 ); 
        __CPROVER_assume ( __cs_local_main_task_loop_1_block_2 >= 0 ); 
        __CPROVER_assume ( __cs_local_main_task_ichan < 2 ); 
        {
            _Bool __cs_local_main_task___cs_tmp_if_cond_1 ; 
            __cs_local_main_task___cs_tmp_if_cond_1 = __cs_local_main_task_ichan == 0; 
            if( __cs_local_main_task___cs_tmp_if_cond_1 ){
                svp_simple_021_001_tc_block_rcvd_bytes = svp_simple_021_001_tc_block_rcvd_bytes_ch1; 
addLabel();
            }
            else {
            }

        }

        __cs_local_main_task_ichan = __cs_local_main_task_ichan + 1; 
    }

    __cs_local_main_task_t_1 = __cs_local_main_task_t_1 + 1; 
    if( ! ( ( __cs_local_main_task_t_1 < 2 ) && ( __cs_local_main_task_ichan < 2 ) ) ){
        goto __exit_loop_1 ; 
    }
    
    {
        __cs_local_main_task_loop_1_IOVar1 = __cs_local_main_task_ichan; 
        __cs_local_main_task_loop_1_block_2 = nondet_int ( ); 
        __cs_local_main_task_ichan = __cs_local_main_task_loop_1_IOVar1 + ( 1 * __cs_local_main_task_loop_1_block_2 ); 
        __CPROVER_assume ( __cs_local_main_task_loop_1_block_2 >= 0 ); 
        __CPROVER_assume ( __cs_local_main_task_ichan < 2 ); 
        {
            _Bool __cs_local_main_task___cs_tmp_if_cond_1 ; 
            __cs_local_main_task___cs_tmp_if_cond_1 = __cs_local_main_task_ichan == 0; 
            if( __cs_local_main_task___cs_tmp_if_cond_1 ){
                svp_simple_021_001_tc_block_rcvd_bytes = svp_simple_021_001_tc_block_rcvd_bytes_ch1; 
addLabel();
            }
            else {
            }

        }

        __cs_local_main_task_ichan = __cs_local_main_task_ichan + 1; 
    }

    __cs_local_main_task_t_1 = __cs_local_main_task_t_1 + 1; 
    _Bool __cs_loop_1 = ( __cs_local_main_task_t_1 < 2 ) && ( __cs_local_main_task_ichan < 2 ) ; 
addLabel();
    __VERIFIER_assume ( ! __cs_loop_1 ); 
    __exit_loop_1 : 
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
