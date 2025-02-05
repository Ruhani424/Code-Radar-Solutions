#include <stdio.h>
int main() {
   int n;
   int count;
   scanf("%d",&n);
   if(n==0 || n==1){
    printf("Not Prime");
   }else{
    for(int i=2;i<=n;i++){
        if(n%i==0){
            count++;
        }

    }
   }
   if(count==1){
    printf("Prime");
   }else{
    print("Not Prime");
   }
    return 0;
}