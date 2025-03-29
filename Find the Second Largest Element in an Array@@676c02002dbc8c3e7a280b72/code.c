// Your code here...
#include<stdio.h>
#include<limits.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
    int n,max1,max2;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max1=max2= INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max1=max2;
            max2=arr[i];
        }
        else if(arr[i]>max2 && arr[i<max1]){
            max2=arr[i];
        }
    }
    printf("%d",max1);
    return 0;
}