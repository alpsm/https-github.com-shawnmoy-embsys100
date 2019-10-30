// RCC Base Address: 0x40023800
// RCC AHB1 peripheral clock enable register (RCC_AHB1ENR) 
//      Address offset: 0x30 
//      Set Bit10 to 1 enable clock fo GPIOA  
//      Step1: Address 0x40023830 --> Write 0x01

// GPIOA Base Address: 0x40020000
// GPIO port mode register (GPIOx_MODER) (x = A..E and H) 
//      Address offset: 0x00 
//      Set GPIOA (Port5) to output mode    
//              --> Set bit 10 to 1 (0x400)
//
//      Step2: Address 0x40020000 write 0xA8000400          

// GPIO port output data register (GPIOx_ODR) (x = A..E and H) 
//      Address of#definefset: 0x14
//      Write 1 to the GPIOA (Port5)
//              --> Set bit 1 to 5 (0x20) 
//      Step3: Address 0x40020014 write 0x20 // To turn LED on
//      Step4: Address 0x40020014 write 0x00 // To turn LED off 
  
#include <time.h>

#define RCC_BASE 0x40023800
#define RCC_AHB1ENR (*((unsigned int*)(RCC_BASE+0x30)))
#define GPIOA_BASE 0x40020000
#define GPIOA_MODER (*((unsigned int*)(GPIOA_BASE+0x00)))
#define GPIOA_ODR (*((unsigned int*)(GPIOA_BASE+0x14)))

void letter(char *array, int);
void morseDot();
void morseDash();

int main(){

RCC_AHB1ENR = 0x01; // Enable clock to GPIOA
GPIOA_MODER = 0xA8000400; //Set GPIOA to output

morseDot();
morseDash();
char firstName[]="SHAWN";
letter(firstName, 5);

return 0;
}

void morseDot(){
GPIOA_ODR = 0x020; // Turn LED on

int counter=0;
while(counter<1000000){
  counter++;
  }

GPIOA_ODR = 0xFFFFFFDF; //Turn LED off

counter=0;
while(counter<1000000){
  counter++;
  }
}

void morseDash(){
GPIOA_ODR = 0x020; // Turn LED on

int counter=0;
while(counter<3000000){
  counter++;
  }

GPIOA_ODR = 0xFFFFFFDF; //Turn LED off

counter=0;
while(counter<1000000){
  counter++;
  }
}

morseSpace(){
while(counter<3000000){
	counter++;
}

void letter(char *array, int n){
  for(int i=0; i<n; i++){
    switch(array[i]){
      case 'S':
	morseDot();
	morseDot();
	morseSpace()		
      case 'H':
	morseDot();
	morseDot();
	morseDot();
	morseDot();
	morseSpace()
      case 'A':
	morseDot();
	morseDash();
	morseSpace()
      case 'W':
	morseDot();
	morseDash();
	morseDash();
	morseSpace()
      case 'N':
	morseDash();
	morseDot();	
	morseSpace()
        }
    }
}