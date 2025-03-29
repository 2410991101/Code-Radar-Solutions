// Your code here...
#include<stdio.h>
#define MAX_SIZE 100
int main(){
    int n,arr[MAX_SIZE],max,min;
    scanf("%d");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d %d",max,min);
    return 0;
}