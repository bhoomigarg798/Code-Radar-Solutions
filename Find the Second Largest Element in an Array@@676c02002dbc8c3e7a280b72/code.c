#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<N-1;i++) {
        for (int j=0;j<N-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int secondLargest = -1;
    for (int i = N - 2; i >= 0; i--) {  // Start from second last element
        if (arr[i] < arr[N - 1]) {  // Find first smaller unique number
            secondLargest = arr[i];
            break;
        }
    }

    printf("%d\n", secondLargest);
    return 0;


}