#include<stdio.h>
  int RectangleArea(int L, int B);
  int SquareArea(int s);
  float CircleArea(float R);

  
int main(){
  // float value = 100.0;
  //  printPrice(value);
   printf("enter length and breath of rectangle\n");
   int L, B;
   scanf("%d %d", &L, &B);

   int rectArea = RectangleArea(L,B);
   printf("Area of rectangle: %d\n", rectArea);

   printf("enter sides of a square \n");
   int s;
   scanf("%d", &s);
   int squareArea = SquareArea(s);
   printf("Area of square: %d\n", squareArea);

   printf("enter radius of a circle \n");
   float R;
   scanf("%f", &R);
   float circleArea = CircleArea(R);
   printf("Area of circle: %.2f\n", circleArea);

 return 0;
}
 int RectangleArea(int L, int B){
    return L*B;
 }  
 int SquareArea(int s){
  return s*s;
 }
  float CircleArea(float R){
    return 3.14 * R * R;
  }
