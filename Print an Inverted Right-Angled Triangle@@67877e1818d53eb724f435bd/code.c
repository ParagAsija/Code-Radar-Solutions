#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=n;i>=1;i--){
        for(int j=i;i>=1;i--){
            printf("*");
        }
        printf("\n")
    }
    return 0;
}