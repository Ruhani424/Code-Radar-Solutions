#include <stdio.h>
int SetNthBit(int num,int n){
    return num |(1<<n);
}

int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    printf("%d",SetNthBit(num,n));
    return 0;
}