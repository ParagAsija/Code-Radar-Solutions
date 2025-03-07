#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    fgets(input , 100 , stdin);
    char output[100];
    int c = 0;
    for(int i = 0 ; i< strlen(input); i++){
        if(input[i] != ' '){
            output[c] = input[i];
            c++;
        }
    }
    printf("%s", output);
}