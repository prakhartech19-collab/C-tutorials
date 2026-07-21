#include<stdio.h>

    int main() {
    int n,i, num, max;
     printf("enter n:");
     scanf("%d", &n);

      printf("enter frist number:");
     scanf("%d", &max);

      for(int i=1; i< n; i++){
        printf("enter  number %d:", i);
        scanf("%d", &num);

         if(num> max){
        max = num ;
      }
      }
     
      printf("Max = %d",max);

      
      
    


    return 0;
  }

  
   