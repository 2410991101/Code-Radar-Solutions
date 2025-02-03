#include <stdio.h>
int main() {
    char alf;
    scanf("%c",&alf);
    if(isupper(alf)){
        printf("Uppercase");
    }
    else if(islower(alf)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}