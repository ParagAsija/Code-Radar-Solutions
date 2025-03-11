#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);
    char input[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &input[i]);
    }
    int first = INT_MIN , second = INT_MIN;
    for(int i = 0; i < n; i++){
        if(int[i] > first){
            second = first;
            first = int[i];
        }
        else if(int[i] > second && int[i] != first){
            second = int[i];
        }
    }
    if (second == INT_MIN || n == 1){
        printf("-1");
    }
    else{
        printf("%d", &second);
    }
}