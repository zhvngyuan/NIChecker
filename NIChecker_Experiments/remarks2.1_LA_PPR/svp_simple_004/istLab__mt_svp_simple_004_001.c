
typedef int pthread_t;

typedef unsigned char unsigned8;

typedef unsigned short unsigned16;

typedef unsigned int unsigned32;

typedef unsigned long long unsigned64;

typedef signed char signed8;

typedef signed short signed16;

typedef signed int signed32;

typedef signed long long signed64;

void idlerun();

void enable_isr(int);

void disable_isr(int);

void init();

int rand();

int svp_simple_004_001_condition1 = 1;

int svp_simple_004_001_condition2 = 1;

int svp_simple_004_001_condition3 = 1;

int svp_simple_004_001_condition4 = 1;

int svp_simple_004_001_condition5 = 1;

int svp_simple_004_001_condition6 = 1;

int svp_simple_004_001_global_var1 = 0x11;

int svp_simple_004_001_global_var2 = 0x22;

int svp_simple_004_001_global_var3 = 0x33;

void *main_task_0(void *__cs_param_main_task_arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          int __cs_local_main_task_reader1;
          
          int __cs_local_main_task_reader2;
          
          int __cs_local_main_task_reader3;
          
          int __cs_local_main_task_reader4;
          
          int __cs_local_main_task_reader5;
          
          int __cs_local_main_task_reader6;
          
          disable_isr(2);
          
          _Bool __cs_local_main_task___cs_tmp_if_cond_0;
          
          __cs_local_main_task___cs_tmp_if_cond_0 = svp_simple_004_001_condition1 == 1;
          
          if (__cs_local_main_task___cs_tmp_if_cond_0)

                    {
                    
                    __cs_local_main_task_reader1 = svp_simple_004_001_global_var1;
                    
                    __cs_local_main_task_reader5 = svp_simple_004_001_global_var3;
          }

          
          _Bool __cs_local_main_task___cs_tmp_if_cond_1;
          
          __cs_local_main_task___cs_tmp_if_cond_1 = svp_simple_004_001_condition2 == 1;
          
          if (__cs_local_main_task___cs_tmp_if_cond_1)

                    {
                    
                    __cs_local_main_task_reader2 = svp_simple_004_001_global_var1;
                    
                    __cs_local_main_task_reader6 = svp_simple_004_001_global_var3;
          }

          
          _Bool __cs_local_main_task___cs_tmp_if_cond_2;
          
          __cs_local_main_task___cs_tmp_if_cond_2 = svp_simple_004_001_condition4 == 1;
          
          if (__cs_local_main_task___cs_tmp_if_cond_2)

                    {
                    
                    __cs_local_main_task_reader3 = svp_simple_004_001_global_var2;
          }

          
          _Bool __cs_local_main_task___cs_tmp_if_cond_3;
          
          __cs_local_main_task___cs_tmp_if_cond_3 = svp_simple_004_001_condition5 == 1;
          
          if (__cs_local_main_task___cs_tmp_if_cond_3)

                    {
                    
                    __cs_local_main_task_reader4 = svp_simple_004_001_global_var2;
          }

          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_004_001_isr_1_0(void *__cs_param_svp_simple_004_001_isr_1_arg)

{
          
          svp_simple_004_001_condition6 = 0;
          
          _Bool __cs_local_svp_simple_004_001_isr_1___cs_tmp_if_cond_4;
          
          __cs_local_svp_simple_004_001_isr_1___cs_tmp_if_cond_4 = svp_simple_004_001_condition3 == 1;
          
          if (__cs_local_svp_simple_004_001_isr_1___cs_tmp_if_cond_4)

                    {
                    
                    svp_simple_004_001_global_var1 = 0xaa;
          }
          else

                    {
                    
                    svp_simple_004_001_global_var3 = 0xcc;
          }

          
          enable_isr(2);
          
          __exit_svp_simple_004_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_004_001_isr_2_0(void *__cs_param_svp_simple_004_001_isr_2_arg)

{
          
          _Bool __cs_local_svp_simple_004_001_isr_2___cs_tmp_if_cond_5;
          
          __cs_local_svp_simple_004_001_isr_2___cs_tmp_if_cond_5 = svp_simple_004_001_condition6 == 1;
          
          if (__cs_local_svp_simple_004_001_isr_2___cs_tmp_if_cond_5)

                    {
                    
                    svp_simple_004_001_global_var2 = 0x22;
          }

          
          __exit_svp_simple_004_001_isr_2:
          
          ;

          
          pthread_exit(0);
}


void idlerun()

{
          
          int __cs_local_idlerun_i = 0;
          
          __cs_local_idlerun_i = 0;
          
          int __cs_local_idlerun_loop_1_IOVar1;
          
          int __cs_local_idlerun_loop_1_block_1;
          
          int __cs_local_idlerun_t_1 = 0;
          
          if (! ((__cs_local_idlerun_t_1 < 1) && (__cs_local_idlerun_i <= 100)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_idlerun_loop_1_IOVar1 = __cs_local_idlerun_i;
                    
                    __cs_local_idlerun_loop_1_block_1 = nondet_int();
                    
                    __cs_local_idlerun_i = __cs_local_idlerun_loop_1_IOVar1 + (1 * __cs_local_idlerun_loop_1_block_1);
                    
                    __CPROVER_assume(__cs_local_idlerun_loop_1_block_1 >= 0);
                    
                    __CPROVER_assume(__cs_local_idlerun_i <= 100);

                                        {
                    }
                    
                    __cs_local_idlerun_i = __cs_local_idlerun_i + 1;
          }
          
          __cs_local_idlerun_t_1 = __cs_local_idlerun_t_1 + 1;
          
          if (! ((__cs_local_idlerun_t_1 < 1) && (__cs_local_idlerun_i <= 100)))

                    {
                    
                    goto __exit_loop_1;
          }


                    {
                    
                    __cs_local_idlerun_loop_1_IOVar1 = __cs_local_idlerun_i;
                    
                    __cs_local_idlerun_loop_1_block_1 = nondet_int();
                    
                    __cs_local_idlerun_i = __cs_local_idlerun_loop_1_IOVar1 + (1 * __cs_local_idlerun_loop_1_block_1);
                    
                    __CPROVER_assume(__cs_local_idlerun_loop_1_block_1 >= 0);
                    
                    __CPROVER_assume(__cs_local_idlerun_i <= 100);

                                        {
                    }
                    
                    __cs_local_idlerun_i = __cs_local_idlerun_i + 1;
          }
          
          __cs_local_idlerun_t_1 = __cs_local_idlerun_t_1 + 1;
          
          _Bool __cs_loop_1 = (__cs_local_idlerun_t_1 < 1) && (__cs_local_idlerun_i <= 100);
          
          __VERIFIER_assume(! __cs_loop_1);
          
          __exit_loop_1:
          
          ;

          
          __CPROVER_assume(! (__cs_local_idlerun_i <= 100));
}


void init()

{
          
          enable_isr(- 1);
}


int main()

{
          
          pthread_t __cs_local_main_t0;
          
          pthread_t __cs_local_main_t1;
          
          pthread_t __cs_local_main_t2;
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, svp_simple_004_001_isr_1_0, 0);
          
          pthread_create(& __cs_local_main_t2, 0, svp_simple_004_001_isr_2_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

