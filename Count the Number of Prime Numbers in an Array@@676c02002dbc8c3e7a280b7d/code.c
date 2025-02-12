#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    int count_of_prime = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &array[i]);
        for(int j = 2; j<array[i]; j++){
            if(array[i]%j==0){
                count_of_prime += 1;
                break;
            }
        }
    }
    printf("%d", count_of_prime);

}