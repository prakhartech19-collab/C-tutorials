#include <stdio.h>

int main(){
 int x ;
 int *ptr;
  
 ptr=&x;
 *ptr = 0;// this is why x = 0

 printf("x = %d\n",x); //  here x is 0 because we have assigned 0 to the address of x using pointer ptr
 printf("*ptr = %d\n",*ptr);// here x is 0 because we have assigned 0 to the address of x using pointer ptr

 *ptr +=5; // x  = 5
 printf("x = %d\n",x); //prints 5
 printf("*ptr = %d\n",*ptr);//prints 5

 (*ptr)++;
 printf("x = %d\n",x); // x =6
 printf("*ptr = %d\n",*ptr);// x =6

 return 0;   
}