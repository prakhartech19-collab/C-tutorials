#include <stdio.h>
// representation of Arrays
int main(){
  // int marks1 = 75;
  // int marks2 = 76;
  // int marks3 = 87;
 int marks[3];
 printf(" enter phy :");
 scanf("%d", &marks[0]);

 printf("enter chem :");
 scanf("%d", &marks[1]);

 printf("enter math :");
 scanf("%d", &marks[2]);
 
printf("phy = %d, chem = %d , maths = %d", marks[0], marks[1], marks[2]);
    return 0;
}
