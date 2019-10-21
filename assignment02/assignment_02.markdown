EMBSYS100 - AU19
Assignment 02

Counter 6 increments.

1. Inject 0x7FFFFFFF for the “counter” value in the variable window, then step thru the program only once to increment “counter”. 
a) What is the value of the “counter” from the “Locals” window?  -2147483644
b) What is the value of the “counter” in the “Register” window?  0x80000004
c) Which flags are set in the APSR register? Explain why?  C, carry condition stepping into counter. 

2. If your write all Fs (0XFFFFFFFF) in the Register value for “counter” then step thru the program once to increment “counter” 
a) What happens to the value of “counter” in the “Locals” window?  It changed to 4.  
b) What flags, if any, are set in the APSR?  N, negative condition stepping into counter.  Z, conditon next step of counter.  Integer equivalent to -1 plus 5 of counter results 4.

3. Change the “counter” variable type in your code to “unsigned”. Inject the values “0x7FFFFFFF” then step thru the program to increment the “counter” once: 
a) What is the value of “counter” in the “Locals” window after incrementing for each value?  2147483652
b) What flags, if any, are set in the APSR? Explain why?  Z, zero condition flag at integer.  C, carry condition.  N, negative condition stepping into counter.

4. Change the “counter” variable type in your code to “unsigned”. Inject the values “0xFFFFFFFF” then step thru the program to increment the “counter” once: 
a) What is the value of “counter” in the “Locals” window after incrementing for each value? 4.
b) What flags, if any, are set in the APSR? Explain why?  C, carry condition and Z, zero condition at integer.  N, negative condition stepping into counter. Second step C, carry over and Z, zero condition. Three thrus no flags.

5. Move the “counter’ variable outside of main (at the top of the file): a) What is the scope of the variable “counter”?  4.   
b) Is it still visible in the “Locals” view? Yes, subsequently.
c) In which window view can we track “counter” now?  Mainly, Locals and Disassembly and Registers 1.
d) What is the address of the “counter” variable in memory?  0x00000004   

6. Change the source code to the following, then run the program still in the simulator:
int counter = 0x0; int main() { int *p_int = (int *)0x20000000; ++(*p_int); ++(*p_int); ++(*p_int); counter ++; return 0; } 
a) What is the value of “counter” at the end of the program (halting at the return 0 statement)?  Increments sum 4 and counter variable 1.
b) Explain why the counter value has changed?  Counter is a variable initialized 0, outside of main and not a struct.  Pointer stores address, declares, cast integer, initializes 0x20000000 and increments pointer three times.  Sum of pointer and decimal 536870915. A pointer would require address of counter add *p_int equal variable and sum decimal of 536870916.

7. Change the setting of IAR to run the same program on the evaluation board:
Setup: 
1. Connect evaluation board to your computer through ST Link cable. 
2. Set the IAR to using STLink: 
3. Project -> Options -> Debugger -> Device: ST-Link 
4. Download setting is flash loader 
5. Make sure ST-Link Interface is set to SWD 
6. Run the same code described in the simulator. 
a) What is the address where “counter” is stored?  0x20000000  
b) Is the “counter” variable stored in RAM or ROM?  RAM.
c) What is the value of “counter” at the end of the program (halting at the return 0 statement).  R1 0x20000004

