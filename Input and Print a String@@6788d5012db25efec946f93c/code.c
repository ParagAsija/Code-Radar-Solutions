#include <stdio.h>
#define LIMIT 6

int main(){
    char str[LIMIT];
    fgets(str , LIMIT , stdin);
    printf("You entered: %s",str);
    return 0;
    }