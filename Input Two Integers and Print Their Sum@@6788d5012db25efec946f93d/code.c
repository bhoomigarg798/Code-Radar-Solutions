#include <stdio.h>
int main(){
    int a,b;
    int sum = 0;
    printf("Enter two integers:");
    scanf("%d %d", &a,&b);
    sum = a+b;
    printf("Sum: %d\n",sum);
    return 0;
}