# include<stdio.h>
int main(){
    float a;
    float b;
    float c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float avg = (a + b + c)/3;
    printf("Average: %.2f",avg);
    return 0;
}