#include <stdio.h>
void main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float average;
    average=(a+b+c)/3;
    printf("Average: %.2f",average);
    return 0;
}