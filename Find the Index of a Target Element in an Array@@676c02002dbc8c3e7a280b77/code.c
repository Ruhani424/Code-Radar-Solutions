#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    
    int arr[n];
    // int num=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==k){
            printf("%d",i);
            return 0;
        }
        
    }
printf("-1\n");
return 0;
}