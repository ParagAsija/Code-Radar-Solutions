#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int list[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &list[i]);
    }
    int min = list[0];
    int max = list[0];
    for(int i = 1; i<n; i++){
        if(list[i] < min){
            min = list[i];
        }
        if(list[i] > max){
            max = list[i];
        }
    }
    printf("%d %d", min , max);
}