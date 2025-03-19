#include <stdio.h>
int main(){
    int n,ctr=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==arr[i+1]){
            ctr++;
        }
    }
    int sum=0;
    scanf("%d",&sum);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("%d %d\n",arr[i],arr[j]);
                if(ctr>0){
                    printf("%d %d\n",arr[i],arr[j]);
                    return 0;
                }
            }
        }
    }
    return 0;
}