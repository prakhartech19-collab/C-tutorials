#include<stdio.h>
#include<string.h>

// void printString(char arr[]);
// int countlength(char arr[]);
// void salting(char password[]);
// void slice(char str[] , int n, int m);

int countVowels(char str[]);


int main() {
    char str[] = "Hello World";
    printf("Vowels are :%d" ,countVowels(str));
  }
   
   int countVowels(char str[]) {
    int count =0;

    for(int i=0; str[i] !='\0'; i++) {
        if(str[i]=='a'||str[i]=='e'|| str[i]=='i'||str[i]=='o'||str[i]=='u'){
          count++;
        }
    }
    return count;
   }






//   void slice(char str[] , int n,  int m){ //n &m are valid values
//       char newStr[100];
//       int j=0;
//       for(int i=n, j=0; i<=m; i++,j++){
//         newStr[j] = str[i];
//       }
      
//       newStr[j] = '\0';
//       puts(newStr);
//   }

//   void salting(char password[]) {
//     char salt[] = "123";
//     char newpassword[200];

//     strcpy(newpassword, password);// newpass ="test"
//     strcat(newpassword , salt); // newpass ="test" +"123";
//      puts(newpassword);
//   }


// int countlength(char arr[]){
//   int count =0;
//   for(int i=0; arr[i] !='\0'; i++ ){
//     count++; 
//   }
//   return count-1; 
// }

//  void printString(char arr[]) {
//   for(int i=0; arr[i] !='\0'; i++){
//     printf("%c", arr[i]);
//   }
//   printf("\n");
//  }
