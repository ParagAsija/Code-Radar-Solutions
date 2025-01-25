#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    sum=0;
    for(int i=2;i<a;i++){
        if(a%i==0)
        {printf("Prime");
            sum+=1;
            break;}
    }
    if(sum==1){
        printf("Not Prime");
    }
}