#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    int count_of_non_prime = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &array[i]);
        for(int j = 2; j<array[i]; j++){
            if((array[i]%j==0) || (array[i]==0 || array[i]==1)){
                count_of_non_prime += 1;
                break;
            }
        }
    }
    printf("%d", n - count_of_non_prime);

}