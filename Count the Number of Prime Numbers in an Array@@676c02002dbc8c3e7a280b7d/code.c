#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        for(int j=2;j*j<arr[i];j++){
            if(arr[i]%j==0){
                break;
            }
            
            else{
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}