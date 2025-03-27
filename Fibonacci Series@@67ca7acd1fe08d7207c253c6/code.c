#include <stdio.h>
int fibonacciSeries (int n) {
    if (n==1) {
        printf("%d",0);
    }
    int a=0;
    int b=1;
    printf("%d ",a);
    printf("%d ",b);
    for (int i=1;i<n-1;i++) {
        int c = a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}