#include<stdio.h>
 
 int HCF( int a, int b);
 int a,b ;  // a is less than b
 int n =1;



int main(){
     
 printf(" enter  a:");
 scanf("%d",&a);
 printf(" enter b:");
 scanf("%d", &b);

   int ans = HCF( a, b);
   printf("%d", ans);
  return 0;
  }
  int HCF( int a , int b ){

    int hcf=1;

    for( int n = 1; n<=(a< b? a:b);n++){
   
 
if( a% n ==0 && b% n == 0){
        hcf = n;
    }
  } 
  return hcf;
}

  
 
   