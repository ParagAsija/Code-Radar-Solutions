#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    int count = 0;
    fgets(input, 100, stdin);
    while(input[count]!='\0'){
        count += 1;
    }
    printf("%d", count);
}