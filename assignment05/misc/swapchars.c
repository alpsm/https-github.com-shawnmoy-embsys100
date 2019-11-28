/*smoy, 11-27-19*/

#include <stdio.h>

char* myCstr= "Please insert two letters to swap."; //Global variable.
char swapPointers(char *, char *, char *);          //Swap pointers prototype.       

int main(){

char x;    
char y;      
char *temp;                                        //Alias variable.
char str[35];                                      //Array limit characters.
char xz[1];                                       
char yc[1];
int j;                                             //Iterator.

sprintf(str, "%s", myCstr);                        //String print buffer. 
printf("%s\n", str);                               //Print string.

for(int i=0; i<1; i++, j++){
scanf("%c %c", &xz[i], &yc[j]);                    //Scan and dereference iteration.
}

//printf("%c %c", *xz, *yc);                       

int e= swapPointers(temp, xz, yc);                 //Call function.
printf("%d\n", e);                                 //Return function.

return 0;                                          //End. 
}

char swapPointers(char *temp, char *x, char *y){   //Run function. 

temp=x;                                            //Swap variables.
x=y;
y=temp;
printf("%c %c\n", *x, *y);                         //Print swap.

	if(*x==*y){                                 //Test equality.
	printf("Duplicate letters cannot swap.\n");
	return 0;                                   //False.
	}
	else{
	printf("Swap enabled.\n");                  //True.
	return 1;
	}
}           
