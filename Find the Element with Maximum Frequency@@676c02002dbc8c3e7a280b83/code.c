#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int freq[100] = {0};
    for (int i=0;i<N;i++) {
        freq[arr[i]]++;
    }
     // Find the element with the highest frequency
    int maxFreq = 0;
    int result = -1;  // Variable to store the result (element with highest frequency)

    for (int i = 0; i < 101; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        } else if (freq[i] == maxFreq && i < result) {
            result = i;  // If frequencies are equal, choose the smaller element
        }
    }

    printf("%d\n", result);  // Output the element with the highest frequency
    return 0;
}

