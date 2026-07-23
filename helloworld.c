#include<stdio.h>
 
int sum(int a , int b);
 int sub( int a , int b);
float prdct(float a, float b);
  float Div(float a, float b);


int main(){
   int a,b, choice;
   printf(" enter two numbers :");
   scanf( "%d%d", &a,&b);

   printf("enter your choice(1 to 4):");
   scanf("%d", &choice);

   switch( choice ){
    case 1 :printf("sum is :%d\n", sum(a,b));
          break;
    case 2 :printf(" diff is :%d\n", sub(a,b));
         break ;
    case 3 :printf("product  is :%f\n", prdct(a,b));
        break;
    case 4 :if( b !=0){
    
    printf(" division is :%f\n", Div(a,b));
   }else {
     printf(" zero can not divide any number ");
   }
  return 0;
  } 

}
 int sum( int a, int b ){
  return a + b ;
 }

 int sub( int a, int b ){
   return a-b;
 }
 float prdct( float a , float b ){
  return a * b;
 }
 float Div( float a , float b){
  return a/b;
 }