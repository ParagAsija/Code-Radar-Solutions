#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int list[n];
    int max = list[0];
    for(int i =0 ; i<n; i++){
        scanf("%d", &list[i]);
    }
    for(int j = 1; j<n; j++){
        if(list[j]>max){
            max = list[j];
        }
    }
    int list2[n-1];
    int num = 0;
    for(int i = 0; i<n; i++){
        if(list[i] != max){
            list2[num] = list[i];
            num += 1;
        }
    }
    int max2 = list2[0];
    for(int i = 1; i < n-1 ; i++){
if(list2[i] > max2){
    max2 = list2[i];
}
    }
    printf("%d", max2);
}