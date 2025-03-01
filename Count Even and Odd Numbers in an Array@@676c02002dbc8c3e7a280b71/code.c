#include <stdio.h>
int main(){
    int n,counteven,countodd;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(i%2==0){
            counteven++;
        }else{
            countodd++;
        }
        printf("%d",counteven);
        printf("%d",countodd);
    }
}