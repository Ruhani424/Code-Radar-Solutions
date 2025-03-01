#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int num=-1
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==k){
            num=i;
        }
        printf("%d",num);
}
return 0;
}