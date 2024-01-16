void * svp_simple_022_001_isr_1_0( void * __cs_param_svp_simple_022_001_isr_1_arg ) {
addLabel();
    svp_simple_022_001_global_var1 = nondet_rand ( ); 
    __exit_svp_simple_022_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    {
        svp_simple_022_001_global_var1 = nondet_rand ( ); 
        {
            enable_isr ( - 1 ); 
addLabel();
        }

    }

    svp_simple_022_001_global_var1 = 0; 
    {
        {
            _Bool __cs_local_main_task___cs_tmp_if_cond_0 ; 
            __cs_local_main_task___cs_tmp_if_cond_0 = svp_simple_022_001_global_var1 >= 12; 
addLabel();
            if( __cs_local_main_task___cs_tmp_if_cond_0 ){
                svp_simple_022_001_global_var1 = 12; 
            }
            else {
                svp_simple_022_001_global_var1 = 0; 
            }

        }

    }

    int __cs_local_main_task_i ; 
    {
        {
            svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
addLabel();
        }

    }

    svp_simple_022_001_global_var3 = svp_simple_022_001_global_var1; 
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
    pthread_create ( & __cs_local_main_t1 , 0 , svp_simple_022_001_isr_1_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
