s.moy, EMBSYS100  - AU19 ASSIGNMENT 04 

1. Using bit-band region for peripherals: a. Convert the Blinking Led demo to use the corresponding bit-band address instead of the register address used in the peripheral region. 
b. What instructions does the compiler produce in assembly for the “writing” to the GPIO bit when using bit-band address? 
	bb. Move 1 to register 0, load program counter decimal 72 to register 1 and store to register 0

c. What were the instructions produced when writing to the GPIOx_ODR bit[5] directly? 
 	cc. Program counter deciamal 48 to register 1 and 16 bit instruction.

2. Create a function with multiple arguments (5 arguments for example) and call that function from within another function. Trace thru the assembler and note: 
a. How does the calling function pass the values to the called function? 
	aa. Function inside function starts disassembly at bottom, loads SP to register 4.  Register 4 becomes an array and is pushed.

b. What extra code did the compiler generate before calling the function with the multiple arguments?
	bb. LR, register 7 and push.
 
c. What extra code did the compiler generate inside the called function with the multiple list of arguments? 
	cc. Register 0 and 4 move.  LR registers 2 thru 4 push.

d. Any other observations? 
 	dd.  First function return program counter registers 4, 2 and 1 pop.  Register 4 and 0 move.  Register 4, 0 and 4 ADDS.

3. Following the queue data structure approach, design, implement and test a stack data structure: a. The following is the list of requirements: i. The stack should have a predefined size ii. The stack supports “int” data types. iii. Provide a function to initialize the stack internals. iv. Provide a function to push an element onto the stack v. Provide a function to pop an element off the stack. vi. Provide a function that returns 1 if stack is empty. vii. Provide a function that returns 1 if stack is full. b. Provide a list of the test cases and their implementation inside of main.c c. Separate the stack code from the rest of the test code (create stack.h & stack.c).
	See assignment04 folder, files main.c stack.c and stack.h . 