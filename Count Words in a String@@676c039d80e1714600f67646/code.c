#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    scanf("%s", &input);
    int words = 1;
    for(int i = 0; i<strlen(input); i++){
        if(input[i] = ' '){
            words ++;
        }
    }
    printf("%d", words);
}