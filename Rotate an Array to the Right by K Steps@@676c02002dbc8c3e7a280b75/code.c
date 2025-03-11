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
    int st1 = k - n;
    int end = 0;
    for(int i = 0; i < n; i++){
        if(i < k){
            out[i] = inp[st];
            st ++;
        }
        else if(k > n){
            if(i < (k-n)){
                st1 ++;
                out[i] = inp[st1];
            }
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