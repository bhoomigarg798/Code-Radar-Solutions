#include <stdio.h>
int fibonacciSeries (int n) {
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