typedef int pthread_t;
// Author: Chungha Sung
// This is a modified version of Blink LED Demo from
//  http://processors.wiki.ti.com/index.php/MSP430_LaunchPad_LED_Timer
// Below is the original source code and C version of this code.

//***************************************************************************************
// MSP430 Timer Blink LED Demo - Timer A Software Toggle P1.0 & P1.6
//
// Description; Toggle P1.0 and P1.6 by xor'ing them inside of a software loop. 
// Since the clock is running at 1Mhz, an overflow counter will count to 8 and then toggle
// the LED. This way the LED toggles every 0.5s. 
// ACLK = n/a, MCLK = SMCLK = default DCO 
//
// MSP430G2xx
// -----------------
// /|\| XIN|-
// | | |
// --|RST XOUT|-
// | P1.6|-->LED
// | P1.0|-->LED
//
// Aldo Briano
// Texas Instruments, Inc
// June 2010
// Built with Code Composer Studio v4
//***************************************************************************************
/*
#include <msp430g2231.h>

#define LED_0 BIT0 
#define LED_1 BIT6
#define LED_OUT P1OUT
#define LED_DIR P1DIR



unsigned int timerCount = 0;
void main(void)
{
    WDTCTL = WDTPW + WDTHOLD; // Stop watchdog timer
    LED_DIR |= (LED_0 + LED_1); // Set P1.0 and P1.6 to output direction
    LED_OUT &= ~(LED_0 + LED_1); // Set the LEDs off

    CCTL0 = CCIE;
    TACTL = TASSEL_2 + MC_2; // Set the timer A to SMCLCK, Continuous
    // Clear the timer and enable timer interrupt

    __enable_interrupt();

    __bis_SR_register(LPM0 + GIE); // LPM0 with interrupts enabled

} 


// Timer A0 interrupt service routine
#pragma vector=TIMERA0_VECTOR
__interrupt void Timer_A (void)
{
    timerCount = (timerCount + 1) % 8;
    if(timerCount ==0)
        P1OUT ^= (LED_0 + LED_1);
}
*/
//#include <stdio.h>
//#include <pthread.h>
//#include <assert.h>

unsigned int timerCount = 0;
int P1OUT;
int LED_0;
int LED_1;
int WDTCLT;
int WDTPW;
int WDTCTL;
int WDTHOLD;
int LED_DIR;
int LED_OUT;
int CCTL0;
int CCIE;
int TACTL;
int TASSEL_2;
int MC_2;

#define LIMIT 20
int cnt1, cnt2, cnt3, cnt4;

// Timer A0 interrupt service routine
// priority 3
void *Timer_A_isr(void *arg)
{
    //while (cnt1 < LIMIT) {
        //timerCount = (timerCount + 1) % 8;
        timerCount = timerCount + 1;
        // assert(timerCount == 0);
        if(timerCount == 0) {
            P1OUT = (LED_0 + LED_1);
        }
        cnt1++;
    //}
}

// priority 2
void *Timer_B_isr(void *arg)
{
    //while (cnt2 < LIMIT) {
        timerCount = 0;
        // assert(timerCount == 0);
        if (timerCount == 0) {
            P1OUT  = LED_0;
        }
        cnt2++;
    //}
}

// priority 4
void *Timer_C_isr(void *arg)
{
    //while (cnt3 < LIMIT) {
        timerCount = 0;
        // assert(timerCount == 0);
        if (timerCount == 0) {
            P1OUT  = LED_0;
        }
        cnt3++;
    //}
}

// priority 3
void *Timer_Force_isr(void *arg)
{
    //while (cnt4 < LIMIT) {
        timerCount = 1;
        cnt4++;
    //}
}

void *main_task(void *arg)
{
    disable_isr(-1);
    WDTCTL = WDTPW + WDTHOLD; 
    //LED_DIR |= (LED_0 + LED_1); // Set P1.0 and P1.6 to output direction
    LED_DIR = LED_0 + LED_1;
    //LED_OUT &= ~(LED_0 + LED_1); // Set the LEDs off
    LED_OUT = 1 + (LED_0+LED_1);

    CCTL0 = CCIE;
    TACTL = TASSEL_2 + MC_2; 
    // Clear the timer and enable timer interrupt
    timerCount = 0;
    enable_isr(-1); 
    //__bis_SR_register(LPM0 + GIE); // LPM0 with interrupts enabled
    return 0;
}

//violations
//timerCount(93R,121W,93R)
//timerCount(95R,121W,95W)
//timerCount(108W,121W,109R)
//timerCount(106W,121W,108R)

//false positive
//timerCount(93R,93W/132W,93W)
int main(){
  pthread_t t0, t1, t2, t3, t4;
  pthread_create(&t0, 0, main_task, 0);
  pthread_create(&t1, 0, Timer_A_isr, 0);
  pthread_create(&t2, 0, Timer_B_isr, 0);
  pthread_create(&t3, 0, Timer_C_isr, 0);
  pthread_create(&t4, 0, Timer_Force_isr, 0);
}
