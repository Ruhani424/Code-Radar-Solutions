#include <stdio.h>
int main() {
    int n,m;
    char operatr;
    scanf("%d %d %c",&n,&m,&operatr);
    switch(operatr){
        case '+':
        printf("%d",n+m);
        break;
        case '-':
        printf("%d",n-m);
        break;
        case '*':
        printf("%d",n*m);
        case '/':
        printf("%d",n/m);
        break;
        default:
        printf("Error");



    }


    return 0;
}