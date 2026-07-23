#include<stdio.h>
 
int sum(int a , int b);

int main(){
   int result;
   result = sum( 10, 20);
   printf("sum =%d", result);
 
  return 0;
}
int sum(int a , int b){
  return a + b;
}
 