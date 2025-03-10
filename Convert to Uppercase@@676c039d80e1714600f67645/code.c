#include <stdio.h>

int main(){
    char input[100];
    fgets(input, 100, stdin);
    for(int i = 0; input[i]!='\0'; i++){
        if(input[i]>=a && input[i]<=z){
            input[i] -= 32;
        }
        printf("%c", input[i]);
    }
    
}