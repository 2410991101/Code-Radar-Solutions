// Your code here...
selectionsort(int arr[],int n){
    int minindex,temp;
    for(int i=0;i<n;i++){
        minindex=1;
        for(j=0;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
            temp=arr[minindex];
            arr[minindex]=arr[i];
            arr[i]=temp;
        }
    }
}
kthSmallest(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        printf("%d",arr[k]);
    }
}