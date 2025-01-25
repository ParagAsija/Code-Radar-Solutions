#include <stdio.h>

int main(){
    int age, status;
    scanf("%d %d", age, status);
    if(age>17 && status){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}