#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a &b);
    int i = 0;
    int binary[100];

    while(a>0){
        binary[i] = a%2;
        a/=2;
        i++;
    }
    printf("%d", binary[b]);

}