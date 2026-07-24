#include<stdio.h>
 
void prime( );

int n , i;
int isprime =1;

int main(){
 

 printf("enter a number :");
 scanf("%d",&n);

 prime();



  return 0;
  }
   void prime(){
    if(n<=1){
        printf(" entered number is not prime ");
    }else {
        for(int i =2; i<= n-1; i++){
        if( n% i ==0){
            isprime =0;
            break;
        }
        }
        if(isprime){
            printf("entered number is prime");
        } else {
            printf("entered number is not prime");
        }
    }
   }
    
  
  