#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    int count = 0;
    scanf("%s", input);
    while(input[count]!='\0' || input[count] == ' '){
        count += 1;
    }
    printf("%d", count);
}