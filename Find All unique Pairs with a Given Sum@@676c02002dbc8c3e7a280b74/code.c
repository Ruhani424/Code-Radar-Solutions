#include <stdio.h>
int main(){
    int n,sum;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(arr[j]+arr[k]==sum);
            printf("%d %d",arr[j],arr[k]);
        }
    }
    return 0;
}