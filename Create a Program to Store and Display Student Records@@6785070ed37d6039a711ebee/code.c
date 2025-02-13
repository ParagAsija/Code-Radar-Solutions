#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int roll[n];
    char name[n];
    float marks[n];
    for(int i =0; i<n; i++){
        scanf("%d %c %.1f", &roll[i], &name[i], &marks[i]);
        printf("Roll Number: %d, Name: %c, Marks: %.1f\n", roll[i] , name[i], marks[i]);
    }
}