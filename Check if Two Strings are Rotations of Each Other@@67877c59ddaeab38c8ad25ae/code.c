#include <stdio.h>
#include <string.h>

int main(){
    char arr1[100], arr2[100];
    scanf("%s %s", &arr1, &arr2);
    int len1 = strlen(arr1);
    char start = arr1[0];
    char end = arr1[len1 - 1];
    arr1[0] = end;
    arr1[len1 - 1] = start;
    int out = 1;
    for(int i = len1 - 1 ; i>=0; i--){
    if(arr1[i] != arr2[i]){
        out = 0;
        break;
    }
    }
    if(out){
        printf("Yes");
    }
    else{
        printf("No");
    }
}