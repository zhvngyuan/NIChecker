void * task_compute_isr( void * arg ) {
    if(cond){task_FL_Wheel_isr();}
    if(cond){goto label_1;}
    if(cond){task_RR_Wheel_isr();}
    if(cond){goto label_2;}

    test_global_var1 = 1; 
    int reader ; 
    if( test_global_condition1 == 0 ){
        label_1:
        reader = test_global_var2; 
    }
    
    cnt1 ++; 
    brake_acc_nodiv_ctrl_B_local_RT_h = brake_acc_nodiv_ctrl_P_RT_X0; 
    brake_acc_nodiv_ctrl_B_local_RT4 = brake_acc_nodiv_ctrl_P_RT4_X0; 
    brake_acc_nodiv_ctrl_B_local_RT1 = brake_acc_nodiv_ctrl_P_RT1_X0; 
    brake_acc_nodiv_ctrl_B_local_RT2 = brake_acc_nodiv_ctrl_P_RT2_X0; 
    brake_acc_nodiv_ctrl_B_local_RT3 = brake_acc_nodiv_ctrl_P_RT3_X0; 
    Distribution_idx = brake_acc_nodiv_ctrl_P_Distribution_Gain1 + brake_acc_nodiv_ctrl_B_local_RT14; 
    Distribution_idx_0 = brake_acc_nodiv_ctrl_P_Distribution_Gain2 + brake_acc_nodiv_ctrl_B_local_RT14; 
    Distribution_idx_1 = brake_acc_nodiv_ctrl_P_Distribution_Gain3 + brake_acc_nodiv_ctrl_B_local_RT14; 
    label_2:
    vkmh = RT9 + RT10; 
    vkmh = vkmh + RT11; 
    vkmh = vkmh + RT12; 
    vkmh = vkmh + brake_acc_nodiv_ctrl_P_average_rpm_Gain; 
    vkmh = vkmh + brake_acc_nodiv_ctrl_P_wgrads_Gain; 
    vkmh = vkmh + brake_acc_nodiv_ctrl_P_vkmh_Gain; 
    RT_Buffer0 = brake_acc_nodiv_ctrl_P_Distribution_Gain0 + brake_acc_nodiv_ctrl_B_local_RT14; 
    RT4_Buffer0 = vkmh; 
    RT1_Buffer0 = Distribution_idx; 
    RT2_Buffer0 = Distribution_idx_0; 
    RT3_Buffer0 = Distribution_idx_1; 
    __exit_task_compute_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {

    disable_isr ( - 1 ); 
    test_global_var1 = 0; 
    enable_isr ( - 1 ); 
    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){task_compute_isr();}
    if(cond){task_FL_Wheel_isr();}
    if(cond){task_RR_Wheel_isr();}
}
void * task_FL_Wheel_isr( void * arg ) {
    if(cond){task_compute_isr();}
    if(cond){goto label_1;}
    if(cond){goto label_2;}
    if(cond){task_RR_Wheel_isr();}
    if(cond){goto label_3;}
    if(cond){goto label_4;}
    if(cond){goto label_5;}
    if(cond){goto label_6;}
    if(cond){goto label_7;}

    cnt3 ++; 
    brake_acc_nodiv_ctrl_B_local_RT_h = brake_acc_nodiv_ctrl_P_RT_X0; 
    brake_acc_nodiv_ctrl_B_local_RT4 = brake_acc_nodiv_ctrl_P_RT4_X0; 
    brake_acc_nodiv_ctrl_B_local_RT1 = brake_acc_nodiv_ctrl_P_RT1_X0; 
    brake_acc_nodiv_ctrl_B_local_RT2 = brake_acc_nodiv_ctrl_P_RT2_X0; 
    brake_acc_nodiv_ctrl_B_local_RT3 = brake_acc_nodiv_ctrl_P_RT3_X0; 
    int rtb_to_int1 ; 
    rtb_to_int1 = 10; 
    label_1:
    brake_acc_nodiv_ctrl_B_local_RT_h = RT_Buffer0; 
    brake_acc_nodiv_ctrl_B_local_RT4 = RT4_Buffer0; 
    int rtb_RelationalOperator ; 
    int rtb_vms ; 
    int u ; 
    label_2:
    rtb_vms = 10 + brake_acc_nodiv_ctrl_B_local_RT4; 
    label_3:
    u = rtb_vms + 10; 
    label_4:
    u = u + rtb_to_int1; 
    int positive_UpperSat_local = 100 ; 
    label_5:
    if( u >= positive_UpperSat_local ){
        u = 100; 
    }
    else {
        int positive_LowerSat_local = 5 ; 
        label_6:
        if( u <= positive_LowerSat_local ){
            u = 5; 
        }
        
    }

    int tmp0 = 10 ; 
    int tmp1 = 10 + rtb_vms ; 
    if( tmp0 > tmp1 ){
        rtb_RelationalOperator = 1; 
    }
    else {
        rtb_RelationalOperator = 0; 
    }

    int Threshold_10kmh_Threshold_local = 100 ; 
    if( brake_acc_nodiv_ctrl_B_local_RT4 >= Threshold_10kmh_Threshold_local ){
        label_7:
        if( rtb_RelationalOperator ){
            brake_acc_nodiv_ctrl_B_local_ABS_FL_Wheel_Threshold_10kmh = 8; 
        }
        else {
            brake_acc_nodiv_ctrl_B_local_ABS_FL_Wheel_Threshold_10kmh = brake_acc_nodiv_ctrl_B_local_RT3; 
        }

    }
    else {
        brake_acc_nodiv_ctrl_B_local_ABS_FL_Wheel_Threshold_10kmh = brake_acc_nodiv_ctrl_B_local_RT3; 
    }

    int In_BrakePedal ; 
    if( rtb_RelationalOperator ){
        In_BrakePedal = 15; 
    }
    else {
        In_BrakePedal = 15 + 50; 
    }

    int Pedal_map_UpperSat = 50 ; 
    int Pedal_map_LowerSat = 20 ; 
    int tmp ; 
    if( In_BrakePedal >= Pedal_map_UpperSat ){
        tmp = 50; 
    }
    
    if( In_BrakePedal <= Pedal_map_LowerSat ){
        tmp = 20; 
    }
    else {
        tmp = 15; 
    }

    RT14 = brake_acc_nodiv_ctrl_P_Gain1_Gain + tmp; 
    RT12 = rtb_to_int1; 
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
void * task_RR_Wheel_isr( void * arg ) {
    if(cond){task_compute_isr();}
    if(cond){goto label_1;}
    if(cond){goto label_2;}
    if(cond){goto label_8;}
    if(cond){task_FL_Wheel_isr();}
    if(cond){goto label_3;}
    if(cond){goto label_4;}
    if(cond){goto label_5;}
    if(cond){goto label_6;}
    if(cond){goto label_7;}

    cnt2 ++; 
    brake_acc_nodiv_ctrl_B_local_RT_h = brake_acc_nodiv_ctrl_P_RT_X0; 
    brake_acc_nodiv_ctrl_B_local_RT4 = brake_acc_nodiv_ctrl_P_RT4_X0; 
    brake_acc_nodiv_ctrl_B_local_RT1 = brake_acc_nodiv_ctrl_P_RT1_X0; 
    brake_acc_nodiv_ctrl_B_local_RT2 = brake_acc_nodiv_ctrl_P_RT2_X0; 
    brake_acc_nodiv_ctrl_B_local_RT3 = brake_acc_nodiv_ctrl_P_RT3_X0; 
    int rtb_to_int ; 
    label_1:
    brake_acc_nodiv_ctrl_B_local_RT_h = RT_Buffer0; 
    brake_acc_nodiv_ctrl_B_local_RT4 = RT4_Buffer0; 
    rtb_to_int = 10; 
    int rtb_RelationalOperator ; 
    int rtb_vms ; 
    int u ; 
    label_2:
    rtb_vms = 10 + brake_acc_nodiv_ctrl_B_local_RT4; 
    label_3:
    u = rtb_vms + 10; 
    label_4:
    u = u + rtb_to_int; 
    int positive_UpperSat_local = 100 ; 
    label_5:
    if( u >= positive_UpperSat_local ){
        u = 100; 
    }
    else {
        int positive_LowerSat_local = 5 ; 
        label_6:
        if( u <= positive_LowerSat_local ){
            u = 5; 
        }
        
    }

    int tmp0 = 10 ; 
    int tmp1 = 10 + rtb_vms ; 
    if( tmp0 > tmp1 ){
        rtb_RelationalOperator = 1; 
    }
    else {
        rtb_RelationalOperator = 0; 
    }

    int Threshold_10kmh_Threshold_local = 100 ; 
    if( brake_acc_nodiv_ctrl_B_local_RT4 >= Threshold_10kmh_Threshold_local ){
        label_7:
        if( rtb_RelationalOperator ){
            brake_acc_nodiv_ctrl_B_local_ABS_RR_Wheel_Threshold_10kmh = 8; 
        }
        else {
            brake_acc_nodiv_ctrl_B_local_ABS_RR_Wheel_Threshold_10kmh = brake_acc_nodiv_ctrl_B_local_RT_h; 
        }

    }
    else {
        brake_acc_nodiv_ctrl_B_local_ABS_RR_Wheel_Threshold_10kmh = brake_acc_nodiv_ctrl_B_local_RT_h; 
    }

    brake_acc_nodiv_ctrl_B_local_RT1 = RT1_Buffer0; 
    RT9 = rtb_to_int; 
    int reader1 ; 
    int reader2 ; 
    test_global_var1 = 0; 
    label_8:
    reader1 = test_global_var1; 
    reader2 = test_global_var1; 
    __exit_task_RR_Wheel_isr : 
    ; 
    pthread_exit ( 0 ); 
}
