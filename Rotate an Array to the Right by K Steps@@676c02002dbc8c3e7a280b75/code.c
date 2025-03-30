// Your code here...int main(){
    #include <stdio.h>
    int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k=k%n;

// reverse arr from 0 to n-1

int end=n-1;
int start=0;
while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    end--;
    start++;
}
// reverse arr from 0 to k-1
int end2=k-1;
int start2=0;
while(start2<end2){
    int temp=arr[start2];
    arr[start2]=arr[end2];
    arr[end2]=temp;
    end2--;
    start2++;
}
// reverse arr from k to n-1
int end3=n-1;
int start3=k;
while(start3<end3){
    int temp=arr[start3];
    arr[start3]=arr[end3];
    arr[end3]=temp;
    end3--;
    start3++;
}
for(int i=0;i<n;i++){
printf("%d",arr[i]);
}
    }
