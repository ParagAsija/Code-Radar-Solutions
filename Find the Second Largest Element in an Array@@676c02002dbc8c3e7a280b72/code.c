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
        if(input[i] > first){
            second = first;
            first = input[i];
        }
        else if(input[i] > second && input[i] != first){
            second = input[i];
        }
    }
    if (second == INT_MIN || n == 1){
        printf("-1");
    }
    else{
        printf("%d", &second);
    }
}