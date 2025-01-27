#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int max_stars = (2*n)-1;
    int case_stars = (2*i)-1;
    int k = n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n)-1;j++){
            if(j<=(max_stars-case_stars)/2){
                printf(" ");
            }
            else if(j>(max_stars+case_stars)/2){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    // for(int i=n;i>1;i--){
    //     for(int j = (2*k)-1; j>=1; j--){
    //         if(j<=(max_stars-case_stars)/2){
    //             printf(" ");
    //         }
    //         else if(j>(max_stars+case_stars)/2){
    //             printf(" ");
    //         }
    //         else{
    //             printf("*");
    //         }
    //     }
    //     printf("\n");
    // }
}