#include <stdio.h>
int main() {
    char alf;
    scanf("%c",&alf);
    if(alf>="A" && alf<= "Z"){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}