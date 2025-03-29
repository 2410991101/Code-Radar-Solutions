// Your code here...
#include<stdio.h>
#define MAX_SIZE 100
int main(){
    int n,arr[MAX_SIZE],
    int even = 0;
    int odd=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
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