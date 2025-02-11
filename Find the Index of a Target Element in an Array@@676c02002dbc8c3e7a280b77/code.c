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
    int not = 0;
    for(int i = 0; i<n; i++){
        if(list[i] == T){
            not+=1;
            break;
        }
        index += 1;
    }
    if(not = 0){
        printf("-1");
    }
    else{
    printf("%d", index);
    }
}