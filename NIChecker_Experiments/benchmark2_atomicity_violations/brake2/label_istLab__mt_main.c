void * task_FL_Wheel_isr_0( void * __cs_param_task_FL_Wheel_isr_arg ) {
addLabel();
    int __cs_local_task_FL_Wheel_isr_rtb_to_int1 ; 
    int __cs_local_task_FL_Wheel_isr_rtb_RelationalOperator ; 
    int __cs_local_task_FL_Wheel_isr_rtb_vms ; 
    int __cs_local_task_FL_Wheel_isr_u ; 
    int __cs_local_task_FL_Wheel_isr_positive_UpperSat_local = 100 ; 
    _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_1 ; 
    __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_1 = __cs_local_task_FL_Wheel_isr_u >= __cs_local_task_FL_Wheel_isr_positive_UpperSat_local; 
    if( __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_1 ){
    }
    else {
        int __cs_local_task_FL_Wheel_isr_positive_LowerSat_local = 5 ; 
    }

    int __cs_local_task_FL_Wheel_isr_tmp0 = 10 ; 
    int __cs_local_task_FL_Wheel_isr_tmp1 = 10 + __cs_local_task_FL_Wheel_isr_rtb_vms ; 
    _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_2 ; 
    __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_2 = __cs_local_task_FL_Wheel_isr_tmp0 > __cs_local_task_FL_Wheel_isr_tmp1; 
    if( __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_2 ){
    }
    else {
    }

    int __cs_local_task_FL_Wheel_isr_Threshold_10kmh_Threshold_local = 100 ; 
    _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_3 ; 
    __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_3 = brake_acc_nodiv_ctrl_B_local_RT4 >= __cs_local_task_FL_Wheel_isr_Threshold_10kmh_Threshold_local; 
    if( __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_3 ){
        _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_4 ; 
        __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_4 = __cs_local_task_FL_Wheel_isr_rtb_RelationalOperator; 
        if( __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_4 ){
        }
        else {
        }

    }
    else {
    }

    int __cs_local_task_FL_Wheel_isr_In_BrakePedal ; 
    _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_5 ; 
    __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_5 = __cs_local_task_FL_Wheel_isr_rtb_RelationalOperator; 
    if( __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_5 ){
    }
    else {
    }

    int __cs_local_task_FL_Wheel_isr_Pedal_map_UpperSat = 50 ; 
    int __cs_local_task_FL_Wheel_isr_Pedal_map_LowerSat = 20 ; 
    int __cs_local_task_FL_Wheel_isr_tmp ; 
    _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_6 ; 
    __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_6 = __cs_local_task_FL_Wheel_isr_In_BrakePedal <= __cs_local_task_FL_Wheel_isr_Pedal_map_LowerSat; 
    if( __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_6 ){
    }
    else {
    }

    _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_7 ; 
    __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_7 = test_global_condition3 == 0; 
    if( __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_7 ){
        test_global_var2 = 1; 
addLabel();
    }
    
    _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_8 ; 
    __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_8 = test_global_condition4 == 0; 
    if( __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_8 ){
        test_global_var2 = 1; 
addLabel();
    }
    
    __exit_task_FL_Wheel_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * task_compute_isr_0( void * __cs_param_task_compute_isr_arg ) {
addLabel();
    int __cs_local_task_compute_isr_reader ; 
    _Bool __cs_local_task_compute_isr___cs_tmp_if_cond_0 ; 
    __cs_local_task_compute_isr___cs_tmp_if_cond_0 = test_global_condition1 == 0; 
    if( __cs_local_task_compute_isr___cs_tmp_if_cond_0 ){
        __cs_local_task_compute_isr_reader = test_global_var2; 
    }
    
    __exit_task_compute_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    disable_isr ( - 1 ); 
    enable_isr ( - 1 ); 
addLabel();
    goto __exit_main_task ; 
    ; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * task_RR_Wheel_isr_0( void * __cs_param_task_RR_Wheel_isr_arg ) {
addLabel();
    int __cs_local_task_RR_Wheel_isr_rtb_to_int ; 
    int __cs_local_task_RR_Wheel_isr_rtb_RelationalOperator ; 
    int __cs_local_task_RR_Wheel_isr_rtb_vms ; 
    int __cs_local_task_RR_Wheel_isr_u ; 
    int __cs_local_task_RR_Wheel_isr_positive_UpperSat_local = 100 ; 
    _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_9 ; 
    __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_9 = __cs_local_task_RR_Wheel_isr_u >= __cs_local_task_RR_Wheel_isr_positive_UpperSat_local; 
    if( __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_9 ){
    }
    else {
        int __cs_local_task_RR_Wheel_isr_positive_LowerSat_local = 5 ; 
    }

    int __cs_local_task_RR_Wheel_isr_tmp0 = 10 ; 
    int __cs_local_task_RR_Wheel_isr_tmp1 = 10 + __cs_local_task_RR_Wheel_isr_rtb_vms ; 
    _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_10 ; 
    __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_10 = __cs_local_task_RR_Wheel_isr_tmp0 > __cs_local_task_RR_Wheel_isr_tmp1; 
    if( __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_10 ){
    }
    else {
    }

    int __cs_local_task_RR_Wheel_isr_Threshold_10kmh_Threshold_local = 100 ; 
    _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_11 ; 
    __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_11 = brake_acc_nodiv_ctrl_B_local_RT4 >= __cs_local_task_RR_Wheel_isr_Threshold_10kmh_Threshold_local; 
    if( __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_11 ){
        _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_12 ; 
        __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_12 = __cs_local_task_RR_Wheel_isr_rtb_RelationalOperator; 
        if( __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_12 ){
        }
        else {
        }

    }
    else {
    }

    int __cs_local_task_RR_Wheel_isr_reader1 ; 
    int __cs_local_task_RR_Wheel_isr_reader2 ; 
    __exit_task_RR_Wheel_isr : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_t __cs_local_main_t2 ; 
    pthread_t __cs_local_main_t3 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , task_compute_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , task_RR_Wheel_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t3 , 0 , task_FL_Wheel_isr_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
