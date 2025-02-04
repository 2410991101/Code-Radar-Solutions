#include <stdio.h>
int main() {
    int a,b;
    char ope;
    scanf("%d" "%d" "%c",&a,&b,&ope);
    if(ope == '+'){
        printf("%d + %d = %d",a,b,a+b);
    }
    else if(ope == '-'){
        printf("%d - %d = %d",a,b,a-b);
    }
    else if(ope == '*'){
        printf("%d",a*b);
    }
    else if(ope == '/'){
        printf("%d",a/b);
    }
    return 0;
}