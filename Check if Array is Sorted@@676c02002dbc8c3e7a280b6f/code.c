#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int list[n];
    int sum = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &list[i]);
    }
    for(int i = 1; i<n; i++){
        if(list[i-1] > list[i]){
            sum += 1;
            break;
        }    
        }
        if(sum == 1){
            printf("Not Sorted");
        }
        else{
            printf("Sorted");
        }
}