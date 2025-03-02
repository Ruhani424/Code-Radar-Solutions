#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int count=0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>m){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}