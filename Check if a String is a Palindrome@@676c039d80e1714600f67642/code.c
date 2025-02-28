#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    scanf("%s", &input);
    char rev_input[100];
    int j = 0;
    int palindrome = 1;
    for(int i = strlen(input) - 1; i>=0; i--){
        rev_input[j] = input[i];
        j++;
    }
    for(int i = 0; i<strlen(input); i++){
        if(rev_input[i] != input[i]){
                palindrome--;
                break;
        }
    }
    if(palindrome){
        printf("Yes");
    }
    else{
        printf("No");
    }
}