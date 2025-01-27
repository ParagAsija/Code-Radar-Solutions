#include <stdio.h>

int main(){
    int month;
    scanf("%d", &month);
    if (month ==(1 || 3 || 5 || 7 || 8 || 10 || 12)){
        printf("31");
    }
    else if(month>12 || month<1){
        printf("Invalid Month");
    }
    else if(month==2){
        printf("28");
    }
    else{
        printf("30");
    }
}