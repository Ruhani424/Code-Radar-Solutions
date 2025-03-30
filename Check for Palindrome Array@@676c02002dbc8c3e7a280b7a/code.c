#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[n-i];
    }
    for(int i=0;i<n;i++){
    if(arr[i]==brr[i]){
        printf("YES");
    }else{
        printf("NO");
        break;
    }
    }
}