
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

void *task_compute_isr_0(void *__cs_param_task_compute_isr_arg)

{
          
          test_global_array[9000] = 999;
          
          __exit_task_compute_isr:
          
          ;

          
          pthread_exit(0);
}


void *main_task_0(void *__cs_param_main_task_arg)

{
          
          disable_isr(- 1);
          
          enable_isr(- 1);
          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *task_FL_Wheel_isr_0(void *__cs_param_task_FL_Wheel_isr_arg)

{
          
          int __cs_local_task_FL_Wheel_isr_rtb_to_int1;
          
          int __cs_local_task_FL_Wheel_isr_rtb_RelationalOperator;
          
          int __cs_local_task_FL_Wheel_isr_rtb_vms;
          
          int __cs_local_task_FL_Wheel_isr_u;
          
          int __cs_local_task_FL_Wheel_isr_positive_UpperSat_local = 100;
          
          _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_0;
          
          __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_0 = __cs_local_task_FL_Wheel_isr_u >= __cs_local_task_FL_Wheel_isr_positive_UpperSat_local;
          
          if (__cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_0)

                    {
          }
          else

                    {
                    
                    int __cs_local_task_FL_Wheel_isr_positive_LowerSat_local = 5;
          }

          
          int __cs_local_task_FL_Wheel_isr_tmp0 = 10;
          
          int __cs_local_task_FL_Wheel_isr_tmp1 = 10 + __cs_local_task_FL_Wheel_isr_rtb_vms;
          
          _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_1;
          
          __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_1 = __cs_local_task_FL_Wheel_isr_tmp0 > __cs_local_task_FL_Wheel_isr_tmp1;
          
          if (__cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_1)

                    {
          }
          else

                    {
          }

          
          int __cs_local_task_FL_Wheel_isr_Threshold_10kmh_Threshold_local = 100;
          
          _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_2;
          
          __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_2 = brake_acc_nodiv_ctrl_B_local_RT4 >= __cs_local_task_FL_Wheel_isr_Threshold_10kmh_Threshold_local;
          
          if (__cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_2)

                    {
                    
                    _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_3;
                    
                    __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_3 = __cs_local_task_FL_Wheel_isr_rtb_RelationalOperator;
                    
                    if (__cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_3)

                                        {
                    }
                    else

                                        {
                    }

          }
          else

                    {
          }

          
          int __cs_local_task_FL_Wheel_isr_i = 0;
          
          int __cs_local_task_FL_Wheel_isr_maxnum;
          
          int __cs_local_task_FL_Wheel_isr_mininum;
          
          __cs_local_task_FL_Wheel_isr_i = 0;
          
          int __cs_local_task_FL_Wheel_isr_loop_1_IOVar1;
          
          int __cs_local_task_FL_Wheel_isr_loop_1_block_3;
          
          int __cs_local_task_FL_Wheel_isr_t_1 = 0;
          
          if (! ((__cs_local_task_FL_Wheel_isr_t_1 < 2) && (__cs_local_task_FL_Wheel_isr_i < 10000)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_task_FL_Wheel_isr_loop_1_IOVar1 = __cs_local_task_FL_Wheel_isr_i;
                    
                    __cs_local_task_FL_Wheel_isr_loop_1_block_3 = nondet_int();
                    
                    __cs_local_task_FL_Wheel_isr_i = __cs_local_task_FL_Wheel_isr_loop_1_IOVar1 + (1 * __cs_local_task_FL_Wheel_isr_loop_1_block_3);
                    
                    __CPROVER_assume(__cs_local_task_FL_Wheel_isr_loop_1_block_3 >= 0);
                    
                    __CPROVER_assume(__cs_local_task_FL_Wheel_isr_i < 10000);

                                        {
                              
                              _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_4;
                              
                              __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_4 = __cs_local_task_FL_Wheel_isr_i == 9000;
                              
                              if (__cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_4)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                              
                              _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_5;
                              
                              __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_5 = __cs_local_task_FL_Wheel_isr_i == 10001;
                              
                              if (__cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_5)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                    }
                    
                    __cs_local_task_FL_Wheel_isr_i = __cs_local_task_FL_Wheel_isr_i + 1;
          }
          
          __cs_local_task_FL_Wheel_isr_t_1 = __cs_local_task_FL_Wheel_isr_t_1 + 1;
          
          if (! ((__cs_local_task_FL_Wheel_isr_t_1 < 2) && (__cs_local_task_FL_Wheel_isr_i < 10000)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_task_FL_Wheel_isr_loop_1_IOVar1 = __cs_local_task_FL_Wheel_isr_i;
                    
                    __cs_local_task_FL_Wheel_isr_loop_1_block_3 = nondet_int();
                    
                    __cs_local_task_FL_Wheel_isr_i = __cs_local_task_FL_Wheel_isr_loop_1_IOVar1 + (1 * __cs_local_task_FL_Wheel_isr_loop_1_block_3);
                    
                    __CPROVER_assume(__cs_local_task_FL_Wheel_isr_loop_1_block_3 >= 0);
                    
                    __CPROVER_assume(__cs_local_task_FL_Wheel_isr_i < 10000);

                                        {
                              
                              _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_4;
                              
                              __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_4 = __cs_local_task_FL_Wheel_isr_i == 9000;
                              
                              if (__cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_4)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                              
                              _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_5;
                              
                              __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_5 = __cs_local_task_FL_Wheel_isr_i == 10001;
                              
                              if (__cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_5)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                    }
                    
                    __cs_local_task_FL_Wheel_isr_i = __cs_local_task_FL_Wheel_isr_i + 1;
          }
          
          __cs_local_task_FL_Wheel_isr_t_1 = __cs_local_task_FL_Wheel_isr_t_1 + 1;
          
          _Bool __cs_loop_1 = (__cs_local_task_FL_Wheel_isr_t_1 < 2) && (__cs_local_task_FL_Wheel_isr_i < 10000);
          
          __VERIFIER_assume(! __cs_loop_1);
          
          __exit_loop_1:
          
          ;

          
          __CPROVER_assume(! (__cs_local_task_FL_Wheel_isr_i < 10000));
          
          __cs_local_task_FL_Wheel_isr_mininum = test_global_array[9000] - 10;
          
          __cs_local_task_FL_Wheel_isr_maxnum = test_global_array[0] + 10;
          
          int __cs_local_task_FL_Wheel_isr_In_BrakePedal;
          
          _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_6;
          
          __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_6 = __cs_local_task_FL_Wheel_isr_rtb_RelationalOperator;
          
          if (__cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_6)

                    {
          }
          else

                    {
          }

          
          int __cs_local_task_FL_Wheel_isr_Pedal_map_UpperSat = 50;
          
          int __cs_local_task_FL_Wheel_isr_Pedal_map_LowerSat = 20;
          
          int __cs_local_task_FL_Wheel_isr_tmp;
          
          _Bool __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_7;
          
          __cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_7 = __cs_local_task_FL_Wheel_isr_In_BrakePedal <= __cs_local_task_FL_Wheel_isr_Pedal_map_LowerSat;
          
          if (__cs_local_task_FL_Wheel_isr___cs_tmp_if_cond_7)

                    {
          }
          else

                    {
          }

          
          __exit_task_FL_Wheel_isr:
          
          ;

          
          pthread_exit(0);
}


void *task_FR_Wheel_isr_0(void *__cs_param_task_FR_Wheel_isr_arg)

{
          
          int __cs_local_task_FR_Wheel_isr_rtb_to_int_k;
          
          int __cs_local_task_FR_Wheel_isr_rtb_RelationalOperator;
          
          int __cs_local_task_FR_Wheel_isr_rtb_vms = 10 + brake_acc_nodiv_ctrl_B_local_RT4;
          
          int __cs_local_task_FR_Wheel_isr_u = __cs_local_task_FR_Wheel_isr_rtb_vms + 10;
          
          int __cs_local_task_FR_Wheel_isr_positive_UpperSat_local = 100;
          
          _Bool __cs_local_task_FR_Wheel_isr___cs_tmp_if_cond_8;
          
          __cs_local_task_FR_Wheel_isr___cs_tmp_if_cond_8 = __cs_local_task_FR_Wheel_isr_u >= __cs_local_task_FR_Wheel_isr_positive_UpperSat_local;
          
          if (__cs_local_task_FR_Wheel_isr___cs_tmp_if_cond_8)

                    {
          }
          else

                    {
                    
                    int __cs_local_task_FR_Wheel_isr_positive_LowerSat_local = 5;
          }

          
          int __cs_local_task_FR_Wheel_isr_tmp0 = 10;
          
          int __cs_local_task_FR_Wheel_isr_tmp1 = 10 + __cs_local_task_FR_Wheel_isr_rtb_vms;
          
          _Bool __cs_local_task_FR_Wheel_isr___cs_tmp_if_cond_9;
          
          __cs_local_task_FR_Wheel_isr___cs_tmp_if_cond_9 = __cs_local_task_FR_Wheel_isr_tmp0 > __cs_local_task_FR_Wheel_isr_tmp1;
          
          if (__cs_local_task_FR_Wheel_isr___cs_tmp_if_cond_9)

                    {
          }
          else

                    {
          }

          
          int __cs_local_task_FR_Wheel_isr_Threshold_10kmh_Threshold_local = 100;
          
          _Bool __cs_local_task_FR_Wheel_isr___cs_tmp_if_cond_10;
          
          __cs_local_task_FR_Wheel_isr___cs_tmp_if_cond_10 = brake_acc_nodiv_ctrl_B_local_RT4 >= __cs_local_task_FR_Wheel_isr_Threshold_10kmh_Threshold_local;
          
          if (__cs_local_task_FR_Wheel_isr___cs_tmp_if_cond_10)

                    {
                    
                    _Bool __cs_local_task_FR_Wheel_isr___cs_tmp_if_cond_11;
                    
                    __cs_local_task_FR_Wheel_isr___cs_tmp_if_cond_11 = __cs_local_task_FR_Wheel_isr_rtb_RelationalOperator;
                    
                    if (__cs_local_task_FR_Wheel_isr___cs_tmp_if_cond_11)

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


void *task_RR_Wheel_isr_0(void *__cs_param_task_RR_Wheel_isr_arg)

{
          
          int __cs_local_task_RR_Wheel_isr_rtb_to_int;
          
          int __cs_local_task_RR_Wheel_isr_rtb_RelationalOperator;
          
          int __cs_local_task_RR_Wheel_isr_rtb_vms;
          
          int __cs_local_task_RR_Wheel_isr_u;
          
          int __cs_local_task_RR_Wheel_isr_positive_UpperSat_local = 100;
          
          _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_12;
          
          __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_12 = __cs_local_task_RR_Wheel_isr_u >= __cs_local_task_RR_Wheel_isr_positive_UpperSat_local;
          
          if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_12)

                    {
          }
          else

                    {
                    
                    int __cs_local_task_RR_Wheel_isr_positive_LowerSat_local = 5;
          }


                    {
                    
                    int __cs_local_task_RR_Wheel_isr_reader1;
                    
                    int __cs_local_task_RR_Wheel_isr_reader2;
                    
                    int __cs_local_task_RR_Wheel_isr_reader3;
                    
                    int __cs_local_task_RR_Wheel_isr_reader4;
          }
          
          int __cs_local_task_RR_Wheel_isr_tmp0 = 10;
          
          int __cs_local_task_RR_Wheel_isr_tmp1 = 10 + __cs_local_task_RR_Wheel_isr_rtb_vms;
          
          _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_13;
          
          __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_13 = __cs_local_task_RR_Wheel_isr_tmp0 > __cs_local_task_RR_Wheel_isr_tmp1;
          
          if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_13)

                    {
          }
          else

                    {
          }

          
          int __cs_local_task_RR_Wheel_isr_Threshold_10kmh_Threshold_local = 100;
          
          _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_14;
          
          __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_14 = brake_acc_nodiv_ctrl_B_local_RT4 >= __cs_local_task_RR_Wheel_isr_Threshold_10kmh_Threshold_local;
          
          if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_14)

                    {
                    
                    _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_15;
                    
                    __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_15 = __cs_local_task_RR_Wheel_isr_rtb_RelationalOperator;
                    
                    if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_15)

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
          
          pthread_t __cs_local_main_t0;
          
          pthread_t __cs_local_main_t1;
          
          pthread_t __cs_local_main_t2;
          
          pthread_t __cs_local_main_t3;
          
          pthread_t __cs_local_main_t4;
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, task_compute_isr_0, 0);
          
          pthread_create(& __cs_local_main_t2, 0, task_RR_Wheel_isr_0, 0);
          
          pthread_create(& __cs_local_main_t3, 0, task_FL_Wheel_isr_0, 0);
          
          pthread_create(& __cs_local_main_t4, 0, task_FR_Wheel_isr_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

