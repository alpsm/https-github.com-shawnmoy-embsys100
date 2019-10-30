/* 
struct scope{
 unsigned int counter;
};
//int main(){
struct scope scope1;
 scope1.counter=0xFFFFFFFF; 
 scope1.counter++;
 scope1.counter++;
 scope1.counter++;
 scope1.counter++;
 scope1.counter++;
 scope1.counter++; 
//return 0;
 */

int counter = 0x0; 
int main() { 
  int *p_int = (int *)0x20000000; 
  ++(*p_int);
  ++(*p_int);
  ++(*p_int);
  counter ++;
  return 0; 
} 
