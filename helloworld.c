#include<stdio.h>

int main(){
 int num;
 printf(" enter a number :");
 scanf("%d",&num);

 if(num % 2==0){
  printf("number is EVEN");
 }else {
  printf("number is ODD");
 }

  return 0;
}