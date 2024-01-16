void * svp_simple_011_001_isr_1_0( void * __cs_param_svp_simple_011_001_isr_1_arg ) {
addLabel();
    int __cs_local_svp_simple_011_001_isr_1_reader1 ; 
    int __cs_local_svp_simple_011_001_isr_1_reader2 ; 
    int * __cs_local_svp_simple_011_001_isr_1_m = & svp_simple_011_001_global_var1 ; 
    __cs_local_svp_simple_011_001_isr_1_reader2 = * svp_simple_011_001_u; 
    __exit_svp_simple_011_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        enable_isr ( - 1 ); 
addLabel();
    }

    int * __cs_local_main_task_p = & svp_simple_011_001_global_var1 ; 
    int * __cs_local_main_task_q = & svp_simple_011_001_global_var1 ; 
    svp_simple_011_001_u = & svp_simple_011_001_global_var2; 
addLabel();
    * svp_simple_011_001_u = 0x01; 
addLabel();
    svp_simple_011_001_u = & svp_simple_011_001_global_var3; 
addLabel();
    * svp_simple_011_001_u = 0x02; 
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
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_011_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
