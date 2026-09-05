#include <stdio.h>
// with the help of arrays we are entering and printing the prices of 3 items
int main(){
  
  float price[3];
 printf(" enter P1 :");
 scanf("%f", &price[0]);

 printf("enter P2:");
 scanf("%f", &price[1]);

 printf("enter P3 :");
 scanf("%f", &price[2]);
 
printf("Total  P1 is :%f",price[0] + (0.18*price[0]));
printf("Total  P2 is :%f",price[1] + (0.18*price[1]));
printf("Total  P3 is :%f",price[2] + (0.18*price[2]));

    return 0;
}
