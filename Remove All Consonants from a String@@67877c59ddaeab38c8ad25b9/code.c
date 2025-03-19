#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char input[100];
    fgets(input, 100, stdin);
    int length = strlen(input);
    char output[100];
    int j = 0;
    for(int i = 0; i < length; i++){
        if(isConsonant(input) == false){
            output[j] = input[i];
            printf("%d", &output[j]);
            j++;
        }
    }
}