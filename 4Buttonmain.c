/*MPLAB Code for 4button latch
 * File:   4Buttonmain.c
 * Author: Anokhautomation
 *
 * Created on July 12, 2022, 12:02 AM
 */
#include <xc.h>
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_OFF & LVP_OFF & CPD_OFF & WRT_OFF & CP_OFF);
#define _XTAL_FREQ 10000000
#define SW1 RD4// connect button 1 to RD4

#define SW2 RD5// connect button 2 to RD5

#define SW3 RD6// connect button 3 to RD6

#define SW4 RD7// connect button 4 to RD7


void main(void) {
  TRISB = 0X00;//set Port B as an output

     PORTB = 0X00; // set PortB initial values to 0

     while(1){

              if(SW1==1){

                         RB0 = ~RB0;    // Change the RB0 current state to opposite state

                         while(SW1==1);     // switch debounce

                         }

              if(SW2==1){

                         RB1= ~RB1;    // Change the RB1 current state to opposite state


                         while(SW2==1);        // Switch debounce

                         }

              if(SW3==1){

                         RB2 = ~RB2;     // Change the RB2 current state to opposite state


                         while(SW3==1);           // Switch debounce

                         }

              if(SW4==1){

                         RB3= ~RB3;      // Change the RB3 current state to opposite state


                         while(SW4==1);            // Switch debounce

                         }

              }






return;
}
  
    
    
    
    
    
