void swap_pointer(int *, int *);

int main(){
  int var1=75;
  int var2=39;
  
  swap_pointer(&var1, &var2);
}
void swap_pointer(int *var1, int *var2){
  int *temp;
  temp=var1;
  var1=var2;
  var2=temp;
}
   
