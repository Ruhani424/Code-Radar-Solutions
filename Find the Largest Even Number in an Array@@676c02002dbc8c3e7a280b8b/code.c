#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]<0){
            arr[i]*=-1
        }
    }
    if(n==2){
        printf("-2");
        return 0;
    }
    int temp=arr[0];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            
            if(arr[i]>temp){
                temp=arr[i];
            }
        }  
    }
    if(temp> 2){
        printf("%d", temp);
        return 0;
    }
    printf("-1");
    return 0;
}