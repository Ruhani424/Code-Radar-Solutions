#include <stdio.h>
void rotate(){
    int N,k;
    scanf("%d",&N);
    int array[N];
    for(int i=0;i<N;i++){
        scanf("%d",array[i]);
    }
    scanf("%d",&k);
    while(k>0){
        int temp=arr[N-1];
        for(int j=N-2;j>=0;j--){
            arr[j+1]=arr[j];
        }
        arr[0]=temp;
        k--;
    }
    for(int k=0;k<N;k++){
        printf("%d",arr[k])
    }

}