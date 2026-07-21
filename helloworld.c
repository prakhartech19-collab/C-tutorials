#include<stdio.h>

    int main() {
    int n,  i, num ,sum =0;
     printf("enter the number of elements :");
     scanf("  %d\n", &n);
    
     for(int i =0; i<n; i++ ){
        printf("enter number%d:", i);
        scanf("%d", &num);

        sum = sum +num;
     }
     printf("sum = %d\n", sum);

    return 0;
  }

  
   