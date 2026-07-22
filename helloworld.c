#include<stdio.h>
#include<math.h>


int main() {
   int a , b;
    
   printf("enter a:");
   scanf("%d", &a);

   printf("enter b :");
   scanf("%d", &b);

   a = a + b ;
    b = a - b;
   a = a - b;

   printf(" finali value  of a is :%d\n  ",a);
   printf("final value of b is : %d\n ", b);



    return 0;
  }

  
   