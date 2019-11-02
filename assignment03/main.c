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

#define RCC_BASE 0x40023800
#define RCC_AHB1ENR (*((unsigned int*)(RCC_BASE+0x30)))
#define GPIOA_BASE 0x40020000
#define GPIOA_MODER (*((unsigned int*)(GPIOA_BASE+0x00)))
#define GPIOA_ODR (*((unsigned int*)(GPIOA_BASE+0x14)))

// s.moy, embsys100 au19, assignment03, morse code

void letter(char *);
void morseDash(int); 
void morseDot(int);
void morseSpace(int);

int main(){

RCC_AHB1ENR=0x01; // Enable clock to GPIOA
GPIOA_MODER=0xA8000400; //Set GPIOA to output

char firstName[]="SHAWN";
letter(firstName);

return 0;
}               

void letter(char *p){
int dit, dah, spc;
              for(*p=*p; *p != '\0'; *p++){
                
		if(*p=='A'){
		morseDot(dit);	
		morseSpace(spc);
		morseDash(dah);
		morseSpace(spc);
		}
		else if(*p=='N'){
		morseDash(dah);
		morseSpace(spc);
		morseDot(dit);	
		morseSpace(spc);
		}
		else if(*p=='W'){
		morseDot(dit);	
		morseSpace(spc);
		morseDash(dah);
		morseSpace(spc);	
		morseDash(dah);
		morseSpace(spc);
		}
		else if(*p=='S'){
		morseDot(dit);	
		morseSpace(spc);
		morseDot(dit);	
		morseSpace(spc);
		morseDot(dit);	
		morseSpace(spc);
		}
		else if(*p=='H'){
		morseDot(dit);	
		morseSpace(spc);
		morseDot(dit);	
		morseSpace(spc);
		morseDot(dit);	
		morseSpace(spc);
		morseDot(dit);	
		morseSpace(spc);              
		}
	}
}

void morseDot(int inc){
GPIOA_ODR=0x20; // Turn LED on
inc=0;
while(inc<1000000){
	inc++;
	}
}

void morseDash(int counter){
GPIOA_ODR=0x20; // Turn LED on
counter=0;
while(counter<3000000){
	counter++;
	}
}

void morseSpace(int adv){
GPIOA_ODR=0x00; // Turn LED off
adv=0;
while(adv<3000000){
	adv++;
	}	
}
