
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

                    {
                    
                    int __cs_local_main_task_reader1;
                    
                    int __cs_local_main_task_reader2;
                    
                    int __cs_local_main_task_reader3;
                    
                    int __cs_local_main_task_reader4;
          }
          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *task_RR_Wheel_isr_0(void *__cs_param_task_RR_Wheel_isr_arg)

{
          
          int __cs_local_task_RR_Wheel_isr_i = 0;
          
          int __cs_local_task_RR_Wheel_isr_maxnum;
          
          int __cs_local_task_RR_Wheel_isr_mininum;
          
          __cs_local_task_RR_Wheel_isr_i = 0;
          
          int __cs_local_task_RR_Wheel_isr_loop_1_IOVar1;
          
          int __cs_local_task_RR_Wheel_isr_loop_1_block_3;
          
          int __cs_local_task_RR_Wheel_isr_t_1 = 0;
          
          if (! ((__cs_local_task_RR_Wheel_isr_t_1 < 2) && (__cs_local_task_RR_Wheel_isr_i < 10000)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_task_RR_Wheel_isr_loop_1_IOVar1 = __cs_local_task_RR_Wheel_isr_i;
                    
                    __cs_local_task_RR_Wheel_isr_loop_1_block_3 = nondet_int();
                    
                    __cs_local_task_RR_Wheel_isr_i = __cs_local_task_RR_Wheel_isr_loop_1_IOVar1 + (1 * __cs_local_task_RR_Wheel_isr_loop_1_block_3);
                    
                    __CPROVER_assume(__cs_local_task_RR_Wheel_isr_loop_1_block_3 >= 0);
                    
                    __CPROVER_assume(__cs_local_task_RR_Wheel_isr_i < 10000);

                                        {
                              
                              _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_0;
                              
                              __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_0 = __cs_local_task_RR_Wheel_isr_i == 9000;
                              
                              if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_0)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                              
                              _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_1;
                              
                              __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_1 = __cs_local_task_RR_Wheel_isr_i == 10001;
                              
                              if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_1)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                    }
                    
                    __cs_local_task_RR_Wheel_isr_i = __cs_local_task_RR_Wheel_isr_i + 1;
          }
          
          __cs_local_task_RR_Wheel_isr_t_1 = __cs_local_task_RR_Wheel_isr_t_1 + 1;
          
          if (! ((__cs_local_task_RR_Wheel_isr_t_1 < 2) && (__cs_local_task_RR_Wheel_isr_i < 10000)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_task_RR_Wheel_isr_loop_1_IOVar1 = __cs_local_task_RR_Wheel_isr_i;
                    
                    __cs_local_task_RR_Wheel_isr_loop_1_block_3 = nondet_int();
                    
                    __cs_local_task_RR_Wheel_isr_i = __cs_local_task_RR_Wheel_isr_loop_1_IOVar1 + (1 * __cs_local_task_RR_Wheel_isr_loop_1_block_3);
                    
                    __CPROVER_assume(__cs_local_task_RR_Wheel_isr_loop_1_block_3 >= 0);
                    
                    __CPROVER_assume(__cs_local_task_RR_Wheel_isr_i < 10000);

                                        {
                              
                              _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_0;
                              
                              __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_0 = __cs_local_task_RR_Wheel_isr_i == 9000;
                              
                              if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_0)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                              
                              _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_1;
                              
                              __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_1 = __cs_local_task_RR_Wheel_isr_i == 10001;
                              
                              if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_1)

                                                            {
                                        
                                        test_global_array[9000] = 1;
                              }

                    }
                    
                    __cs_local_task_RR_Wheel_isr_i = __cs_local_task_RR_Wheel_isr_i + 1;
          }
          
          __cs_local_task_RR_Wheel_isr_t_1 = __cs_local_task_RR_Wheel_isr_t_1 + 1;
          
          _Bool __cs_loop_1 = (__cs_local_task_RR_Wheel_isr_t_1 < 2) && (__cs_local_task_RR_Wheel_isr_i < 10000);
          
          __VERIFIER_assume(! __cs_loop_1);
          
          __exit_loop_1:
          
          ;

          
          __CPROVER_assume(! (__cs_local_task_RR_Wheel_isr_i < 10000));
          
          __cs_local_task_RR_Wheel_isr_mininum = test_global_array[9000] - 10;
          
          __cs_local_task_RR_Wheel_isr_maxnum = test_global_array[0] + 10;
          
          int __cs_local_task_RR_Wheel_isr_rtb_to_int;
          
          int __cs_local_task_RR_Wheel_isr_rtb_RelationalOperator;
          
          int __cs_local_task_RR_Wheel_isr_rtb_vms;
          
          int __cs_local_task_RR_Wheel_isr_u;
          
          int __cs_local_task_RR_Wheel_isr_positive_UpperSat_local = 100;
          
          _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_2;
          
          __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_2 = __cs_local_task_RR_Wheel_isr_u >= __cs_local_task_RR_Wheel_isr_positive_UpperSat_local;
          
          if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_2)

                    {
          }
          else

                    {
                    
                    int __cs_local_task_RR_Wheel_isr_positive_LowerSat_local = 5;
          }

          
          int __cs_local_task_RR_Wheel_isr_tmp0 = 10;
          
          int __cs_local_task_RR_Wheel_isr_tmp1 = 10 + __cs_local_task_RR_Wheel_isr_rtb_vms;
          
          _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_3;
          
          __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_3 = __cs_local_task_RR_Wheel_isr_tmp0 > __cs_local_task_RR_Wheel_isr_tmp1;
          
          if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_3)

                    {
          }
          else

                    {
          }

          
          int __cs_local_task_RR_Wheel_isr_Threshold_10kmh_Threshold_local = 100;
          
          _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_4;
          
          __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_4 = brake_acc_nodiv_ctrl_B_local_RT4 >= __cs_local_task_RR_Wheel_isr_Threshold_10kmh_Threshold_local;
          
          if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_4)

                    {
                    
                    _Bool __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_5;
                    
                    __cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_5 = __cs_local_task_RR_Wheel_isr_rtb_RelationalOperator;
                    
                    if (__cs_local_task_RR_Wheel_isr___cs_tmp_if_cond_5)

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
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, task_compute_isr_0, 0);
          
          pthread_create(& __cs_local_main_t2, 0, task_RR_Wheel_isr_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

