#include <stdio.h>
#include <string.h>

int main(){
    char input[100], a;
    fgets(input , 100, stdin);
    scanf("%c", &a);
    int occur = 0;
    for(int i = 0; i< strlen(input); i++){
        if(input[i] == a){
            occur ++ ;
        }
    }
    printf("%d", occur);

}