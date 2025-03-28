#include <stdio.h>
int printPrimesInRange(int a,int b) {
    for (int i=a;i<=b;i++) {
        for (int j=2;a<=j*j<=b;j++) {
            if (i%j!=0) {
                printf("%d",i);
            }
        }
        printf("No prime numbers");
    }
    return 0;
}