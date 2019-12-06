/*Fill-In Fill-Out,
Condensed,
12-05-19, smoy*/

#include <stdio.h>

int main(){

int array[3]={5,2,14};                               //Declare and initialize array.
int i=0;                                             //Declare variable.
int backIndicate;                                    //Declare variable. 
int *frontIndicate;                                  //Declare pointer.
frontIndicate = &array[0];                           //Declare and initialize element.

for(i=0; i<3; i++){                                  //Initialize elements.
	backIndicate=array[i];	
        printf("%d ", backIndicate);
}	
printf("\n");

for(i=0, backIndicate=0;  i<3; i++, backIndicate++){ //Trace elements.
	printf("%d ", *frontIndicate);
	++frontIndicate;
	array[backIndicate]=0;	
	printf("%d ", array[backIndicate]);
	}
printf("\n");

for(i=0; i<3; i++){                                  //Retrace elements.
	printf("%d ", *frontIndicate);
	}
printf("\n");
printf("%d %d %d", array[0], array[1], array[2]);    //Zero indices.
printf("\n");
return 0;
}
	
