#include<stdio.h>

int main(){
 int yearType;
 printf("enter no of days in year:");
 scanf("%d", & yearType);

 

 if(yearType=366){
  printf("Year is leap year ");
 }
 else if ( yearType = 365 ){
  printf(" its a simple year");
 }

  return 0;
}