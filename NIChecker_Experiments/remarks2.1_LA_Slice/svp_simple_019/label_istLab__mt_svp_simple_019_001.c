void * svp_simple_019_001_isr_1_0( void * __cs_param_svp_simple_019_001_isr_1_arg ) {
addLabel();
    {
        int __cs_local_svp_simple_019_001_isr_1_i = 0 ; 
    }

    svp_simple_019_001_global_condition3 = 1; 
    __exit_svp_simple_019_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    int __cs_local_main_task_reader1 ; 
    int __cs_local_main_task_reader2 ; 
    int __cs_local_main_task_reader3 ; 
    int __cs_local_main_task_reader4 ; 
    int __cs_local_main_task_reader5 ; 
    {
        enable_isr ( - 1 ); 
addLabel();
    }

    {
        int __cs_local_main_task_i = 0 ; 
    }

    disable_isr ( 1 ); 
    _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
    __cs_local_main_task___cs_tmp_if_cond_0 = ( svp_simple_019_001_global_condition1 == 1 ) && ( svp_simple_019_001_global_condition3 == 1 ); 
addLabel();
    if( __cs_local_main_task___cs_tmp_if_cond_0 ){
        enable_isr ( 1 ); 
addLabel();
    }
    
    {
        int __cs_local_main_task_i = 0 ; 
    }

    disable_isr ( 1 ); 
    _Bool __cs_local_main_task___cs_tmp_if_cond_1 ; 
    __cs_local_main_task___cs_tmp_if_cond_1 = ( svp_simple_019_001_global_condiiton2 == 1 ) && ( svp_simple_019_001_global_condition3 == 0 ); 
addLabel();
    if( __cs_local_main_task___cs_tmp_if_cond_1 ){
    }
    
    enable_isr ( 1 ); 
addLabel();
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_019_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
