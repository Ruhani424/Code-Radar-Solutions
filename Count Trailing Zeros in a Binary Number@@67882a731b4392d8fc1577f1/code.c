#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num ==0){
        printf("32");
    }else{
        printf("%d",__builtin_ctz(num));
    }
    return 0;
}