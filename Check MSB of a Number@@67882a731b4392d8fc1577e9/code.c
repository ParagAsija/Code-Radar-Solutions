#include <stdio.h>

int main() {
long long unsigned a;
scanf("%llu", &a);
if(a==0){
    printf("Not Set\n");
    return 0;
}
int binary[64];
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
return 0;
}