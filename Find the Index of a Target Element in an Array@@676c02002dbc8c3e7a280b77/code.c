#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int list[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &list[i]);
    }
    int T;
    scanf("%d", &T);
    int index = 0;
    for(int i = 0; i<n; i++){
        if(list[i] == T){
            break;
        }
        index += 1;
    }
    printf("%d", index);
}