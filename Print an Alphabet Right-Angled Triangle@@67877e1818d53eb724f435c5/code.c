#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(char c='A'; c<=n;c++){
        for(char d='A';d<=c;d++){
            printf("%c ", d);
        }
        printf("\n");
    }
}