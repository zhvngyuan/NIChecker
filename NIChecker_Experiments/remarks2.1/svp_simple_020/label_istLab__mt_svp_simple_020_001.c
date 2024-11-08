void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        enable_isr ( - 1 ); 
addLabel();
    }

    disable_isr ( 2 ); 
    int __cs_local_main_task_reader1 ; 
    int __cs_local_main_task_reader2 ; 
    int __cs_local_main_task_svp_simple_020_001_local_var1 ; 
    int __cs_local_main_task_svp_simple_020_001_local_var2 ; 
    __cs_local_main_task_svp_simple_020_001_local_var1 = nondet_rand ( ); 
    __cs_local_main_task_svp_simple_020_001_local_var2 = nondet_rand ( ); 
    _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
    __cs_local_main_task___cs_tmp_if_cond_0 = ( __cs_local_main_task_svp_simple_020_001_local_var1 + __cs_local_main_task_svp_simple_020_001_local_var2 ) > svp_simple_020_001_global_para; 
addLabel();
    if( __cs_local_main_task___cs_tmp_if_cond_0 ){
    }
    
    _Bool __cs_local_main_task___cs_tmp_if_cond_1 ; 
    __cs_local_main_task___cs_tmp_if_cond_1 = ( __cs_local_main_task_svp_simple_020_001_local_var1 + __cs_local_main_task_svp_simple_020_001_local_var2 ) < svp_simple_020_001_global_para; 
addLabel();
    if( __cs_local_main_task___cs_tmp_if_cond_1 ){
    }
    
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_020_001_isr_2_0( void * __cs_param_svp_simple_020_001_isr_2_arg ) {
addLabel();
    _Bool __cs_local_svp_simple_020_001_isr_2___cs_tmp_if_cond_2 ; 
    __cs_local_svp_simple_020_001_isr_2___cs_tmp_if_cond_2 = svp_simple_020_001_global_flag == 1; 
    if( __cs_local_svp_simple_020_001_isr_2___cs_tmp_if_cond_2 ){
        svp_simple_020_001_global_para = 11; 
    }
    
    __exit_svp_simple_020_001_isr_2 : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_020_001_isr_1_0( void * __cs_param_svp_simple_020_001_isr_1_arg ) {
addLabel();
    svp_simple_020_001_global_flag = 1; 
addLabel();
    enable_isr ( 2 ); 
addLabel();
    __exit_svp_simple_020_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_t __cs_local_main_t2 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_020_001_isr_1_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , svp_simple_020_001_isr_2_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
