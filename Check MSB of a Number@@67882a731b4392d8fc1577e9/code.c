#include <stdio.h>

int main() {
int a;
scanf("%d", &a);
int binary[1000];
int i = 0;
while(a>0){
    binary[i] = a%2;
    a/=2;
    i++;
}
if(binary[i-1] == 0){
    printf("Not Set");
}
else{
    printf("Set");
}
}