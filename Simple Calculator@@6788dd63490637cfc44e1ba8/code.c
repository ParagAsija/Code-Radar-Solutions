#include <stdio.h>

int main(){
    int a,b;
    char c;
    scanf("%d %d", &a, &b);
    scanf("%c", &c);
    if(c=='+'){
        printf("%d", a+b);
    }
    else if(c=='-'){
        printf("%d", a-b);
    }
    else if(c=='*'){
        printf("%.0f", a*b);
    }
    else{
        printf("%.0f", a/b);
    }
}