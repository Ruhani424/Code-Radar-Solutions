#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int temp=arr[0];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            
            if(arr[i]>temp){
                temp=arr[i];
                 printf("%d",temp);
            }
        }  
    }
    printf("-1");
    return 0;
}