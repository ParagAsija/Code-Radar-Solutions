#include <stdio.h>
#include <string.h>

int main(){
    int arr1[100], arr2[100];
    scanf("%s %s", &arr1, &arr2);
    for(int i = strlen(arr1) - 1 ; i>=0; i--){
    int j = 0;
    arr1[j] = arr1[i];
    char out[10] = 'Yes';
    if(arr1[j] != arr2[j]){
        out[10] = 'No';
        break;
    }
    j++;
    }
    printf("%s", out[10]);
}