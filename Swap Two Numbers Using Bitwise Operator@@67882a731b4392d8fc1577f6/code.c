#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    a = a^b;
    b= a^b;
    a = a^b;
    printf("%d %d",a,b);
    return 0;
}