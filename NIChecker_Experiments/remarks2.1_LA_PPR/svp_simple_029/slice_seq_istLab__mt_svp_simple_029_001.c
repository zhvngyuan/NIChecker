void * svp_simple_029_001_isr_1( void * arg ) {
    if( svp_simple_029_001_average_adjust_flag == 0xFF ){
        svp_simple_029_001_average_adjust_count ++; 
        if( svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData ){
            {
                unsigned8 tm_data = svp_simple_029_001_average_adjust_count ; 
                svp_simple_029_001_tm_blocks [ 36 ] = tm_data; 
            }

        }
        else if( svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData ){
            {
                unsigned8 tm_data = svp_simple_029_001_average_adjust_count ; 
                svp_simple_029_001_tm_blocks [ 36 ] = tm_data; 
            }

        }
        
    }
    else {
        svp_simple_029_001_average_adjust_count = 0; 
        if( svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData ){
            {
                unsigned8 tm_data = svp_simple_029_001_average_adjust_count ; 
                svp_simple_029_001_tm_blocks [ 36 ] = tm_data; 
            }

        }
        else if( svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData ){
            {
                unsigned8 tm_data = svp_simple_029_001_average_adjust_count ; 
                svp_simple_029_001_tm_blocks [ 36 ] = tm_data; 
            }

        }
        
    }

    __exit_svp_simple_029_001_isr_1 : 
    ; 
    pthread_exit ( 0 ); 
}
void * main_task( void * arg ) {
    unsigned8 svp_simple_029_001_local_status = 1 ; 
    {
        {
            int i ; 
            for ( i = 0 ; i < 4096 ; i ++ ) {
                svp_simple_029_001_tm_blocks [ i ] = nondet_rand ( ); 
            }
 
        }

        {
            enable_isr ( - 1 ); 
        }

    }

    {
        svp_simple_029_001_ptr_SetTmData = svp_simple_029_001_SetTmData; 
        svp_simple_029_001_ptr_GetTmData = svp_simple_029_001_GetTmData; 
        svp_simple_029_001_ptr_SetSelfCtrlFlag = svp_simple_029_001_SetSelfCtrlFlag; 
    }

    if( svp_simple_029_001_local_status == 1 ){
        if( svp_simple_029_001_ptr_SetSelfCtrlFlag == svp_simple_029_001_SetSelfCtrlFlag ){
            {
                unsigned8 tmp1 ; 
                unsigned8 tmp2 ; 
                unsigned8 ctrl_sts ; 
                if( 0xFF > 0x80 ){
                    tmp1 = 1; 
                }
                else {
                    tmp1 = 0; 
                }

                tmp1 <<= 0; 
                if( svp_simple_029_001_ptr_GetTmData == svp_simple_029_001_GetTmData ){
                    unsigned8 __cs_retval__svp_simple_029_001_GetTmData_0 ; 
                    {
                        unsigned32 tm_name = 36 ; 
                        __cs_retval__svp_simple_029_001_GetTmData_0 = svp_simple_029_001_tm_blocks [ tm_name ]; 
                    }

                    ctrl_sts = __cs_retval__svp_simple_029_001_GetTmData_0; 
                }
                
                if( svp_simple_029_001_ptr_GetTmData == svp_simple_029_001_GetTmData ){
                    unsigned8 __cs_retval__svp_simple_029_001_GetTmData_1 ; 
                    {
                        unsigned32 tm_name = 36 + 1 ; 
                        __cs_retval__svp_simple_029_001_GetTmData_1 = svp_simple_029_001_tm_blocks [ tm_name ]; 
                    }

                    ctrl_sts -= __cs_retval__svp_simple_029_001_GetTmData_1; 
                }
                
                ctrl_sts |= tmp1; 
                if( svp_simple_029_001_ptr_SetTmData == svp_simple_029_001_SetTmData ){
                    {
                        unsigned32 tm_name = 36 ; 
                        unsigned8 tm_data = ctrl_sts ; 
                        svp_simple_029_001_tm_blocks [ tm_name ] = tm_data; 
                    }

                }
                
            }

        }
        
    }
    
    __exit_main_task : 
    ; 
    pthread_exit ( 0 ); 
}
int main(  ) {
    pthread_t t0 ; 
    pthread_t t1 ; 
    pthread_create ( & t0 , 0 , main_task , 0 ); 
    pthread_create ( & t1 , 0 , svp_simple_029_001_isr_1 , 0 ); 
    __exit_main : 
    ; 
    pthread_exit ( 0 ); 
}
