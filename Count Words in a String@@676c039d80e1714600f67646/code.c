#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    scanf("%s", &input);
    int words = 0;
    for(int i = 0; i<strlen(input); i++){
        if(input[i] = ' ' && input[i+1]!=' ' && input[i+1]!='\O'){
            words ++;
        }
    }
    if(strlen(input)>0 && input[0]!=' '){
        words ++;
    }
    printf("%d", words);
}

// #include <stdio.h>
// #include <string.h>

// // Function to count the number of words in a string
// int countWords(char str[]) {
//     int count = 0;
//     int length = strlen(str);

//     for (int i = 0; i < length; i++) {
//         if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
//             count++;
//         }
//     }

//     // Increment count for the last word
//     if (length > 0 && str[0] != ' ') {
//         count++;
//     }

//     return count;
// }

// int main() {
//     char str[100];
//     fgets(str, sizeof(str), stdin);

//     // Remove trailing newline character
//     if ((strlen(str) > 0) && (str[strlen(str) - 1] == '\n')) {
//         str[strlen(str) - 1] = '\0';
//     }

//     int wordCount = countWords(str);
//     printf("%d", wordCount );

//     return 0;
// }
