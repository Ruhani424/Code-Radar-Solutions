int bubbleSort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;  

            }
    }
    
   
}
}