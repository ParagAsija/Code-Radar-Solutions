#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    int length = input/input[1];
    int count = 0;
    scanf("%s", input);
    for(int i = 0; i<length; i++ ){
        count += 1;
    }
    printf("%d", count);
}