#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    if (arr[0]==arr[N-1]) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}