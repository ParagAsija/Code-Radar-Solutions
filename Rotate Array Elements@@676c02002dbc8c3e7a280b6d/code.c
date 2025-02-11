#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int list[a];
    for(int i = 0; i<a; i++){
        scanf("%d\n", list[i]);
    }
    int k;
    scanf("%d", &k);
    int st = a-k;
    int mid = 0;
    int rotated_list[a];
    for(int j = 0; j<k; j++){
        rotated_list[list[st]];
        st += 1;
    }
    for(j=k; j<a; j++){
        rotated_list[list[mid]];
        mid += 1;
    }
    for(int i = 0; i<a;i++){
        printf("%d", rotated_list[i]);
    }

}