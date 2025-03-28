#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[N]);
    }
    for (int i=0;i<N-1;i++) {
        for (int j=0;j<N-i-1;j++) {
            if (arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i=0;i<N;i++) {
        printf("%d",arr[i-2]);
    }
    return 0;

}