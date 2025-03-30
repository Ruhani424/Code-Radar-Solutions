// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        // int flag=0;
        // for(int j=0;j<n-1-i;j++){
        
            if(arr[i]>arr[i+1]){
                // int temp=arr[j];
                // arr[j]>arr[j+1];
                printf(" Not Sorted\n");
                break;
                // arr[j+1]>temp;
            }
            printf("Sorted");
    }
            
        }

//         if(flag==0){
//             break;
//         }
//         for(int i=0;i<n;i++){
//             printf("%d",arr[i]);
//         }
//     }
// }