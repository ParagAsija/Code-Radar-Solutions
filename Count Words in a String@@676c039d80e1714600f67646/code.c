#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    scanf("%s", &input);
    int words = 0;
    for(int i = 0; i<strlen(input); i++){
        if(input[i] = ' ' || input[i] == '\t'){
            words ++;
        }
    }
    printf("%d", words);
}