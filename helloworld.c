#include<stdio.h>
 
 

int main(){
 int n =1 , i ;
 int fact =1 ;

 printf(" calculate factorial of :");
 scanf("%d", &n);

 for( i =1; i<=n;i++){
  fact = fact * i;
 }
  printf(" factorial is %d", fact);

  
  return 0;
  }
  
    
  
  