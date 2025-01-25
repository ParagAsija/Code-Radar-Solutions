#include <stdio.h>

int main(){
    int age;
    scanf("%d", &age);
    if(age>17){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}