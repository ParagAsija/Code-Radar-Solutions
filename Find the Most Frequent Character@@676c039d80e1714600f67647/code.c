#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    fgets(input, 100, stdin);
    int count[100];
    char letter[100];
    char c;
    for(int i = 0; i< strlen(input); i++){
        c = input[i];
        for(int j = 0; j < strlen(letter); j++){
            if(c == letter[j]){
                count[j] ++;
                break;
            }
            if(j == strlen(letter)-1 && c!=letter[j]){
                letter[strlen(letter)] = c;
                count[strlen(letter)] = 1;
            }
        }
    }
    int max = count[0];
    int index = 0;
    for(int i = 0; i < strlen(letter); i++){
        if(count[i]>max){
            max = count[i];
            index = i;
        }
    }
printf("%c", letter[index]);
}