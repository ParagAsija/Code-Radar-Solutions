void insertionSort(char arr[], int n){
    for(int i = 1; i < n;i++){
        char curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}

void printArray(char arr[], int n){
    for(int i = 0; i < n;i++){
        printf("%c ", arr[i]);
    }
}