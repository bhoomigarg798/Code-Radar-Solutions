#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {  // Loop for rows
        for (int j = 0; j < n; j++) {  // Loop for columns
            // Print '*' at the borders, otherwise print space
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
