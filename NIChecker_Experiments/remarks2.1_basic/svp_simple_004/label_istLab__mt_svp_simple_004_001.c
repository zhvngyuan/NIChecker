void * svp_simple_004_001_isr_2_0( void * __cs_param_svp_simple_004_001_isr_2_arg ) {
addLabel();
    _Bool __cs_local_svp_simple_004_001_isr_2___cs_tmp_if_cond_3 ; 
    __cs_local_svp_simple_004_001_isr_2___cs_tmp_if_cond_3 = svp_simple_004_001_condition6 == 1; 
    if( __cs_local_svp_simple_004_001_isr_2___cs_tmp_if_cond_3 ){
        svp_simple_004_001_global_var2 = 0x22; 
    }
    
    __exit_svp_simple_004_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_004_001_isr_1_0( void * __cs_param_svp_simple_004_001_isr_1_arg ) {
addLabel();
    svp_simple_004_001_condition6 = 0; 
    _Bool __cs_local_svp_simple_004_001_isr_1___cs_tmp_if_cond_2 ; 
    __cs_local_svp_simple_004_001_isr_1___cs_tmp_if_cond_2 = svp_simple_004_001_condition3 == 1; 
    if( __cs_local_svp_simple_004_001_isr_1___cs_tmp_if_cond_2 ){
    }
    else {
    }

    enable_isr ( 2 ); 
    __exit_svp_simple_004_001_isr_1 : 
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
    int __cs_local_main_task_reader3 ; 
    int __cs_local_main_task_reader4 ; 
    int __cs_local_main_task_reader5 ; 
    int __cs_local_main_task_reader6 ; 
    disable_isr ( 2 ); 
    _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
    __cs_local_main_task___cs_tmp_if_cond_0 = svp_simple_004_001_condition4 == 1; 
    if( __cs_local_main_task___cs_tmp_if_cond_0 ){
        __cs_local_main_task_reader3 = svp_simple_004_001_global_var2; 
addLabel();
    }
    
    _Bool __cs_local_main_task___cs_tmp_if_cond_1 ; 
    __cs_local_main_task___cs_tmp_if_cond_1 = svp_simple_004_001_condition5 == 1; 
    if( __cs_local_main_task___cs_tmp_if_cond_1 ){
        __cs_local_main_task_reader4 = svp_simple_004_001_global_var2; 
addLabel();
    }
    
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
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_004_001_isr_1_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , svp_simple_004_001_isr_2_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
