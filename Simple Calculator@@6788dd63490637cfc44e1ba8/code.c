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
        printf("%f", a*b);
    }
    else{
        if(b==0)
        {
        printf("Error");
    }
    else
    {
        printf("%f", a/b);
    }
    }
}