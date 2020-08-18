//fifo revolve, 8/18/20, smoy

#include <stdio.h>

int main(){

	int array[3]={5,2,14};
	int i=0;
	int *frontIndex;
	frontIndex = &array[0];
	int *backIndex;
	backIndex = &array[0];

	for(i=0; i<3; i++){
		frontIndex[i];
		printf("%d ", frontIndex[i]);
	}

	int temp=*(frontIndex+2);
	for(i; i>0; i--){
		*(backIndex+2)=*(backIndex+2-1); 
		backIndex--;	
	}

	printf("\n");

	*(frontIndex+0)=temp; 
	for(i=0; i<3; i++){
		printf("%d ", *frontIndex++); //Right shift of one and revolve
	}

	printf("\n");

	printf("%d %d %d", array[0], array[1], array[2]); //Varify elements

return 0;
}


