
typedef int pthread_t;

float svp_simple_018_001_func1();

float svp_simple_018_001_func2();

void svp_simple_018_001_i_func1();

float svp_simple_018_001_para1;

float svp_simple_018_001_para2;

void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          float svp_simple_018_001_perimete = 0;
          
          float svp_simple_018_001_area = 0;
          
          float __cs_retval__svp_simple_018_001_func1_0;

                    {
                    
                    float perimete = 0.0;
                    
                    perimete = (2 * svp_simple_018_001_para1) * svp_simple_018_001_para2;
          }
          
          float __cs_retval__svp_simple_018_001_func2_0;

                    {
                    
                    float area = 0.0;
                    
                    area = (svp_simple_018_001_para1 * svp_simple_018_001_para2) * svp_simple_018_001_para2;
          }
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_018_001_isr_2(void *arg)

{

                    {
                    
                    int i = 0;
          }

                    {
                    
                    svp_simple_018_001_para2 = 1.0;
          }
          
          __exit_svp_simple_018_001_isr_2:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_018_001_isr_1(void *arg)

{

                    {
                    
                    int i = 0;
          }
          
          svp_simple_018_001_para1 = 2.0;
          
          __exit_svp_simple_018_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_t t2;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_018_001_isr_1, 0);
          
          pthread_create(& t2, 0, svp_simple_018_001_isr_2, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


