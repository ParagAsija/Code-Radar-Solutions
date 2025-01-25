#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int c = b*b;
    if(a == c){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
