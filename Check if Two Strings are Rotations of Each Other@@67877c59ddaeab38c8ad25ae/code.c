#include <stdio.h>
#include <string.h>

int main(){
    int arr1[100], arr2[100];
    scanf("%s %s", &arr1, &arr2);
    int out = 1;
    int k = strlen(arr1);
    for(int i = k - 1 ; i>=0; i--){
    int j = 0;
    arr1[j] = arr1[i];
    if(arr1[j] != arr2[j]){
        out = 0;
        break;
    }
    j++;
    }
    if(out){
        printf("Yes");
    }
    else{
        printf("No");
    }
}