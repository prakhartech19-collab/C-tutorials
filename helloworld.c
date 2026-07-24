#include<stdio.h>
 
int revr(  int n);
 
int n , rev =0 , r;

int main(){
  printf(" enter a number :");
  scanf("%d", &n);

  revr(  n);

  return 0;
  }
  int   revr( int n){
    while( n!=0){
        r = n%10;
        rev = rev* 10 + r;
        n = n /10;
  } 
  return
  printf(" reversed number is : %d", rev);
 
  }
   