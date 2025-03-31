#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<N;i++) {
        for (int j=0;j<N-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i=0;i<N;i++) {
        if (i<0) {
            printf("%d",arr[0]*arr[1]);
        }
        else {
            continue;
        }
    }
    printf("%d",arr[N-1]*arr[N-2]);
    return 0;
}