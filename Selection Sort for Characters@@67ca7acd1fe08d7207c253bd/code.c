void selectionSort(char arr[], int n){
    for(int i = 0; i < n-1; i++){
        int min_index = i;
        for(int j = i+1; j<n;j++){
            if(arr[j]< arr[min_index]){
                min_index = j;
            }
        }
        char temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void printArray(char arr[], int n){
    for(int i = 0; i < n;i++){
        printf("%c ", arr[i]);
    }
}