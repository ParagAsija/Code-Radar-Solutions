#include <stdio.h>
#define limit 50

int main(){
    char name[limit];
    char age[limit];
    char hobby[limit];
    fgets(name,limit,stdin);
    printf("Name: %s",name);
    fgets(age,limit,stdin);
    printf("Age: %s",age);
    fgets(hobby,limit,stdin);
    printf("Hobby: %s",hobby);
    return 0;
}