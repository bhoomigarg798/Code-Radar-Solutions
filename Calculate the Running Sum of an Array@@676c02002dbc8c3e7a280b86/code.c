#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    printf("%d ",arr[0]);
    for (int i=0;i<N;i++) {
        sum = arr[i] + arr[i+1];
        printf("%d ",sum);
    }
    return 0;
}