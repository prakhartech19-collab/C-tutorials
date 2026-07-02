#include<stdio.h>

  int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int *p = arr;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        printf("%d\n ", *(p + i));
    }
    printf("\n");
    return 0;
} 
 
    
    



  
  