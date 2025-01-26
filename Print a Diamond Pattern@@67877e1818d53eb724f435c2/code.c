#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=((2*n)-1);j+=2){
            if((j<=(((2*n)-(j+1))/2)) || (j>=(((2*n)-1+j)/2))){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
    printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=(2*n)-1;j+=2){
            if((j<=(((2*n)-(1+j))/2)) || (j>=(((2*n)-1+j)/2))){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}