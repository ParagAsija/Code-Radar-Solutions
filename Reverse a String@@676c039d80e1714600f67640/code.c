#include <stdio.h>
#include <string.h>

int main(){
 char input[100];
 char rev_input[100];
 scanf("%s", &input);
 for(int i = strlen(input) - 1; i >=0; i--){
    rev_input += input[i];
 }
 printf("%s", rev_input);
}