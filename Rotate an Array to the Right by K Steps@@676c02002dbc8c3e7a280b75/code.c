#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char inp[n];
    char out[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &inp[i]);
    }
    int k;
    scanf("%d", &k);
    int st = n - k;
    int end = 0;
    for(int i = 0; i < n; i++){
        if(i < n - k){
            out[i] = inp[st];
            st ++;
        }
        else{
            out[i] = inp[end];
            end++;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", out[i]);
    }
}