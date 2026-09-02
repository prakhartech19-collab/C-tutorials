#include <stdio.h>
#include <math.h>

int calcpercentage( int  science , int maths , int sanskrit);

int main() {
     int science = 75;
     int maths = 67 ;
     int sanskrit = 88;
     printf("percentage is %d", calcpercentage(science , maths , sanskrit));

    return 0;
} // recursive function to calculate percentage of 3 subjects
 int calcpercentage( int science , int maths , int sanskrit){
     return ((science + maths + sanskrit))/3;
 }