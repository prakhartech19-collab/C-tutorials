#include<stdio.h>
 void swap( int x, int y);
 void _swap(int*a, int*b);

 
  int main() {
  int x =3 ;
  int y = 5;
  _swap(&x, &y);
  printf("x = %d& y = %d\n", x, y);
   return 0;
   }  


//call by reference
  void _swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b =t;



  }
   
   //call by value 
  void swap(int a , int b) {
     int t = a;
     a = b ;
     b =t;
     printf("a = %d& b = %d\n", a, b);
  }
  