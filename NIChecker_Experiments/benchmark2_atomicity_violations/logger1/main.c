//#include <pthread.h> 
//#include <assert.h>
//#include <stdlib.h>

//typedef unsigned int int;
//typedef unsigned short int;
//typedef unsigned char int;

#define MAX_RECORDS  64
int numberOfRecords;
int records[MAX_RECORDS];
//int records;

#define MAX_BUFFER  64
int msgBuffer[MAX_BUFFER];

int intervalCounter; 
int tickCounter;     
int interval;     
int startTime;
int decodingStatus;

int cmd;
int sendit;

#define IDLE 0
#define LOGGING 1
int systemState;
int rspStatus;

#define CMD_DEC_OK 1
#define CMD_DEC_ERROR 0
#define RSP_SUCCESS 1
#define RSP_ERROR 0

#define TASK_COMMUNICATE 1
#define TASK_MEASURE 2

#define CMD_START 1
#define CMD_STOP 2
#define CMD_READ_STATE 3
#define CMD_READ_DATA 4
//void task_communicate();
//void task_measure();

//const int __CPROVER_thread_priorities[] = {5, 2};
//const char* __CPROVER_threads[] = {"c::task_communicate", "c::task_measure"};
#define LIMIT 10
int cnt1, cnt2, cnt3;

void stop(void)
{
    //systemState = IDLE;
    systemState = 0;
}

void start(int _startTime, int _interval)
{
    if (numberOfRecords+1 >= 64) {//stop();
        //systemState = IDLE;
        systemState = 0;
    }
    intervalCounter = 0;
    tickCounter = 0;
    numberOfRecords = 0;
    startTime = _startTime;
    interval = _interval;
    systemState = 1;
    //assert(numberOfRecords==0);
    //if(numberOfRecords!=0) irq_err();
}
//priority 2
void task_measure_isr(void) {
    
    //while (cnt1 < LIMIT) {
        tickCounter++;
        int tmp_tickCounter = tickCounter;
        int tmp_interval = interval;
        //int value = read_sensor_value();
        int value = 1;
        tickCounter = 0;
        intervalCounter++;
        records[numberOfRecords] =  value;
        //records = value;
        numberOfRecords++;
        cnt1++;
    //}
}
//priority 5
void task_communicate_isr(void) {
    //while (cnt2 < LIMIT) {
        //int _startTime = get_uint32();
        //int _interval = get_uint16();
        int _startTime = 1;
        int _interval = 1;
        //start(_startTime,_interval);
        //cmd = nondet_rand() %4 + 1;
        cmd = nondet_rand();
        //rspStatus = nondet_rand() %2 + 1;
        rspStatus = nondet_rand();
        decodingStatus = 0;

        if(cmd==2 || cmd==3 || 
                cmd==4 || cmd==1) {
            decodingStatus = 1;
        }

        if (rspStatus == 1) {
            if (cmd == 2) {
                if (systemState != 1) {
                    rspStatus = 0;
                } else { //stop();
                    //systemState = IDLE;
                    systemState = 0;
                }
                //send_response();
                sendit = 1;
            }
            if (cmd == 3) {
                //send_response();
                sendit= 1;
            }
            if (cmd == 4) {
                //send_response();
                sendit= 1;
            }
            if (cmd == 0) {
                if (systemState != 0) {
                    rspStatus = 0;
                } else {
                    int tmp_num = numberOfRecords + 1;
                    if (tmp_num >= 64) { //stop();
                        systemState = 0;
                    }
                    intervalCounter = 1;//0;
                    tickCounter = 1;//0;
                    numberOfRecords = 1;//0;
                    startTime = _startTime;
                    interval = _interval;
                    systemState = 1;
                    // assert(numberOfRecords==0);
                    //if(numberOfRecords!=0) irq_err();
                    sendit = 1;
                    //send_response();
                }
            }
        }
        //cnt2++;
    //}
}



int main() {
    systemState = 0;

    return 0;
}
