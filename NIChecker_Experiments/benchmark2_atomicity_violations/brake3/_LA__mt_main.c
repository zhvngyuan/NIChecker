
typedef int pthread_t;

int brake_acc_nodiv_ctrl_B_local_RT_h;

int brake_acc_nodiv_ctrl_B_local_RTH;

int brake_acc_nodiv_ctrl_B_local_RT4;

int brake_acc_nodiv_ctrl_B_local_RT1;

int brake_acc_nodiv_ctrl_B_local_RT2;

int brake_acc_nodiv_ctrl_B_local_RT3;

int brake_acc_nodiv_ctrl_B_local_RT14;

int brake_acc_nodiv_ctrl_B_local_ABS_FL_Wheel_Threshold_10kmh = 100;

int brake_acc_nodiv_ctrl_B_local_ABS_RL_Wheel_Threshold_10kmh = 100;

int brake_acc_nodiv_ctrl_B_local_ABS_RR_Wheel_Threshold_10kmh = 100;

int brake_acc_nodiv_ctrl_B_local_ABS_FR_Wheel_Threshold_10kmh = 100;

int brake_acc_nodiv_ctrl_P_RT_X0;

int brake_acc_nodiv_ctrl_P_RT4_X0;

int brake_acc_nodiv_ctrl_P_RT1_X0;

int brake_acc_nodiv_ctrl_P_RT2_X0;

int brake_acc_nodiv_ctrl_P_RT3_X0;

int brake_acc_nodiv_ctrl_P_Gain1_Gain;

int brake_acc_nodiv_ctrl_P_Distribution_Gain0;

int brake_acc_nodiv_ctrl_P_Distribution_Gain1;

int brake_acc_nodiv_ctrl_P_Distribution_Gain2;

int brake_acc_nodiv_ctrl_P_Distribution_Gain3;

int brake_acc_nodiv_ctrl_P_average_rpm_Gain;

int brake_acc_nodiv_ctrl_P_wgrads_Gain;

int brake_acc_nodiv_ctrl_P_vkmh_Gain;

int vkmh;

int test;

int RT9;

int RT10;

int RT11;

int RT12;

int RT14;

int RT_Buffer0;

int RT0_Buffer0;

int RT1_Buffer0;

int RT2_Buffer0;

int RT3_Buffer0;

int RT4_Buffer0;

int Distribution_idx;

int Distribution_idx_0;

int Distribution_idx_1;

int cnt1;

int cnt2;

int cnt3;

int cnt4;

int test_global_array[10000];

int test_global_var1;

int test_global_var2;

int test_global_var3;

int test_global_condition1;

int test_global_condition2;

int test_global_condition3;

int test_global_condition4;

void JudgeCondi(void);

void *task_compute_isr(void *arg)

{
          
          test_global_array[9000] = 999;
          
          __exit_task_compute_isr:
          
          ;

          
          pthread_exit(0);
}


void *main_task(void *arg)

{
          
          disable_isr(- 1);
          
          enable_isr(- 1);
          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *task_FL_Wheel_isr(void *arg)

{
          
          int rtb_to_int1;
          
          int rtb_RelationalOperator;
          
          int rtb_vms;
          
          int u;
          
          int positive_UpperSat_local = 100;
          
          _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (u >= positive_UpperSat_local); 
          if (__cs_tmp_if_cond_0)

                    {
          }
          else

                    {
                    
                    int positive_LowerSat_local = 5;
          }

          
          int tmp0 = 10;
          
          int tmp1 = 10 + rtb_vms;
          
          _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (tmp0 > tmp1); 
          if (__cs_tmp_if_cond_1)

                    {
          }
          else

                    {
          }

          
          int Threshold_10kmh_Threshold_local = 100;
          
          _Bool __cs_tmp_if_cond_2; __cs_tmp_if_cond_2 = (brake_acc_nodiv_ctrl_B_local_RT4 >= Threshold_10kmh_Threshold_local); 
          if (__cs_tmp_if_cond_2)

                    {
                    
                    _Bool __cs_tmp_if_cond_3; __cs_tmp_if_cond_3 = (rtb_RelationalOperator); 
                    if (__cs_tmp_if_cond_3)

                                        {
                    }
                    else

                                        {
                    }

          }
          else

                    {
          }

          
          int i = 0;
          
          int maxnum;
          
          int mininum;
          
          i = 0;
          
          int loop_1_IOVar1;
          
          int loop_1_block_3;
          
          for (int t_1 = 0; (t_1 < 2) && (i < 10000); t_1++)          {
                    
                    loop_1_IOVar1 = i;
                    
                    loop_1_block_3 = nondet_int();
                    
                    i = loop_1_IOVar1 + (1 * loop_1_block_3);
                    
                    __CPROVER_assume(loop_1_block_3 >= 0);
                    
                    __CPROVER_assume(i < 10000);

                                        {
                              
                              _Bool __cs_tmp_if_cond_4; __cs_tmp_if_cond_4 = (i == 9000); 
                              if (__cs_tmp_if_cond_4)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                              
                              _Bool __cs_tmp_if_cond_5; __cs_tmp_if_cond_5 = (i == (10000 + 1)); 
                              if (__cs_tmp_if_cond_5)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                    }
                    
                    i++;
          }

          
          __CPROVER_assume(! (i < 10000));
          
          mininum = test_global_array[9000] - 10;
          
          maxnum = test_global_array[0] + 10;
          
          int In_BrakePedal;
          
          _Bool __cs_tmp_if_cond_6; __cs_tmp_if_cond_6 = (rtb_RelationalOperator); 
          if (__cs_tmp_if_cond_6)

                    {
          }
          else

                    {
          }

          
          int Pedal_map_UpperSat = 50;
          
          int Pedal_map_LowerSat = 20;
          
          int tmp;
          
          _Bool __cs_tmp_if_cond_7; __cs_tmp_if_cond_7 = (In_BrakePedal <= Pedal_map_LowerSat); 
          if (__cs_tmp_if_cond_7)

                    {
          }
          else

                    {
          }

          
          __exit_task_FL_Wheel_isr:
          
          ;

          
          pthread_exit(0);
}


void *task_FR_Wheel_isr(void *arg)

{
          
          int rtb_to_int_k;
          
          int rtb_RelationalOperator;
          
          int rtb_vms = 10 + brake_acc_nodiv_ctrl_B_local_RT4;
          
          int u = rtb_vms + 10;
          
          int positive_UpperSat_local = 100;
          
          _Bool __cs_tmp_if_cond_8; __cs_tmp_if_cond_8 = (u >= positive_UpperSat_local); 
          if (__cs_tmp_if_cond_8)

                    {
          }
          else

                    {
                    
                    int positive_LowerSat_local = 5;
          }

          
          int tmp0 = 10;
          
          int tmp1 = 10 + rtb_vms;
          
          _Bool __cs_tmp_if_cond_9; __cs_tmp_if_cond_9 = (tmp0 > tmp1); 
          if (__cs_tmp_if_cond_9)

                    {
          }
          else

                    {
          }

          
          int Threshold_10kmh_Threshold_local = 100;
          
          _Bool __cs_tmp_if_cond_10; __cs_tmp_if_cond_10 = (brake_acc_nodiv_ctrl_B_local_RT4 >= Threshold_10kmh_Threshold_local); 
          if (__cs_tmp_if_cond_10)

                    {
                    
                    _Bool __cs_tmp_if_cond_11; __cs_tmp_if_cond_11 = (rtb_RelationalOperator); 
                    if (__cs_tmp_if_cond_11)

                                        {
                    }
                    else

                                        {
                    }

          }
          else

                    {
          }

          
          __exit_task_FR_Wheel_isr:
          
          ;

          
          pthread_exit(0);
}


void *task_RR_Wheel_isr(void *arg)

{
          
          int rtb_to_int;
          
          int rtb_RelationalOperator;
          
          int rtb_vms;
          
          int u;
          
          int positive_UpperSat_local = 100;
          
          _Bool __cs_tmp_if_cond_12; __cs_tmp_if_cond_12 = (u >= positive_UpperSat_local); 
          if (__cs_tmp_if_cond_12)

                    {
          }
          else

                    {
                    
                    int positive_LowerSat_local = 5;
          }


                    {
                    
                    int reader1;
                    
                    int reader2;
                    
                    int reader3;
                    
                    int reader4;
          }
          
          int tmp0 = 10;
          
          int tmp1 = 10 + rtb_vms;
          
          _Bool __cs_tmp_if_cond_13; __cs_tmp_if_cond_13 = (tmp0 > tmp1); 
          if (__cs_tmp_if_cond_13)

                    {
          }
          else

                    {
          }

          
          int Threshold_10kmh_Threshold_local = 100;
          
          _Bool __cs_tmp_if_cond_14; __cs_tmp_if_cond_14 = (brake_acc_nodiv_ctrl_B_local_RT4 >= Threshold_10kmh_Threshold_local); 
          if (__cs_tmp_if_cond_14)

                    {
                    
                    _Bool __cs_tmp_if_cond_15; __cs_tmp_if_cond_15 = (rtb_RelationalOperator); 
                    if (__cs_tmp_if_cond_15)

                                        {
                    }
                    else

                                        {
                    }

          }
          else

                    {
          }

          
          __exit_task_RR_Wheel_isr:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_t t2;
          
          pthread_t t3;
          
          pthread_t t4;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, task_compute_isr, 0);
          
          pthread_create(& t2, 0, task_RR_Wheel_isr, 0);
          
          pthread_create(& t3, 0, task_FL_Wheel_isr, 0);
          
          pthread_create(& t4, 0, task_FR_Wheel_isr, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


