#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>m){
        printf("Yes");
    }else if(n<m){
        printf("No");
    }else{
        printf("Equal");
    }
    return 0;
}