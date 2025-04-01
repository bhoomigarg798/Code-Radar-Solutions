#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
        k = k % n; // Handle cases where K > N

    for (int i = 0; i < k; i++) {
        int last = arr[n - 1]; // Store last element

        // Shift all elements right
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = last; // Move last element to first position
    }
    for (int i=0;i<n;i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}
