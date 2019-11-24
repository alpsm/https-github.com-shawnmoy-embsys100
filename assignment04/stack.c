#include "stack.h"
#define LEG 3

// Backing store

int qRes[LEG];

// Pointer to stack elements for adding and retrieving

int *putP;

// Initialize internals of the stack

void qAdvance(void){
putP = 0;
    	for(int j=0; j<LEG; j++){
    	qRes[j] = 0;
    	}
}

// FIFO Stack is empty if putP==0
// FIFO Stack is full if putP equal last element in the stack

// Add element to stack
// Return error if stack is full
// Other then return success

int putQ(int element){
	if(putP == &qRes[LEG-1]){
		return -1; //stack is full
	}
    	//else{
		//return 0; //stack is not full
        //}  
        if(putP == &qRes[LEG-1]){
      		return -1; //stack is full
	}
    	if(putP == 0){
        	putP = &qRes[0];        //put element
	}    
	else{
        	putP++;
    	}
    	*putP = element; 
 	return 0;
}

// Get element from stack
// Return error if stack is empty
// Other then return success

int getQ(int* element){   
        if(putP == 0){    
        	return -1; // queue is empty
	}    	
	//else{ 
        	//return 0; // queue is not empty
        //}	
        if(putP == 0){
		// stack empty
		*element = *putP;    
		return -1;
    	}

    	//*element = *putP;

     	if(putP == &qRes[0]){
		putP = 0;   //last element removed
	}
	else{
		putP--;
	}
     	return 0;

}