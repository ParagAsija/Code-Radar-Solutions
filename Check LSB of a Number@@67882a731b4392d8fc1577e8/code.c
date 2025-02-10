#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int binary[100];
    int i=0;
    do{
        binary[i] = a%2;
        a/=2;
        i++;
    }
    while(
        a>0
    );
    if(binary[0] == 0){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
}