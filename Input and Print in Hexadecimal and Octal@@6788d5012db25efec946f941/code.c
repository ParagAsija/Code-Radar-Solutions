#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int b = a;
    char hexa[50];
    char octa[50];
    do{
        if(a%16==10){
            hexa += 'A';
        }
        else if(a%16==11){
            hexa += 'B';
        }
        else if(a%16==12){
            hexa += 'C';
        }
        else if(a%16==13){
            hexa += 'D';
        }
        else if(a%16==14){
            hexa += 'E';
        }
        else if(a%16==15){
            hexa += 'F';
        }
        else{
            hexa += a%16;
        };
        a/=16;
    }
    while(a>15);
    do{
        octa += b%8;
        b/=8;
    }
    while(
        b>7;
    );
}