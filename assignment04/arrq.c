/*First-In First-Out,
Condensed,
12-05-19, smoy*/

#include <stdio.h>

int main(){

int array[3]={5,9,7};                //Declare and initialize array.

int backIndicate;                    //Declare variable. 
int *frontIndicate;                  //Declare pointer.
frontIndicate = &array[0];           //Initialize element.

for(int i=0; i<3; i++){              //Initialize elements.
	backIndicate=array[i];	
        printf("%d ", backIndicate);
}	
printf("\n");

while(*frontIndicate){               //Trace elements.
	printf("%d ", *frontIndicate);
	frontIndicate++;
	backIndicate=0;
	}
printf("\n");

for(int i=0; i<3; i++){              //Retrace elements.
	printf("%d ", *frontIndicate);
	}
printf("\n");
return 0;
}
	
