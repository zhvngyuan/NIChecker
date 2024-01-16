void * svp_simple_023_001_isr_1_0( void * __cs_param_svp_simple_023_001_isr_1_arg ) {
addLabel();
    svp_simple_023_001_global_var = nondet_rand ( ); 
    __exit_svp_simple_023_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        svp_simple_023_001_global_var = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
addLabel();
        }

    }

    {
        int __cs_local_main_task_var = svp_simple_023_001_global_var ; 
addLabel();
        _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
        __cs_local_main_task___cs_tmp_if_cond_0 = ( __cs_local_main_task_var > 0 ) && ( __cs_local_main_task_var < 12 ); 
        if( __cs_local_main_task___cs_tmp_if_cond_0 ){
            int __cs_temporary_0 = 0 ; 
            __cs_temporary_0 = svp_simple_023_001_global_var + 1; 
addLabel();
            svp_simple_023_001_global_var = __cs_temporary_0; 
        }
        
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
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_023_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
