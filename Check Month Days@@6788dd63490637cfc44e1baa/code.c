#include <stdio.h>

int main(){
    int month;
    scanf("%d", &month);
    // if (month ==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
    //     printf("31");
    // }
    // else if(month == 4 || month == 6 || month == 9 || month == 11){
    //     printf("30");
    // }
    // else if(month==2){
    //     printf("28");
    // }
    // else {
    //     printf("Invalid month");
    // }
    switch(month){
        case 1: printf("31");
        break;
        case 2: printf("28");
        break;
        case 3: printf("31");
        break;
        case 4: printf("30");
        break;
        case 5: printf("31");
        break;
        case 6: printf("30");
        break;
        case 7: printf("31");
        break;
        case 8: printf("31");
        break;
        case 9: printf("30");
        break;
        case 10: printf("31");
        break;
        case 11: printf("30");
        break;
        case 12: printf("31");
        break;
        default: printf("Invalid month");
    }
}