#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char input[100];
    fgets(input , 100 , stdin);
    for(int i = 0 ; i< strlen(input) ; i++){
        if(islower(input[i])){
            input[i] = toupper(input[i]);
        }
        else{
           input[i] = tolower(input[i]);
        }
    }
    printf("%s", input);
}