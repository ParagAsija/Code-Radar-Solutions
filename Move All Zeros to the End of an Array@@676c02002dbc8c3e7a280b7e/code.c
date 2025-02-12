#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int array_new[n];
    int count = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]!=0){
            array_new[count] = arr[i];
            count ++;
        }
    }
    for(int i = count ; i<n; i++){
        array_new[count] = 0;
    }
    for(int i = 0; i<n; i++){
        printf("%d ", array_new[i]);
    }
}