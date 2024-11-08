
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

int *svp_simple_009_001_p;

int *svp_simple_009_001_q;

int *svp_simple_009_001_m;

void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          int svp_simple_009_001_local_var1 = 0x01;
          
          int svp_simple_009_001_local_var2 = 0x09;
          
          svp_simple_009_001_m = & svp_simple_009_001_local_var2;
          
          * svp_simple_009_001_m = 0x06;
          
          * svp_simple_009_001_m = 0x06;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_009_001_isr_1(void *arg)

{
          
          int reader1;
          
          int reader2;

                    {
                    
                    int i = 0;
          }
          
          int svp_simple_009_001_local_var3 = 0x08;
          
          svp_simple_009_001_m = & svp_simple_009_001_local_var3;
          
          reader2 = * svp_simple_009_001_m;
          
          __exit_svp_simple_009_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_009_001_isr_1, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


