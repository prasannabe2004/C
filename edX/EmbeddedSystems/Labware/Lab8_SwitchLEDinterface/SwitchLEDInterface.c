// ***** 0. Documentation Section *****
// SwitchLEDInterface.c for Lab 8
// Runs on LM4F120/TM4C123
// Use simple programming structures in C to toggle an LED
// while a button is pressed and turn the LED on when the
// button is released.  This lab requires external hardware
// to be wired to the LaunchPad using the prototyping board.
// January 15, 2016
//      Jon Valvano and Ramesh Yerraballi

// ***** 1. Pre-processor Directives Section *****
#include "TExaS.h"
#include "tm4c123gh6pm.h"

// ***** 2. Global Declarations Section *****

// FUNCTION PROTOTYPES: Each subroutine defined
void DisableInterrupts(void); // Disable interrupts
void EnableInterrupts(void);  // Enable interrupts
void Delay1ms(unsigned long msec);

unsigned long arm,sensor;
unsigned long volatile delay;
	
// ***** 3. Subroutines Section *****

// PE0, PB0, or PA2 connected to positive logic momentary switch using 10k ohm pull down resistor
// PE1, PB1, or PA3 connected to positive logic LED through 470 ohm current limiting resistor
// To avoid damaging your hardware, ensure that your circuits match the schematic
// shown in Lab8_artist.sch (PCB Artist schematic file) or 
// Lab8_artist.pdf (compatible with many various readers like Adobe Acrobat).
int main(void){ 
//**********************************************************************
// The following version tests input on PE0 and output on PE1
//**********************************************************************
  TExaS_Init(SW_PIN_PE0, LED_PIN_PE1, ScopeOn);  // activate grader and set system clock to 80 MHz
	SYSCTL_RCGC2_R |= 0x10;           // Port E clock
  delay = SYSCTL_RCGC2_R;           // wait 3-5 bus cycles
  GPIO_PORTE_DIR_R &= ~0x01;
	GPIO_PORTE_DIR_R |= 0x02;
  GPIO_PORTE_AFSEL_R &= ~0x17;      // not alternative
  GPIO_PORTE_AMSEL_R &= ~0x17;      // no analog
  GPIO_PORTE_PCTL_R &= ~0x000F0FFF; // bits for PE4,PE2,PE1,PE0
  GPIO_PORTE_DEN_R |= 0x17;         // enable PE4,PE2,PE1,PE0
  EnableInterrupts();
  while(1){
    arm = GPIO_PORTE_DATA_R&0x01;    // arm 0 if deactivated, 1 if activated
    if(arm==0x01){
      GPIO_PORTE_DATA_R ^= 0x02;   // toggle output for alarm
      Delay1ms(100);  // 100ms delay makes a 5Hz period
    }
		else
		{
			GPIO_PORTE_DATA_R |= 0x02;
		}
  }
}

void Delay1ms(unsigned long msec)
{
// write this function
  unsigned long i;
  while(msec > 0){
    i = 13333;  // this number means 100ms
    while(i > 0){
      i = i - 1;
    }
    msec = msec - 1; // decrements every 100 ms
  }
}
