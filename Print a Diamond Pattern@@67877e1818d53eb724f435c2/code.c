#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    if (N%2==0) {
        return 1;
    }
    for (int i=1;i<=N;i+=2) {
        for (int j= 0 ; j<(n-1)/2 ; j++) {
            printf(" ");
        }
        for (int j=0 ; j<i ; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i=N-2; i>=1 ; i-=2){
        for (int j = 0; j < (n - i) / 2; j++) {
            printf(" ");
        for (int j = 0; j < i; j++) {
            printf("*");
        printf("\n");
    }
        }
    }

    return 0;
}