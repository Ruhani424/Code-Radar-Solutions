// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int min=arr[0];
    int diff;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            diff=arr[i]-arr[j];
        }
    }
    if(diff<min){
        min=diff;
    }
    printf("%d\n",min);
    return 0;
}