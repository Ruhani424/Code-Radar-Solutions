// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int min=arr[0];
    int diff,i,j;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            diff=arr[i]-arr[j];
        }
    }
    if(diff<min){
        min=diff;
            printf("%d %d\n",arr[i],arr[j]);
    }

    return 0;
}