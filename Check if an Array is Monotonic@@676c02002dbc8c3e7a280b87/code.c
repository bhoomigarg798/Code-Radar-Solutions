#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int increasing = 0;
    int decreasing = 0;
    for (int i=0;i<N-1;i++) {
        if (arr[i]<=arr[i+1]) {
            decreasing = 0;
        }
        else if(arr[i]>=arr[i+1]) {
            increasing = 0;
        }
    }
    if (increasing||decreasing) {
        printf("YES");
    }
    else {
        printf("N0");
    }
    return 0;
}