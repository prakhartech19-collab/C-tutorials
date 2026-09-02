#include<stdio.h>
  void printPrice(float value);

int main(){
  float value = 100.0;
   printPrice(value);

 return 0;
}
  void printPrice(float value){
    value = value +(0.18 * value);
    printf(" price with gst is%f", value);
  }