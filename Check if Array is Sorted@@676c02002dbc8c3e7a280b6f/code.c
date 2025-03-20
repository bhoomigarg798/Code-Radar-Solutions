#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<=N;i++) {
        if (arr[i]>arr[i+1]) {
            printf("Not Sorted");
        }
        else {
            printf("sorted");
        }
    }
    return 0;
}