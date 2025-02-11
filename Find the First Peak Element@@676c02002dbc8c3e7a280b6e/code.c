#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int list[n];
    int sum = 0;
    int series = 1;
    for(int i = 0; i<n; i++){
        scanf("%d", &list[i]);
    }
    for(int i = 1; i<n; i++){
        if(i<n-1 && (list[i] > list[i-1] && list[i] > list[i+1])){
            sum+=1;
            break;
        }
        else if(list[i] > list[i-1]){
        sum += 1;
        break;
        }
        series += 1;
    }
    if(sum == 0){
        printf("-1");
    }
    else{
        printf("%d", list[series]);
    }
}
