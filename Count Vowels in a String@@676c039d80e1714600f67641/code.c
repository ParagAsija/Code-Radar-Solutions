#include <stdio.h>
#include <string.h>

int main(){
    char input[10];
    scanf("%s", &input);
    int vowels = 0;
    char vow[10] = "AEIOUaeiou";
    for(int i = 0; i<strlen(input); i++){
        for(int j = 0; j<10; j++){
            if(input[i] == vow[j]){
                vowels ++;
                break;
            }
        }
    }
    printf("%d", vowels);
}
