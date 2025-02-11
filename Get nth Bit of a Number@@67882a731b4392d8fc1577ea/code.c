#include <stdio.h>

int main(){
    long long unsigned a;
    int b;
    scanf("%llu %d", &a, &b);
    int i = 0;
    int binary[100];

    while(a>0){
        binary[i] = a%2;
        a/=2;
        i++;
    }
    if(b>i-1){
        printf(0);
    }
    else{
    printf("%d", binary[b]);
    }
}