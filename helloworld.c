#include<stdio.h>

int main(){
 int N1, N2;
 printf(" N1  is : ");
 scanf("%d", &N1);
 printf(" N2 is :");
 scanf("%d", N2);


  if(N1>N2){
    printf(" frist no is greater than second ");
  }else if( N1<N2){
    printf( " frist number is less than second");
  }else if ( N1 = N2){
    printf( "both N1 & N2 are equal");

  }

  return 0;
}