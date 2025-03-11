#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int input[n];
    for(int i = 0; i < n; i++){
    scanf("%d", &input[i]);
    }
    for(int i = 0; i < n; i++){
        if(n == 1){
            printf("%d", input[0]);
            break;
        }
        else if(i == n-1){
            printf("%d", input[n-1]);
            break;
        }
        else{
        for(int j = i+1; j<n; j++){
        if(input[i] < input[j]){
            printf("%d ", input[i]);
            break;
        }
        }
        }
    }
}