#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char input[100];
    fgets(input , 100 , stdin);
    for(int i = 0 ; i< strlen(input) ; i++){
        if(input[i].islower()){
            input[i].toupper();
        }
        else{
            input[i].tolower();
        }
    }
    printf("%s", input);
}