#include<stdio.h>

int main(){
 int num ;
 printf(" num  is : ");
 scanf("%d", &num);
 
  if( num % 5 ==0 &&  num % 11 == 0){
    printf(" Number is divisible by 11 & 5 ");
  }else {
    printf( " number is not divisible by 11 & 5");
  }

  return 0;
}