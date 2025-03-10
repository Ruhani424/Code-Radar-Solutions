#include <stdio.h>
int main(){
    int n;
    int temp=-1;
   
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            
            if(arr[i]>temp){
                temp=arr[i];
            }
        
        }else if(arr[i]<0)
        {if (arr[i]%2==0){
            if(arr[i]>temp){
                temp=arr[i];
        }
        }
        
       
    }
     printf("%d",temp);
    return 0;
}