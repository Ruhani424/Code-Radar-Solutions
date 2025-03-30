
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first=arr[0];
    int second=-1;
    if(n<2){
        printf("-1");
    }else{
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i]!=0){
            second=arr[i];
        }
        
    }
}
    
      printf("%d",second);
    
    return 0;
}