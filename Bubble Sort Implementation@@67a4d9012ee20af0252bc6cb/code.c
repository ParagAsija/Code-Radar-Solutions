// #include <stdio.h>

int bubbleSort(int arr[] ,int n){
    int out[n];
    for(int i = 0; i < n; i++){
        int min = arr[0];
        for(int j = 0; j < n; j++){
            if(min > arr[i] && min !=out[j]){
                min = arr[i];
            }
            out[i] = min;
        }
    }
    return out[n];
}

// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i <n; i++){
//         scanf("%d", &arr[i]);
//     }
//     bubbleSort(arr, n);
//     printArray(arr, n);
//     return 0;
// }