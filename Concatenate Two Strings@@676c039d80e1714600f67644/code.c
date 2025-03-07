#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    fgets(a, 100, stdin);
    fgets(b , 100 , stdin);
    int c = strlen(a);
    for(int i = 0; i<strlen(b);i++){
        a[c] = b[i];
        c++;
    }
    printf("%s", a);
    return 0;
}