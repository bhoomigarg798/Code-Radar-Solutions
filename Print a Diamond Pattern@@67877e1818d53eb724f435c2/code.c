#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N % 2 == 0) {
        return 1; // Exit if input is even
    }

    // Upper half
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < N - i; j++) {
            printf(" "); // Print leading spaces
        }
        for (int j = 0; j < (2 * i) - 1; j++) {
            printf("*"); // Print stars
        }
        printf("\n");
    }

    // Lower half
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 0; j < N - i; j++) {
            printf(" "); // Print leading spaces
        }
        for (int j = 0; j < (2 * i) - 1; j++) {
            printf("*"); // Print stars
        }
        printf("\n");
    }

    return 0;
}


