#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>m){
        printf("Yes");
    }else if(n==m){
        printf("Equal");
    }else(n<m){
        printf("No");
    }
    return 0;
}