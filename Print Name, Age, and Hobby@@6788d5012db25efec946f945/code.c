#include <stdio.h>


int main() {
    char name[100];
    scanf("%s",&name);
    int age;
    scanf("%d\n",&age);
    char hobby[100];
    scanf("%s",&hobby);

    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
    return 0;
}