#include<stdio.h>
 
 int square( int num);

int main(){
 int num;
 printf("enter a number :");
 scanf("%d", &num);

 
 printf(" square is :%d",  square(num) );
   
  return 0;
  }
   int square( int num){
    return num * num;
  }
