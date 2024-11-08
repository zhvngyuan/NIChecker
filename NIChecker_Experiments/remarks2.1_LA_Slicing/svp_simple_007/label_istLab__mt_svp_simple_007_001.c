void * svp_simple_007_001_isr_1_0( void * __cs_param_svp_simple_007_001_isr_1_arg ) {
addLabel();
    {
        int __cs_local_svp_simple_007_001_isr_1_i = 0 ; 
    }

    svp_simple_007_001_global_array [ 2 ] = 0x09; 
addLabel();
    svp_simple_007_001_global_var = svp_simple_007_001_global_var + 1; 
    svp_simple_007_001_global_array [ svp_simple_007_001_global_var ] = 0x09; 
addLabel();
    __exit_svp_simple_007_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        enable_isr ( - 1 ); 
addLabel();
    }

    int __cs_local_main_task_reader1 ; 
    int __cs_local_main_task_reader2 ; 
    svp_simple_007_001_global_array [ svp_simple_007_001_global_var ] = 0x01; 
addLabel();
    __cs_local_main_task_reader2 = svp_simple_007_001_global_array [ svp_simple_007_001_global_var ]; 
    int __cs_local_main_task_i = nondet_rand ( ) ; 
    _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
    __cs_local_main_task___cs_tmp_if_cond_0 = __cs_local_main_task_i == 2; 
    if( __cs_local_main_task___cs_tmp_if_cond_0 ){
        svp_simple_007_001_global_array [ __cs_local_main_task_i ] = 0x02; 
addLabel();
    }
    else {
        svp_simple_007_001_global_array [ __cs_local_main_task_i ] = 0x09; 
addLabel();
    }

    __cs_local_main_task_reader1 = svp_simple_007_001_global_array [ 2 ]; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_007_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
