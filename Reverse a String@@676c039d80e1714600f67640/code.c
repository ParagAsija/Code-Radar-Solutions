#include <stdio.h>
#include <string.h>

int main(){
 char input[100];
 char rev_input[100];
 scanf("%s", &input);
 int  j = 0;
 for(int i = strlen(input) - 1; i >=0; i--){
    rev_input[j] = input[i];
    j++;
 }
 printf("%s", rev_input);
}