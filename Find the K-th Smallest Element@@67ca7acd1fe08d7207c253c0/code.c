// Your code here...
void selectionsort(int arr[],int n){
    int minindex,temp;
    for(int i=0;i<n;i++){
        minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }}
            temp=arr[minindex];
            arr[minindex]=arr[i];
            arr[i]=temp;
        
    }
}
int kthSmallest(int arr[],int n,int k){
    if(k<1 || k>n){
        printf("-1");
    }
    selectionsort(arr,n);
    return arr[k-1];
}