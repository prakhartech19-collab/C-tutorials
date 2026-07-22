#include<stdio.h>
#include<math.h>
 // area of rectangle  

int main() {
    int principle, rate , time , SI;

    printf("enter principle :");
    scanf("%d", &principle);

    printf("enter rate :");
    scanf("%d", &rate);

    printf("enter time :");
    scanf("%d", &time);

    SI = (principle * rate * time)/100;

    printf(" SI is  : %d", SI);

    return 0;
  }

  
   