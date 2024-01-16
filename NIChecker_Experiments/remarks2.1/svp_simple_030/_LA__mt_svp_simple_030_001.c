
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

void svp_simple_030_001_init();

void addData();

int svp_simple_030_001_isr_1_flag;

int svp_simple_030_001_gloable_var;

void *svp_simple_030_001_isr_2(void *arg)

{
          
          _Bool __cs_tmp_if_cond_0; __cs_tmp_if_cond_0 = (svp_simple_030_001_isr_1_flag); 
          if (__cs_tmp_if_cond_0)

                    {
                    
                    svp_simple_030_001_gloable_var++;
          }

          
          __exit_svp_simple_030_001_isr_2:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_030_001_isr_3(void *arg)

{
          
          svp_simple_030_001_gloable_var++;
          
          __exit_svp_simple_030_001_isr_3:
          
          ;

          
          pthread_exit(0);
}


void *main_task(void *arg)

{
          
          disable_isr(- 1);

                    {
                    
                    svp_simple_030_001_gloable_var = rand();
                    
                    svp_simple_030_001_isr_1_flag = rand();

                                        {
                              
                              enable_isr(- 1);
                    }
          }
          
          disable_isr(- 1);
          
          enable_isr(1);
          
          _Bool __cs_tmp_if_cond_1; __cs_tmp_if_cond_1 = (svp_simple_030_001_gloable_var > 12); 
          if (__cs_tmp_if_cond_1)

                    {
                    
                    svp_simple_030_001_gloable_var = 0;
          }

          
          goto __exit_main_task;
          
          ;
          
          __exit_main_task:
          
          ;

          
          pthread_exit(0);
}


void *svp_simple_030_001_isr_1(void *arg)

{

                    {
                    
                    svp_simple_030_001_gloable_var++;
          }
          
          svp_simple_030_001_isr_1_flag = 0;
          
          enable_isr(2);
          
          __exit_svp_simple_030_001_isr_1:
          
          ;

          
          pthread_exit(0);
}


int main()

{
          
          pthread_t t0;
          
          pthread_t t1;
          
          pthread_t t2;
          
          pthread_t t3;
          
          pthread_create(& t0, 0, main_task, 0);
          
          pthread_create(& t1, 0, svp_simple_030_001_isr_1, 0);
          
          pthread_create(& t2, 0, svp_simple_030_001_isr_2, 0);
          
          pthread_create(& t3, 0, svp_simple_030_001_isr_3, 0);
          
          __exit_main:
          
          ;

          
          pthread_exit(0);
}


