#include <stdio.h>
void main(){
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float average;
    average=(a+b+c)/3;
    printf("Average: %.2f",average);
    return 0;
}