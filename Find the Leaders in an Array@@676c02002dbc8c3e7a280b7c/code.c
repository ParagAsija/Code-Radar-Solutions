#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int input[n];
    for(int i = 0; i < n; i++){
    scanf("%d", &input[i]);
    }
    int out[n];
    for(int i = 0; i < n; i++){
        for(int j = i+1; j<n; j++){
        if((input[i] < input[j] && i < n -1) || (i == n -1)){
        out[i] = 1;
            break;
        }
        }

        }
    if(n == 1){
            printf("%d", input[0]);
            break;
        }
    else{
        for(int i = 0; i < n; i++){
            if(out[i] == 1){
                printf("%d", input[i]);
            }
        }
    }
}