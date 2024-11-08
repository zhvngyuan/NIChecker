void * task_measure2_isr( void * arg ) {
    if(cond){task_communicate_isr();}
    if(cond){goto label_1;}

    cnt2 ++; 
    tickCounter = 0; 
    label_1:
    if( tickCounter == 0 ){
    }
    
    __exit_task_measure2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {

    systemState = 0; 
    goto __exit_main_task ;; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
    if(cond){task_measure2_isr();}
    if(cond){task_communicate_isr();}
    if(cond){task_measure3_isr();}
    if(cond){task_measure1_isr();}
}
void stop(  ) {
    systemState = 0; 
}
void * task_communicate_isr( void * arg ) {

    cnt4 ++; 
    int _startTime = 1 ; 
    int _interval = 1 ; 
    cmd = nondet_rand ( ); 
    rspStatus = nondet_rand ( ); 
    decodingStatus = 0; 
    if( ( ( ( cmd == 2 ) || ( cmd == 3 ) ) || ( cmd == 4 ) ) || ( cmd == 1 ) ){
        decodingStatus = 1; 
    }
    
    if( rspStatus == 1 ){
        if( cmd == 2 ){
            if( systemState != 1 ){
                rspStatus = 0; 
            }
            else {
                systemState = 0; 
            }

            sendit = 1; 
        }
        
        if( cmd == 3 ){
            sendit = 1; 
        }
        
        if( cmd == 4 ){
            sendit = 1; 
        }
        
        if( cmd == 0 ){
            if( systemState != 0 ){
                rspStatus = 0; 
            }
            else {
                int tmp_num = numberOfRecords + 1 ; 
                if( tmp_num >= 64 ){
                    systemState = 0; 
                }
                
                intervalCounter = 0; 
                tickCounter = 0; 
                numberOfRecords = 0; 
                startTime = _startTime; 
                interval = _interval; 
                systemState = 1; 
                sendit = 1; 
            }

        }
        
    }
    
    __exit_task_communicate_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void start( int _startTime , int _interval ) {
    if( ( numberOfRecords + 1 ) >= 64 ){
        systemState = 0; 
    }
    
    intervalCounter = 0; 
    tickCounter = 0; 
    numberOfRecords = 0; 
    startTime = _startTime; 
    interval = _interval; 
    systemState = 1; 
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
void * task_measure3_isr( void * arg ) {
    if(cond){task_measure2_isr();}
    if(cond){goto label_1;}
    if(cond){task_communicate_isr();}
    if(cond){goto label_2;}

    label_1:
    tickCounter ++; 
    label_2:
    numberOfRecords ++; 
    cnt3 ++; 
    __exit_task_measure3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * task_measure1_isr( void * arg ) {
    if(cond){task_communicate_isr();}
    if(cond){goto label_1;}

    cnt1 ++; 
    int tmp_tickCounter = tickCounter ; 
    int tmp_interval = interval ; 
    int value = 1 ; 
    label_1:
    intervalCounter ++; 
    records [ numberOfRecords ] = value; 
    numberOfRecords ++; 
    __exit_task_measure1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
