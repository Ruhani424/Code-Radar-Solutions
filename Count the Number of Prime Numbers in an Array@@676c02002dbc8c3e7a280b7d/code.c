#include <stdio.h>
int main(){
    int n,count=0,num=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        for(int j=1;j*j<arr[i];j++){
            if(arr[i]%j==0){
              num++;
            }
            if(num>2){
                break;
            }else{
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}