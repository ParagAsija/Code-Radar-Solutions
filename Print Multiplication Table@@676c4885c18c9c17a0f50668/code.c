#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int prod = n;
    for(int i=1;i<=10;i++){
        n *= i;
        printf("%d x %d = %d", prod, i, n);
        n = prod;
        printf("\n");
    }
}