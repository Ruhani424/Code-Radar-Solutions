#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
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
    if(temp> arr[0]){
        printf("%d", temp);
        return 0;
    }
    printf("-1");
    return 0;
}