#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int list[n];
    int sum_list[n];
    int zero = 0;
    for(int i = 0; i < n; i++){
    scanf("%d", &list[i]);
    int sum = 0;
    if(list[i]<0){
        list[i] = list[i]-(2*list[i]);
    }
    if(list[i] == 0){
        sum_list[i] = 0;
    }
    while(list[i]>0){
        sum += list[i]%10;
        list[i]/=10;
        sum_list[i] = sum;
    }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", sum_list[i]);
    }
}