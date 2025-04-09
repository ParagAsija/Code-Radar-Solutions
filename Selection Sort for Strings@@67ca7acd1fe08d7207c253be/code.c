#include <string.h>

void selectionSort(char arr[][100], int n){
    for(int i = 0; i < n-1; i++){
        int min_index = i;
        for(int j = i+1; j<n;j++){
            if(strcmp(arr[j], arr[min_index])<0){
                min_index = j;
            }
        }
        char temp[100] = arr[j];
        arr[j] = arr[min_index];
        arr[min_index] = temp[100];
    }
}

void printArray(int i = 0; i < n;i++){
    printf("%s\n", arr[i]);
}