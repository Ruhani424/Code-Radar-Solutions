// Your code here...
#include <stdio.h>
int main(){
    int n,mid;
    scanf("%d",&n);
    int arr[n];
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(n%2==1){
        mid=(start+end)/2;
        printf("%d",arr[mid]);
        break;}
        else{
           int midd=(start+end)/2;
           arr[mid]=(arr[midd]+arr[midd+1])/2
           printf("%d",arr[mid]);
        }
    }
    return 0;
}