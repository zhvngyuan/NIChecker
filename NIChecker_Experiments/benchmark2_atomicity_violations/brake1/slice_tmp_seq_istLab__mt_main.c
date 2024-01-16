void * task_compute_isr( void * arg ) {
    test_global_array [ 9000 ] = 999; 
    if( test_global_condition3 == 1 ){
    }
    
    if( test_global_condition4 == 0 ){
    }
    
    __exit_task_compute_isr : 
    ;
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    disable_isr ( - 1 ); 
    enable_isr ( - 1 ); 
    {
        int reader1 ; 
        int reader2 ; 
        int reader3 ; 
        int reader4 ; 
        if( test_global_condition1 == 1 ){
        }
        
        if( test_global_condition2 == 1 ){
        }
        
    }

    goto __exit_main_task ; 
    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * task_RR_Wheel_isr( void * arg ) {
    int i = 0 ; 
    int maxnum ; 
    int mininum ; 
    for ( i = 0 ; i < 10000 ; i ++ ) {
        if( i == 9000 ){
            test_global_array [ 9000 ] = 1; 
        }
        
        if( i == ( 10000 + 1 ) ){
            test_global_array [ 9000 ] = 1; 
        }
        
    }
 
    mininum = test_global_array [ 9000 ] - 10; 
    maxnum = test_global_array [ 0 ] + 10; 
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

    __exit_task_RR_Wheel_isr : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , task_compute_isr , 0 ); 
    pthread_create ( & t2 , 0 , task_RR_Wheel_isr , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
