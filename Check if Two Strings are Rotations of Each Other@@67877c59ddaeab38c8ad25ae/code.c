#include <stdio.h>
#include <string.h>

int main(){
    char arr1[100], arr2[100];
    scanf("%s %s", &arr1, &arr2);
    char arr1_r[100];
    int len1 = strlen(arr1);
    int strt = 0;
    for(int i = 0; i < strlen(arr1); i++){
        if((i+1)%2!=0){
            arr1_r[i] = arr1[len1];
            len1 --;
        }
        else{
            arr1_r[i] = arr1[strt];
            strt ++;
        }
    }
    int out = 1;
    for(int i = strlen(arr1) - 1 ; i>=0; i--){
    if(arr1_r[i] != arr2[i]){
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