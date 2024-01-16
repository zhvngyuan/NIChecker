void * svp_simple_008_001_isr_1_0( void * __cs_param_svp_simple_008_001_isr_1_arg ) {
addLabel();
    {
        int __cs_local_svp_simple_008_001_isr_1_k ; 
        __cs_local_svp_simple_008_001_isr_1_k = 0; 
        int __cs_local_svp_simple_008_001_isr_1_loop_1_IOVar1 ; 
        int __cs_local_svp_simple_008_001_isr_1_loop_1_block_1 ; 
        int __cs_local_svp_simple_008_001_isr_1_t = 0 ; 
        if( ! ( ( __cs_local_svp_simple_008_001_isr_1_t < 2 ) && ( __cs_local_svp_simple_008_001_isr_1_k < 100 ) ) ){
            goto __exit_loop_1 ; 
        }
        
        {
            __cs_local_svp_simple_008_001_isr_1_loop_1_IOVar1 = __cs_local_svp_simple_008_001_isr_1_k; 
            __cs_local_svp_simple_008_001_isr_1_loop_1_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_008_001_isr_1_k = __cs_local_svp_simple_008_001_isr_1_loop_1_IOVar1 + ( 1 * __cs_local_svp_simple_008_001_isr_1_loop_1_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_008_001_isr_1_loop_1_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_008_001_isr_1_k < 100 ); 
            {
                svp_simple_008_001_global_array [ __cs_local_svp_simple_008_001_isr_1_k ] = 0x05; 
addLabel();
            }

            __cs_local_svp_simple_008_001_isr_1_k = __cs_local_svp_simple_008_001_isr_1_k + 1; 
        }

        __cs_local_svp_simple_008_001_isr_1_t = __cs_local_svp_simple_008_001_isr_1_t + 1; 
        if( ! ( ( __cs_local_svp_simple_008_001_isr_1_t < 2 ) && ( __cs_local_svp_simple_008_001_isr_1_k < 100 ) ) ){
            goto __exit_loop_1 ; 
        }
        
        {
            __cs_local_svp_simple_008_001_isr_1_loop_1_IOVar1 = __cs_local_svp_simple_008_001_isr_1_k; 
            __cs_local_svp_simple_008_001_isr_1_loop_1_block_1 = nondet_int ( ); 
            __cs_local_svp_simple_008_001_isr_1_k = __cs_local_svp_simple_008_001_isr_1_loop_1_IOVar1 + ( 1 * __cs_local_svp_simple_008_001_isr_1_loop_1_block_1 ); 
            __CPROVER_assume ( __cs_local_svp_simple_008_001_isr_1_loop_1_block_1 >= 0 ); 
            __CPROVER_assume ( __cs_local_svp_simple_008_001_isr_1_k < 100 ); 
            {
                svp_simple_008_001_global_array [ __cs_local_svp_simple_008_001_isr_1_k ] = 0x05; 
addLabel();
            }

            __cs_local_svp_simple_008_001_isr_1_k = __cs_local_svp_simple_008_001_isr_1_k + 1; 
        }

        __cs_local_svp_simple_008_001_isr_1_t = __cs_local_svp_simple_008_001_isr_1_t + 1; 
        _Bool __cs_loop_1 = ( __cs_local_svp_simple_008_001_isr_1_t < 2 ) && ( __cs_local_svp_simple_008_001_isr_1_k < 100 ) ; 
        __VERIFIER_assume ( ! __cs_loop_1 ); 
        __exit_loop_1 : 
        ; 
        __CPROVER_assume ( ! ( __cs_local_svp_simple_008_001_isr_1_k < 100 ) ); 
    }

    __exit_svp_simple_008_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        enable_isr ( - 1 ); 
addLabel();
    }

    int __cs_local_main_task_p = 1 ; 
    int __cs_local_main_task_q = 2 ; 
    svp_simple_008_001_global_array [ __cs_local_main_task_p + __cs_local_main_task_q ] = 0x09; 
addLabel();
    svp_simple_008_001_global_array [ 40 ] = 0x01; 
addLabel();
    {
        int __cs_local_main_task_reader1 ; 
        int __cs_local_main_task_reader2 ; 
        int __cs_local_main_task_i = 1 ; 
        int __cs_local_main_task_j = 2 ; 
        int __cs_local_main_task_p = 1 ; 
        int __cs_local_main_task_q = 3 ; 
        __cs_local_main_task_reader1 = svp_simple_008_001_global_array [ ( __cs_local_main_task_i * 20 ) + ( __cs_local_main_task_j * 10 ) ]; 
        __cs_local_main_task_reader2 = svp_simple_008_001_global_array [ __cs_local_main_task_p + __cs_local_main_task_q ]; 
    }

    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_008_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
