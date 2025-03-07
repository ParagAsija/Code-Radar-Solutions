#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    fgets(input, 100, stdin);
    char inp , rep ;
    scanf("%c\n %c" , &inp, &rep);
    for(int i = 0 ; i< strlen(input); i++){
        if(input[i] == inp){
            input[i] == rep;
        }
    }
    printf("%s", input);
    return 0;
}