#include <stdio.h>
int main(){
    int n,k,index=-1;
    scanf("%d",&n);
    
    int arr[n];
    // int num=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }scanf("%d",&k);
    for(int i=0;i<n;i++){

        if(arr[i]==k){
            index=i;
           break;
        }
        
    }
printf("%d",index);
return 0;
}