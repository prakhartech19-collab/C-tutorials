#include <stdio.h>

  float convertTemp(float celsius);

int main() {
     float celsius = 100.0;
     printf("Temprature in farenheit is %f\n", convertTemp(celsius));

    return 0;
} 
// recursive function to convert temprature from celsius to farenheit
float convertTemp(float celsius){
      float far = celsius * 1.8 + 32;
      return far;
}