#include<stdio.h>
 
void check( int  num);


int main(){
 int num;
 printf("enter a number :");
 scanf("%d", &num);
  
  check( num);


  return 0;
  }
  void check( int num ){
    if( num % 2 == 0 ){
      printf(" number is even ");
    }else {
      printf( "number is odd ");
    } return ;
  }
    
