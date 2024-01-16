void * task_measure2_isr( void * arg ) {
    tickCounter = 0; 
    if( tickCounter == 0 ){
    }
    
    __exit_task_measure2_isr : 
    ;
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    systemState = 0; 
    goto __exit_main_task ; 
    __exit_main_task : 
    ;
    pthread_exit ( 0 ); 
}
void * task_communicate_isr( void * arg ) {
    int _startTime = 1 ; 
    int _interval = 1 ; 
    cmd = nondet_rand ( ); 
    rspStatus = nondet_rand ( ); 
    if( ( ( ( cmd == 2 ) || ( cmd == 3 ) ) || ( cmd == 4 ) ) || ( cmd == 1 ) ){
    }
    
    if( rspStatus == 1 ){
        if( cmd == 2 ){
            if( systemState != 1 ){
            }
            else {
                systemState = 0; 
            }

        }
        
        if( cmd == 3 ){
        }
        
        if( cmd == 4 ){
        }
        
        if( cmd == 0 ){
            if( systemState != 0 ){
            }
            else {
                int tmp_num = numberOfRecords + 1 ; 
                if( tmp_num >= 64 ){
                }
                
                tickCounter = 0; 
                systemState = 1; 
            }

        }
        
    }
    
    __exit_task_communicate_isr : 
    ;
    pthread_exit ( 0 ); 
}
void * task_measure3_isr( void * arg ) {
    tickCounter ++; 
    __exit_task_measure3_isr : 
    ;
    pthread_exit ( 0 ); 
}
void * task_measure1_isr( void * arg ) {
    int tmp_tickCounter = tickCounter ; 
    int tmp_interval = interval ; 
    int value = 1 ; 
    __exit_task_measure1_isr : 
    ;
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_t t2 ; 
    pthread_t t3 ; 
    pthread_t t4 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , task_measure1_isr , 0 ); 
    pthread_create ( & t2 , 0 , task_measure2_isr , 0 ); 
    pthread_create ( & t3 , 0 , task_measure3_isr , 0 ); 
    pthread_create ( & t4 , 0 , task_communicate_isr , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
