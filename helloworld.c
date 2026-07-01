#include<stdio.h>
 
   int main() {
    int* ptr;
     int x;

     ptr =&x;
     *ptr = 0;// from here we can say x =0

     printf("x =%d\n", x); // print is 0
     printf(" *ptr = %d\n" , *ptr);// print is 0
     return 0;
 }
  
  