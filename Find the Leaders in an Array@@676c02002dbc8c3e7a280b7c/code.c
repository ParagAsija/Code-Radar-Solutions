#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i <N;i++){
        scanf("%d", &arr[i]);
    }
    if(N==1){
        printf("%d ", &arr[0]);
    }
    for(int i = 0; i<N;i++){
        int out = 1;
        if(i== N-1){
            printf("%d ", &arr[n-1]);
        }
        for(int j = i+1;j<n;j++){
            if(arr[j] > arr[i]){
                out = 0;
                break;
            }
        }
        if(out == 1){
            printf("%d ", &arr[i]);
        }
        }
    }
