void * task_compute_isr( void * arg ) {
    int reader ; 
    if( test_global_condition1 == 0 ){
        reader = test_global_var2; 
    }
    
    __exit_task_compute_isr : 
    ;
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    disable_isr ( - 1 ); 
    enable_isr ( - 1 ); 
    goto __exit_main_task ; 
    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * task_FL_Wheel_isr( void * arg ) {
    int rtb_to_int1 ; 
    int rtb_RelationalOperator ; 
    int rtb_vms ; 
    int u ; 
    int positive_UpperSat_local = 100 ; 
    if( u >= positive_UpperSat_local ){
    }
    else {
        int positive_LowerSat_local = 5 ; 
        if( u <= positive_LowerSat_local ){
        }
        
    }

    int tmp0 = 10 ; 
    int tmp1 = 10 + rtb_vms ; 
    if( tmp0 > tmp1 ){
    }
    else {
    }

    int Threshold_10kmh_Threshold_local = 100 ; 
    if( brake_acc_nodiv_ctrl_B_local_RT4 >= Threshold_10kmh_Threshold_local ){
        if( rtb_RelationalOperator ){
        }
        else {
        }

    }
    else {
    }

    int In_BrakePedal ; 
    if( rtb_RelationalOperator ){
    }
    else {
    }

    int Pedal_map_UpperSat = 50 ; 
    int Pedal_map_LowerSat = 20 ; 
    int tmp ; 
    if( In_BrakePedal >= Pedal_map_UpperSat ){
    }
    
    if( In_BrakePedal <= Pedal_map_LowerSat ){
    }
    else {
    }

    if( test_global_condition3 == 0 ){
        test_global_var2 = 1; 
    }
    
    if( test_global_condition4 == 0 ){
        test_global_var2 = 1; 
    }
    
    __exit_task_FL_Wheel_isr : 
    ;
    pthread_exit ( 0 ); 
}
void * task_RR_Wheel_isr( void * arg ) {
    int rtb_to_int ; 
    int rtb_RelationalOperator ; 
    int rtb_vms ; 
    int u ; 
    int positive_UpperSat_local = 100 ; 
    if( u >= positive_UpperSat_local ){
    }
    else {
        int positive_LowerSat_local = 5 ; 
        if( u <= positive_LowerSat_local ){
        }
        
    }

    int tmp0 = 10 ; 
    int tmp1 = 10 + rtb_vms ; 
    if( tmp0 > tmp1 ){
    }
    else {
    }

    int Threshold_10kmh_Threshold_local = 100 ; 
    if( brake_acc_nodiv_ctrl_B_local_RT4 >= Threshold_10kmh_Threshold_local ){
        if( rtb_RelationalOperator ){
        }
        else {
        }

    }
    else {
    }

    int reader1 ; 
    int reader2 ; 
    __exit_task_RR_Wheel_isr : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_t t3 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , task_compute_isr , 0 ); 
    pthread_create ( & t2 , 0 , task_RR_Wheel_isr , 0 ); 
    pthread_create ( & t3 , 0 , task_FL_Wheel_isr , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
