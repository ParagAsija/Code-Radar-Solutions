#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int sum=0;
    for(int i=2;i<a;i++){
        if(a%i==0)
        {
            sum+=1;
            break;
            }
    }
    if(sum==1 && a>1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}