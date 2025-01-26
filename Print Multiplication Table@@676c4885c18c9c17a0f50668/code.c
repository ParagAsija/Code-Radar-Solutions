#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=10;i++){
        printf("2 x %d = %d", i, n);
        n*=i+1;
        printf("\n");
    }
}