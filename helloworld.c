#include<stdio.h>

    int main() {
    int n,i, num, min;
     printf("enter n:");
     scanf("%d", &n);

      printf("enter frist number:");
     scanf("%d", &min);

      for(int i=1; i< n; i++){
        printf("enter  number %d:", i);
        scanf("%d", &num);

         if(num< min){
        min = num ;
      }
      }
     
      printf("Min = %d",min);

      
      
    


    return 0;
  }

  
   