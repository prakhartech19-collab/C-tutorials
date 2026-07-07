#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countlength(char arr[]);
void salting(char password[]);


int main() {
    char password[100];
     scanf("%s", password);
      salting(password);
  
}
  void salting(char password[]) {
    char salt[] = "123";
    char newpassword[200];

    strcpy(newpassword, password);// newpass ="test"
    strcat(newpassword , salt); // newpass ="test" +"123";
     puts(newpassword);
  }


int countlength(char arr[]){
  int count =0;
  for(int i=0; arr[i] !='\0'; i++ ){
    count++; 
  }
  return count-1; 
}

 void printString(char arr[]) {
  for(int i=0; arr[i] !='\0'; i++){
    printf("%c", arr[i]);
  }
  printf("\n");
 }
