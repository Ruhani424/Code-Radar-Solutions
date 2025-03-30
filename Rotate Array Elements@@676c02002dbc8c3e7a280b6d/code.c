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
    int star1t=0;
    int end1=k-1;
    while(start1<end1){
        int temp=arr[start1];
        arr[start1]=arr[end1];
        arr[end1]=temp;
    }
    int start2=k;
    int end2=n-1;
    while(start2<end2){
        int temp=arr[start2];
        arr[start2]=arr[end2];
        arr[end2]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
return 0;
}