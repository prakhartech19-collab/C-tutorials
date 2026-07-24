#include<stdio.h>
 
 

int main(){
 int n , i ;
 int isprime = 1; // assume prime until proven otherwise

 printf(" enter a number :");
 scanf("%d",&n);

 if( n<=1){
  printf(" given number is not  prime");
 }else{
  for ( int i = 2; i<=n-1; i++ ){
    if( n % i == 0 ){
      isprime =0;
      break;
    }
   }
   if( isprime){
   printf("enter number is prime");
   }else{
    printf(" enter number is not prime ");
   }
 }
 
  return 0;
  }
  
    
  
  