#include <stdio.h>
int printPrimesInRange(int a,int b) {
    for (int i=a;i<=b;i++) {
        for (int j=2;a<=j*j<=b;j++) {
            if (j%i==0) {
                printf("No prime numbers");
            }
        }
        printf("%d",i);
    }
    return 0;
}