#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&N);
    }
    int T;
    scanf("%d",&T);
    for (int i=0;i<N;i++) {
        if (arr[i]==T) {
            printf("%d",i);
        }
    }
    return 0;
}