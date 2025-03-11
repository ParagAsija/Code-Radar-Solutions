#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char input[100];
    int a = 0;
    for(int i = 0; i<n;i++){
        scanf("%d ", &input[i]);
        a += input[i];
        printf("%d ", &a);
    }

}