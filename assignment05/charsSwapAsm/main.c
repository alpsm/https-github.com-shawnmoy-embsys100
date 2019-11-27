/*******************************************************************************
FILE NAME   : main.c
DESCRIPTION : Where all the magic begins.
	      

Copyright   : David Allegre
            : 2015
	    : All Rights Reserved
*******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "nucleoboard.h"
#include "hw_init.h"
#include "print.h"

char clr_scrn[] = { 27, 91, 50, 74, 0 };              // esc[2J
/* Public variables ----------------------------------------------------------*/
__IO uint32_t timer;
PRINT_DEFINEBUFFER();           /* required for lightweight sprintf */
/* Private prototype ---------------------------------------------------------*/
void delay(uint32_t time);

void charsSwapAsm(char *let1, char *let2);

const char *myCstrSwap = "Swap\n";

/*******************************************************************************
Function Name   : main
Description     : 
Parameters      :
Return value    :               */
void main() {
uint8_t num;
char let1 = 'x';
char let2 = 'y';

  num = 3;
  Hw_init();

  PrintString(clr_scrn); /* Clear entire screen */
  // Change [My name] to your name      //
  PrintString("Shawn Moy's Nucleo STM32F401 is ... alive!!!\n");
  RETAILMSG(1, ("Programming Assignment #1: Built %s %s.\r\n\r\n",
              __DATE__,
              __TIME__));  

  PrintString("EMBSYS CP100A: University of Washington - UART Test Application \n");
   
  
  while(num) {
    GPIO_ToggleBits(GPIO_PORT_LD2, GPIO_PIN_LD2);
    //PrintString("EMBSYS CP100A: University of Washington - UART Test Application \n");
    
    delay(1000);
    GPIO_ToggleBits(GPIO_PORT_LD2, GPIO_PIN_LD2);
    
    delay(1000);
    
        PrintString("\n");
        PrintString("let1= ");
        PrintByte(let1);
        PrintString("\n");
        PrintString("let2= ");
        PrintByte(let2);
        PrintString("\n");
                  
        PrintString("\n");
        charsSwapAsm(&let1, &let2);
        
        PrintString("\n");
        PrintString("let1= ");
        PrintByte(let1);
        PrintString("\n");
        PrintString("let2= ");
        PrintByte(let2);
        PrintString("\n");
      
    num -= 1;
}
  
  while (1) {
    // loop forever
    asm("nop");
  }
}

void delay(uint32_t time) {
  
  timer = time;
  while(timer) {}
}
void SystemInit(void) {
  // System init is called from the assembly .s file
  // We will configure the clocks in hw_init
  asm("nop");
}
  
