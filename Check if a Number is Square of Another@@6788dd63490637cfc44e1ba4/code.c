#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int c = pow(b,2);
    if(a == c){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
