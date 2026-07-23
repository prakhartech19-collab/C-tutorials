#include<stdio.h>
 
 int larg( int a, int b);

int main(){
  int a, b;
  printf("enter two numbers :");
  scanf("%d%d", &a , &b);

  larg( a,b);

  return 0;
  }
  int larg(int a , int b) {
    if(a>b){
      return printf(" a is largest:%d");
    } else if( a< b){ 
       return printf(" a is less than b ");

    }
    
  }
  