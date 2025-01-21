#include <stdio.h>
#define LIMIT 5

int main(){
    char str[LIMIT];
    fgets(str , LIMIT , stdin);
    printf("%s",str);
    return 0;
    }