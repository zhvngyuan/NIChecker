void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        enable_isr ( - 1 ); 
addLabel();
    }

    int __cs_local_main_task_reader1 ; 
    svp_simple_016_001_global_var1 = 0x01; 
addLabel();
    int __cs_temporary_0 ; 
    __cs_temporary_0 = svp_simple_016_001_global_var1; 
    int __cs_temporary_1 ; 
    __cs_temporary_1 = svp_simple_016_001_global_var1; 
    int __cs_temporary_2 ; 
    __cs_temporary_2 = svp_simple_016_001_global_var1; 
    __cs_local_main_task_reader1 = ( __cs_temporary_0 + __cs_temporary_1 ) + __cs_temporary_2; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * svp_simple_016_001_isr_1_0( void * __cs_param_svp_simple_016_001_isr_1_arg ) {
addLabel();
    {
        int __cs_local_svp_simple_016_001_isr_1_i = 0 ; 
    }

    svp_simple_016_001_global_var1 = 0x09; 
addLabel();
    __exit_svp_simple_016_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_016_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
