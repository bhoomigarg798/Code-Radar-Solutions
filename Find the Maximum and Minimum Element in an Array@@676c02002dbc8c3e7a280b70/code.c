#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[N]);
    }
    int min =arr[0];
    int max=arr[0];
    for (int i=0;i<N-1;i++) {
        if (arr[i]<min) {
            min = arr[i];
        }
        if (arr[i]>max) {
            max = arr[i];
        }
    }
    printf("%d %d",min , max);
    return 0;
}