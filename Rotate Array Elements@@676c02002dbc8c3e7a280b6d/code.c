#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",array[i]);
    }
    scanf("%d",&k);
    k=k%n;
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
    int start=0;
    int end=k-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
    int start=k;
    int end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
return 0;
}