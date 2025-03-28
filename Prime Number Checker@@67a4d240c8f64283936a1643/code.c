#include <stdio.h>
int isPrime(int num) {
    for(int i=2;i*i<=num;i++){
        if (num%i!=0) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }
    }
    return 0;
}

