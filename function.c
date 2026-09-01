#include<stdio.h>
 void Namaste();
 void Bonjour();


int main(){
     printf(" enter I for indian and f for french :");
      char ch ;
    scanf("%c", &ch);
     if(ch == 'I'){
        Namaste();
     } else {
        Bonjour();
        
     }
    
 return 0;
}
 void Namaste(){
    printf("Namaste \n");
     }

     void Bonjour(){
        printf("Bonjour\n");

     }