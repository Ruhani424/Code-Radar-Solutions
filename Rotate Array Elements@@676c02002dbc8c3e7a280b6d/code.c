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
        int temp=array[N-1];
        for(int j=N-2;j>=0;j--){
            array[j+1]=array[j];
        }
        array[0]=temp;
        k--;
    }
    for(int k=0;k<N;k++){
        printf("%d",array[k]);
    }

}