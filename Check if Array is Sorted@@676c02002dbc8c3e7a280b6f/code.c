// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            int flag=0;
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]>arr[j+1];
                arr[j+1]>temp;
            }
        }
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
        }
    }
}