#include <stdio.h>

int* insertionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int smallindx = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[smallindx]){
                smallindx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallindx];
        arr[smallindx] = temp;
    }
    return arr;
}

void printArray(int arr[], int n[]){
    for(int i =0; i < n; i++){
        printf("%d ", arr[i]);
    }
}