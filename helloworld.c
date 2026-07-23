#include<stdio.h>

int main(){
 int n , rev =0, r, original ;
 printf("enter a number :");
 scanf("%d",&n );


  original = n;

 while( n!= 0){
   r= n %10;
   rev = rev*10 +r;
   n = n/10;
 } if( rev == original  ){
 printf(" palindrome ");
 }
  else {
  printf(" Not a palindrome");
 }

  
  return 0;
}