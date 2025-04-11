void selectionSort(int arr[], int n){
    for(int i = 1; i < n;i++){
        int min = arr[i-1];
        for(int j = i; j<n;j++){
            if(arr[j] < min){
                int temp = min;
                min = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int kthSmallest(int arr[], int n, int k){
    selectionSort(int arr[], int n);
    return arr[k-1];
}