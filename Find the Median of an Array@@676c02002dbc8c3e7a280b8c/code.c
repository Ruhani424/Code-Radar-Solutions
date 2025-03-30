// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        mid=(start+end)/2;
        printf("%d",arr[mid]);
    }
    return 0;
}