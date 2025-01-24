#include <stdio.h>

int main(){
    char chara;
    scanf("%c", &chara);
    if(chara>=a && chara<=z){
        printf("Lowercase");
    }
    else if(chara>=A && chara<=Z){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
}