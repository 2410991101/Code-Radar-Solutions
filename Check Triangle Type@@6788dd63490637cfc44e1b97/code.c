#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d" "%d" "%d",&a,&b,&c);
    if((a==b && b!=c && c==a)||(a!=b && b==c && c==a)||(a==b && b==c && c!=a){
        printf("Isoceles");
    }
    else if(a==b && b==c && a==c ){
        printf("Equilateral");
    }
    else{
        printf("Scalene");
    }
    return 0;
}