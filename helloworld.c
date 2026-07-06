#include<stdio.h>



int main() {
   int a,b ;
   char op;
    
   scanf("%d\n, %c\n, %d\n", &a ,&op , &b);
    switch(op){
      case'+':
      printf("%d", a+b);
      break;
      case'-':
      printf("%d", a-b);
      break;
      case '*' :
      printf("%d", a*b);
      break;
      case'/':
      printf("%d", a/b);
      break;
    default:
    printf("Invalid operator");

    }

return 0;

}


