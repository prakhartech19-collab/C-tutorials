#include<stdio.h>

    int main() {
    int n,i, max , num , secondmax;
    printf("enter  number", n);
    scanf("%d", &n);
    
    max = -999999;
     secondmax = -999999;
    for(int i=0; i<n ; i++){
      scanf("%d", &num);
      if( num > max){
      secondmax =max;
       max = num ;
      }
      else if( num > secondmax  && num < max ){


     secondmax  = num ;

      }
  }
   printf("second max = %d", secondmax);




    return 0;
  }

  
   