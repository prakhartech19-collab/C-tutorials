#include <stdio.h>

void printtemp(float temp)


int main(){
 printf(" enter temprature in celsius\n");
 float temp;
 scanf("%f", &temp);
 printtemp(temp);   
    return 0;
} // recursive function to calculate percentage of 3 subjects
  void printtemp(float temp){
    if (temp<28){
        printf("feels cold\n");
    }else if (temp>=28 && temp<= 35){
        printf("feels Normal\n");
    }else if (temp>35){
        printf("feels hot\n");
    } 
}
