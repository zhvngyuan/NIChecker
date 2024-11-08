
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

void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          int svp_simple_010_001_local_var1 = 0x01;
          
          int svp_simple_010_001_local_var2 = 0x02;
          
          int svp_simple_010_001_local_var3 = 0x03;
          
          int svp_simple_010_001_local_var4 = 0x04;
          
          svp_simple_010_001_global_union.header = svp_simple_010_001_local_var1;
          
          svp_simple_010_001_global_union.data = svp_simple_010_001_local_var2;
          
          svp_simple_010_001_global_struct.header = svp_simple_010_001_local_var3;
          
          svp_simple_010_001_global_struct.data = svp_simple_010_001_local_var4;
          
          __exit_main_task:
          ;

          pthread_exit(0);
}


void *svp_simple_010_001_isr_1(void *arg)

{

                    {
                    
                    int i = 0;
                    
                    for (i = 0; i <= 100; i++)

                                        {
                    }

          }
          
          int reader1;
          
          int reader2;
          
          reader1 = svp_simple_010_001_global_union.header;
          
          reader2 = svp_simple_010_001_global_struct.header;
          
          __exit_svp_simple_010_001_isr_1:
          ;

          pthread_exit(0);
}


void idlerun()

{
          
          int i = 0;
          
          for (i = 0; i <= 100; i++)

                    {
          }

}


void init()

{
          
          enable_isr(- 1);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_010_001_isr_1, 0);
          
          __exit_main:
          ;

          pthread_exit(0);
}

