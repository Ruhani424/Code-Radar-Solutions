#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    
    int arr[n];
    int num=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==k){
            num=i;
            break;
        }
        
}
printf("%d",num);
return 0;
}