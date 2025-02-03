#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int i=N ; i>=N ; i=i-1) {
        for (int j=i ; j<=i ; j++) {
            printf("*");
        }
        printf("*");
    }
    return 0; 
}