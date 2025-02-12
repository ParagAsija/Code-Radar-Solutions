#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int array_new[];
    int count = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]!=0){
            array_new[count] = arr[i];
            count ++;
        }
    }
    len_array_new = sizeof(array_new)/sizeof(array_new[0])
    for(int i = len_array_new ; i<n; i++){
        array_new[len_array_new] = 0;
    }
    for(int i = 0; i<n; i++){
        printf("%d ", array_new[i])
    }
}