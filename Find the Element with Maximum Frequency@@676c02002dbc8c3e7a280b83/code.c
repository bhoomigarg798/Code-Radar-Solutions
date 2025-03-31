#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[100] = {0};

    // Calculate frequencies of each element
    for (int i = 0; i < N; i++) {
        freq[arr[i]]++;
    }

    // Find the element with the highest frequency
    int maxFreq = 0;
    int result = -1; // To store the element with highest frequency
    for (int i = 0; i < N; i++) {
        if (freq[arr[i]] > maxFreq || (freq[arr[i]] == maxFreq && arr[i] < result)) {
            maxFreq = freq[arr[i]];
            result = arr[i];
        }
    }

    printf("%d\n", result);
    return 0;
}