#include <stdio.h>
#include <string.h>

int main(){
    char input[10];
    scanf("%s", &input);
    int vowels = 0;
    for(int i = 0; i<strlen(input); i++){
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u'){
vowels ++;
        }
    }
    printf("%d", vowels);
}
