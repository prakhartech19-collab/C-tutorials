#include<stdio.h>

int main(){
 int n , i , Table ;
 printf(" enter a number :");
 scanf("%d", &n);

 for(int i = 1; i<=10 ; i++){
   Table = n* i; 
  printf("%d\n", Table);
 }

  return 0;
}