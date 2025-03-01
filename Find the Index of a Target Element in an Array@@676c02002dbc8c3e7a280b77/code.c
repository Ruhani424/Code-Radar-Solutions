#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==k){
            printf("%d",i);
        }else{
            printf("-1");
        }
}
return 0;
}