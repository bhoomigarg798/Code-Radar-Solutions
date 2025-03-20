#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    int issorted=1;
    for (int i=0;i<=N;i++) {
        if (arr[i]>arr[i+1]) {
            issorted=0;
            break;
        }
    if (issorted) {
        printf("Sorted");
    }
    else {
        printf("Not Sorted");
    }
    }
    return 0;
}