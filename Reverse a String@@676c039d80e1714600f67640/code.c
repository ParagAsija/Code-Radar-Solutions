#include <stdio.h>
#include <string.h>

int main(){
 char input[];
 char rev_input[];
 scanf("%s", &input);
 for(int i = strlen(input) - 1; i >=0; i--){
    rev_input += input[i];
 }
 printf("%s", rev_input);
}