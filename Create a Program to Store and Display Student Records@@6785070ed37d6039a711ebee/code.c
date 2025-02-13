#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        int roll;
        char name;
        float marks;
        scanf("%d %c %f", &roll, &name, &marks);
        printf("%d %c %f\n", roll , name, marks);
    }
}