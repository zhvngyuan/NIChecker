
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

int svp_simple_020_001_global_var;

int svp_simple_020_001_global_para;

int svp_simple_020_001_global_flag = 0;

void *main_task(void *arg)

{

                    {
                    
                    enable_isr(- 1);
          }
          
          disable_isr(2);
          
          int reader1;
          
          int reader2;
          
          int svp_simple_020_001_local_var1;
          
          int svp_simple_020_001_local_var2;
          
          svp_simple_020_001_local_var1 = nondet_rand();
          
          svp_simple_020_001_local_var2 = nondet_rand();
          
          _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = ((svp_simple_020_001_local_var1 + svp_simple_020_001_local_var2) > svp_simple_020_001_global_para); 
          if (__cs_tmp_if_cond_0)

                    {
          }

          
          _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = ((svp_simple_020_001_local_var1 + svp_simple_020_001_local_var2) < svp_simple_020_001_global_para); 
          if (__cs_tmp_if_cond_1)

                    {
          }

          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_020_001_isr_2(void *arg)

{
          
          _Bool __cs_tmp_if_cond_2; __cs_tmp_if_cond_2 = (svp_simple_020_001_global_flag == 1); 
          if (__cs_tmp_if_cond_2)

                    {
                    
                    svp_simple_020_001_global_para = 11;
          }

          
          __exit_svp_simple_020_001_isr_2:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_020_001_isr_1(void *arg)

{
          
          svp_simple_020_001_global_flag = 1;
          
          enable_isr(2);
          
          __exit_svp_simple_020_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_t t2;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_020_001_isr_1, 0);
          
          pthread_create(& t2, 0, svp_simple_020_001_isr_2, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


