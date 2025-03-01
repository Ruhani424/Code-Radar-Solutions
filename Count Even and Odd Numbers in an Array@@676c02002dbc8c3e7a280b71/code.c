#include <stdio.h>
int main(){
    int n,counteven=0,countodd=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            counteven++;
        }else{
            countodd++;
        }
       
    }
     printf("%d", counteven);
     printf("%d", countodd);
}