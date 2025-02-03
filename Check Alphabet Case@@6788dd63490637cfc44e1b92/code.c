#include <stdio.h>
int main() {
    char alf;
    scanf("%c",&alf);
    if(isUpper(alf)){
        printf("Uppercase");
    }
    else if(isLower(alf)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}