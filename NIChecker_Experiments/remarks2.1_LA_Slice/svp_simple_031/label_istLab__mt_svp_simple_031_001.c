void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        svp_simple_031_001_tc_block_rcvd_bytes_ch1 = nondet_rand ( ); 
        svp_simple_031_001_gloable_var1 = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
addLabel();
        }

    }

    struct svp_simple_031_001_tc_block_data __cs_local_main_task_tc_block ; 
    int __cs_local_main_task_ichan = 0 ; 
    _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
    __cs_local_main_task___cs_tmp_if_cond_0 = __cs_local_main_task_ichan == 0; 
    if( __cs_local_main_task___cs_tmp_if_cond_0 ){
        svp_simple_031_001_tc_block_rcvd_bytes = svp_simple_031_001_tc_block_rcvd_bytes_ch1; 
addLabel();
    }
    
    {
        unsigned __cs_local_main_task_svp_simple_031_001_flag_chan1 ; 
        _Bool __cs_local_main_task___cs_tmp_if_cond_1 ; 
        __cs_local_main_task___cs_tmp_if_cond_1 = svp_simple_031_001_tc_block_rcvd_bytes_ch1 >= 16; 
addLabel();
        if( __cs_local_main_task___cs_tmp_if_cond_1 ){
            int __cs_local_main_task___cs_retval__svp_simple_031_001_func_1_0 ; 
            {
                int __cs_local_main_task_a = svp_simple_031_001_gloable_var1 ; 
                int __cs_local_main_task_b = svp_simple_031_001_tc_block_rcvd_bytes_ch1 ; 
addLabel();
                int __cs_local_main_task_c ; 
                _Bool __cs_local_main_task___cs_tmp_if_cond_2 ; 
                __cs_local_main_task___cs_tmp_if_cond_2 = __cs_local_main_task_a < __cs_local_main_task_b; 
                if( __cs_local_main_task___cs_tmp_if_cond_2 ){
                }
                else {
                    int __cs_local_main_task___cs_retval__svp_simple_031_001_func_2_0 ; 
                    {
                        _Bool __cs_local_main_task___cs_tmp_if_cond_3 ; 
                        __cs_local_main_task___cs_tmp_if_cond_3 = svp_simple_031_001_tc_block_rcvd_bytes_ch1 > 0; 
addLabel();
                        if( __cs_local_main_task___cs_tmp_if_cond_3 ){
                            goto __exit__svp_simple_031_001_func_2_0 ; 
                            ; 
                        }
                        else {
                            goto __exit__svp_simple_031_001_func_2_0 ; 
                            ; 
                        }

                        __exit__svp_simple_031_001_func_2_0 : 
                        ; 
                    }

                }

            }

        }
        
    }

    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_031_001_isr_1_0( void * __cs_param_svp_simple_031_001_isr_1_arg ) {
addLabel();
    svp_simple_031_001_tc_block_rcvd_bytes_ch1 = ( ( * ( ( volatile unsigned int * ) 0x10000000 ) ) >> 3 ) & 0x1FFF; 
    __exit_svp_simple_031_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_031_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
