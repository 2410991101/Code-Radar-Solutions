#include <stdio.h>
int main() {
    int length;
    int base;
    int height;
    scanf("%d" "%d" "%d",&length,&base,&height);
    if(length*length+base*base==height*height){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}