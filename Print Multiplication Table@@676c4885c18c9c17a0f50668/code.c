#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int prod = n;
    for(int i=1;i<=10;i++){
        n *= i;
        printf("2 x %d = %d", i, n);
        n = prod;
        printf("\n");
    }
}