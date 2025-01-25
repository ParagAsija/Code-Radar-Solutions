#include <stdio.h>

int main(){
    int month;
    scanf("%d", &month);
    if (month ==(1 || 3 || 5 || 7 || 8 || 10 || 12)){
        printf("31");
    }
    else if(month>=1 && month<=12){
        printf("Invalid month");
    }
    else{
        printf("30");
    }
}