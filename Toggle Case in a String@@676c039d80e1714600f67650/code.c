#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char input[100];
    gets(input);
    for(int i = 0 ; i< strlen(input) ; i++){
        if(input[i] == islower(input[i])){
            toupper(input[i]);
        }
        else{
            tolower(input[i]);
        }
    }
    printf("%s", input);
}