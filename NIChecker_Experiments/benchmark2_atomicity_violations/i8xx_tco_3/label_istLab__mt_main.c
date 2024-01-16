void * closer3_isr_0( void * __cs_param_closer3_isr_arg ) {
addLabel();
    {
        {
            _Bool __cs_local_closer3_isr___cs_tmp_if_cond_6 ; 
            __cs_local_closer3_isr___cs_tmp_if_cond_6 = 1; 
            if( __cs_local_closer3_isr___cs_tmp_if_cond_6 ){
                _Bool __cs_local_closer3_isr___cs_tmp_if_cond_7 ; 
                __cs_local_closer3_isr___cs_tmp_if_cond_7 = ! nowayout; 
                if( __cs_local_closer3_isr___cs_tmp_if_cond_7 ){
                }
                
            }
            
            {
                {
                    {
                        int __cs_local_closer3_isr_l = tco1_rld ; 
                        {
                        }

                    }

                }

            }

        }

    }

    tco_expect_close = 42; 
    _Bool __cs_local_closer3_isr___cs_tmp_if_cond_8 ; 
    __cs_local_closer3_isr___cs_tmp_if_cond_8 = tco_expect_close == 42; 
    if( __cs_local_closer3_isr___cs_tmp_if_cond_8 ){
        int __cs_temporary_0 = 0 ; 
        __cs_temporary_0 = test_global_var3 + 1; 
addLabel();
        test_global_var3 = __cs_temporary_0; 
    }
    
    {
        {
            _Bool __cs_local_closer3_isr___cs_tmp_if_cond_9 ; 
            __cs_local_closer3_isr___cs_tmp_if_cond_9 = tco_expect_close != 42; 
            if( __cs_local_closer3_isr___cs_tmp_if_cond_9 ){
            }
            else {
            }

            {
                int __cs_local_closer3_isr_v = timer_alive ; 
                {
                }

            }

            tco_expect_close = 0; 
        }

    }

    __exit_closer3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer1_isr_0( void * __cs_param_writer1_isr_arg ) {
addLabel();
    {
        {
            _Bool __cs_local_writer1_isr___cs_tmp_if_cond_12 ; 
            __cs_local_writer1_isr___cs_tmp_if_cond_12 = 0; 
            if( __cs_local_writer1_isr___cs_tmp_if_cond_12 ){
                _Bool __cs_local_writer1_isr___cs_tmp_if_cond_13 ; 
                __cs_local_writer1_isr___cs_tmp_if_cond_13 = ! nowayout; 
                if( __cs_local_writer1_isr___cs_tmp_if_cond_13 ){
                    tco_expect_close = 0; 
                    _Bool __cs_local_writer1_isr___cs_tmp_if_cond_14 ; 
                    __cs_local_writer1_isr___cs_tmp_if_cond_14 = tco_write_buf == 'V'; 
                    if( __cs_local_writer1_isr___cs_tmp_if_cond_14 ){
                        tco_expect_close = 42; 
                    }
                    
                }
                
            }
            
            {
                {
                    {
                        int __cs_local_writer1_isr_l = tco1_rld ; 
                        {
                        }

                    }

                }

            }

        }

    }

    __exit_writer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer1_isr_0( void * __cs_param_closer1_isr_arg ) {
addLabel();
    {
        {
            _Bool __cs_local_closer1_isr___cs_tmp_if_cond_10 ; 
            __cs_local_closer1_isr___cs_tmp_if_cond_10 = 1; 
            if( __cs_local_closer1_isr___cs_tmp_if_cond_10 ){
                _Bool __cs_local_closer1_isr___cs_tmp_if_cond_11 ; 
                __cs_local_closer1_isr___cs_tmp_if_cond_11 = ! nowayout; 
                if( __cs_local_closer1_isr___cs_tmp_if_cond_11 ){
                }
                
            }
            
            {
                {
                    {
                        int __cs_local_closer1_isr_l = tco1_rld ; 
                        {
                        }

                    }

                }

            }

        }

    }

    tco_expect_close = 42; 
    __exit_closer1_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer2_isr_0( void * __cs_param_writer2_isr_arg ) {
addLabel();
    {
        {
            _Bool __cs_local_writer2_isr___cs_tmp_if_cond_0 ; 
            __cs_local_writer2_isr___cs_tmp_if_cond_0 = 0; 
            if( __cs_local_writer2_isr___cs_tmp_if_cond_0 ){
                _Bool __cs_local_writer2_isr___cs_tmp_if_cond_1 ; 
                __cs_local_writer2_isr___cs_tmp_if_cond_1 = ! nowayout; 
                if( __cs_local_writer2_isr___cs_tmp_if_cond_1 ){
                    tco_expect_close = 0; 
                    _Bool __cs_local_writer2_isr___cs_tmp_if_cond_2 ; 
                    __cs_local_writer2_isr___cs_tmp_if_cond_2 = tco_write_buf == 'V'; 
                    if( __cs_local_writer2_isr___cs_tmp_if_cond_2 ){
                        tco_expect_close = 42; 
                    }
                    
                }
                
            }
            
            {
                {
                    {
                        int __cs_local_writer2_isr_l = tco1_rld ; 
                        {
                        }

                    }

                }

            }

        }

    }

    __exit_writer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task_0( void * __cs_param_main_task_arg ) {
addLabel();
    disable_isr ( - 1 ); 
    tco_expect_close = 0; 
addLabel();
    enable_isr ( - 1 ); 
addLabel();
    goto __exit_main_task ; 
    ; 
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
void * closer2_isr_0( void * __cs_param_closer2_isr_arg ) {
addLabel();
    {
        {
            _Bool __cs_local_closer2_isr___cs_tmp_if_cond_3 ; 
            __cs_local_closer2_isr___cs_tmp_if_cond_3 = 1; 
            if( __cs_local_closer2_isr___cs_tmp_if_cond_3 ){
                _Bool __cs_local_closer2_isr___cs_tmp_if_cond_4 ; 
                __cs_local_closer2_isr___cs_tmp_if_cond_4 = ! nowayout; 
                if( __cs_local_closer2_isr___cs_tmp_if_cond_4 ){
                }
                
            }
            
            {
                {
                    {
                        int __cs_local_closer2_isr_l = tco1_rld ; 
                        {
                        }

                    }

                }

            }

        }

    }

    tco_expect_close = 42; 
    _Bool __cs_local_closer2_isr___cs_tmp_if_cond_5 ; 
    __cs_local_closer2_isr___cs_tmp_if_cond_5 = tco_expect_close == 42; 
    if( __cs_local_closer2_isr___cs_tmp_if_cond_5 ){
        {
            int __cs_local_closer2_isr_reader1 ; 
            int __cs_local_closer2_isr_reader2 ; 
            int __cs_local_closer2_isr_reader3 ; 
            int __cs_local_closer2_isr_reader4 ; 
        }

    }
    
    __exit_closer2_isr : 
    ; 
    pthread_exit ( 0 ); 
}
void * writer3_isr_0( void * __cs_param_writer3_isr_arg ) {
addLabel();
    {
        {
            _Bool __cs_local_writer3_isr___cs_tmp_if_cond_15 ; 
            __cs_local_writer3_isr___cs_tmp_if_cond_15 = 0; 
            if( __cs_local_writer3_isr___cs_tmp_if_cond_15 ){
                _Bool __cs_local_writer3_isr___cs_tmp_if_cond_16 ; 
                __cs_local_writer3_isr___cs_tmp_if_cond_16 = ! nowayout; 
                if( __cs_local_writer3_isr___cs_tmp_if_cond_16 ){
                }
                
            }
            
            {
                {
                    {
                        int __cs_local_writer3_isr_l = tco1_rld ; 
                        {
                        }

                    }

                }

            }

        }

    }

    test_global_var3 = 0x33; 
    __exit_writer3_isr : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
addLabel();
    pthread_t __cs_local_main_t0 ; 
    pthread_t __cs_local_main_t1 ; 
    pthread_t __cs_local_main_t2 ; 
    pthread_t __cs_local_main_t3 ; 
    pthread_t __cs_local_main_t4 ; 
    pthread_t __cs_local_main_t5 ; 
    pthread_t __cs_local_main_t6 ; 
    pthread_create ( & __cs_local_main_t0 , 0 , main_task_0 , 0 ); 
    pthread_create ( & __cs_local_main_t1 , 0 , closer1_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t2 , 0 , closer2_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t3 , 0 , closer3_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t4 , 0 , writer1_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t5 , 0 , writer2_isr_0 , 0 ); 
    pthread_create ( & __cs_local_main_t6 , 0 , writer3_isr_0 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
