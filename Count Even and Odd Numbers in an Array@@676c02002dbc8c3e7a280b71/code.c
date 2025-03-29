// Your code here...
#include<stdio.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
    int n,even,odd;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    even = 0;
    odd = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    return 0;
}