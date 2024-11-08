
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

typedef struct pack1
{
          
          unsigned char header;
          
          unsigned int data;
} svp_simple_010_001_union;

typedef struct pack2
{
          
          unsigned char header;
          
          unsigned int data;
} svp_simple_010_001_struct;

svp_simple_010_001_union svp_simple_010_001_global_union;

svp_simple_010_001_struct svp_simple_010_001_global_struct;

void *main_task_0(void *__cs_param_main_task_arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          int __cs_local_main_task_svp_simple_010_001_local_var1 = 0x01;
          
          int __cs_local_main_task_svp_simple_010_001_local_var2 = 0x02;
          
          int __cs_local_main_task_svp_simple_010_001_local_var3 = 0x03;
          
          int __cs_local_main_task_svp_simple_010_001_local_var4 = 0x04;
          
          svp_simple_010_001_global_union.header = __cs_local_main_task_svp_simple_010_001_local_var1;
          
          svp_simple_010_001_global_union.data = __cs_local_main_task_svp_simple_010_001_local_var2;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_010_001_isr_1_0(void *__cs_param_svp_simple_010_001_isr_1_arg)

{

                    {
                    
                    int __cs_local_svp_simple_010_001_isr_1_i = 0;
          }
          
          int __cs_local_svp_simple_010_001_isr_1_reader1;
          
          int __cs_local_svp_simple_010_001_isr_1_reader2;
          
          __cs_local_svp_simple_010_001_isr_1_reader1 = svp_simple_010_001_global_union.header;
          
          __exit_svp_simple_010_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t __cs_local_main_t0;
          
          pthread_t __cs_local_main_t1;
          
          pthread_create(& __cs_local_main_t0, 0, main_task_0, 0);
          
          pthread_create(& __cs_local_main_t1, 0, svp_simple_010_001_isr_1_0, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}

