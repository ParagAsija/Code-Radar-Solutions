#include <stdio.h>
int main(){
    char input[100];
    int i = 0;
    int count = 0;
    scanf("%s", input);
    while(input[i] !=' '){
        count += 1;
    }
    printf("%d", count);
}