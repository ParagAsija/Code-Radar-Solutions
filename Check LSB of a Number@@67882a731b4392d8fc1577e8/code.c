#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char binary[100];
    int q = n;
    for(int i = 1;i>=0;i){
        binary += q%2;
        q/=2;
        if(q==0){
            break;
        }
    }
    
}