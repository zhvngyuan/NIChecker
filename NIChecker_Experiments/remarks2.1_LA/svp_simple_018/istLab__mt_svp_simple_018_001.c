
typedef int pthread_t;

float svp_simple_018_001_func1();

float svp_simple_018_001_func2();

void svp_simple_018_001_i_func1();

float svp_simple_018_001_para1;

float svp_simple_018_001_para2;

void *main_task_0(void *__cs_param_main_task_arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          float __cs_local_main_task_svp_simple_018_001_perimete = 0;
          
          float __cs_local_main_task_svp_simple_018_001_area = 0;
          
          float __cs_local_main_task___cs_retval__svp_simple_018_001_func1_0;

                    {
                    
                    float __cs_local_main_task_perimete = 0.0;
                    
                    __cs_local_main_task_perimete = (2 * svp_simple_018_001_para1) * svp_simple_018_001_para2;
          }
          
          float __cs_local_main_task___cs_retval__svp_simple_018_001_func2_0;

                    {
                    
                    float __cs_local_main_task_area = 0.0;
                    
                    float __cs_temporary_0;
                    
                    __cs_temporary_0 = svp_simple_018_001_para2;
                    
                    float __cs_temporary_1;
                    
                    __cs_temporary_1 = svp_simple_018_001_para2;
                    
                    __cs_local_main_task_area = (svp_simple_018_001_para1 * __cs_temporary_0) * __cs_temporary_1;
          }
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_018_001_isr_2_0(void *__cs_param_svp_simple_018_001_isr_2_arg)

{

                    {
                    
                    int __cs_local_svp_simple_018_001_isr_2_i = 0;
          }

                    {
                    
                    svp_simple_018_001_para2 = 1.0;
          }
          
          __exit_svp_simple_018_001_isr_2:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_018_001_isr_1_0(void *__cs_param_svp_simple_018_001_isr_1_arg)

{

                    {
                    
                    int __cs_local_svp_simple_018_001_isr_1_i = 0;
          }
          
          svp_simple_018_001_para1 = 2.0;
          
          __exit_svp_simple_018_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t __cs_local_main_t0;
          
          pthread_t __cs_local_main_t1;
          
          pthread_t __cs_local_main_t2;
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, svp_simple_018_001_isr_1_0, 0);
          
          pthread_create(& __cs_local_main_t2, 0, svp_simple_018_001_isr_2_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

