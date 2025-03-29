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
            if ((arr[j]<arr[j+1]) || (arr[j]>arr[j+1])) {
                printf("YES");
            }
        }
        printf("NO");
    }
    return 0;
}