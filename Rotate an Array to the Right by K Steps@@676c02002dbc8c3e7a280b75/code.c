#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);
    k = k % n;  // Handle cases where K > N

    // Perform K right rotations
    for (int i = 0; i < k; i++) {
        int last = arr[n - 1];

        // Shift elements to the right
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = last; // Move last element to the front (FIXED)
    }

    // Print the final rotated array (ONLY ONCE)
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }

    return 0;
}

