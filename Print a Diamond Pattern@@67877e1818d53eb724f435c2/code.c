#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N % 2 == 0) {
        return 1; // Exit if the input is even
    }

    // Upper half
    for (int i = 1; i <= N; i += 2) {
        for (int j = 0; j < (N - i) / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = N - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (N - i) / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
