
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

int svp_simple_016_001_global_var1;

void *main_task_0(void *__cs_param_main_task_arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          int __cs_local_main_task_reader1;
          
          svp_simple_016_001_global_var1 = 0x01;
          
          int __cs_temporary_0;
          
          __cs_temporary_0 = svp_simple_016_001_global_var1;
          
          int __cs_temporary_1;
          
          __cs_temporary_1 = svp_simple_016_001_global_var1;
          
          int __cs_temporary_2;
          
          __cs_temporary_2 = svp_simple_016_001_global_var1;
          
          __cs_local_main_task_reader1 = (__cs_temporary_0 + __cs_temporary_1) + __cs_temporary_2;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_016_001_isr_1_0(void *__cs_param_svp_simple_016_001_isr_1_arg)

{

                    {
                    
                    int __cs_local_svp_simple_016_001_isr_1_i = 0;
          }
          
          svp_simple_016_001_global_var1 = 0x09;
          
          __exit_svp_simple_016_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t __cs_local_main_t0;
          
          pthread_t __cs_local_main_t1;
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, svp_simple_016_001_isr_1_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

