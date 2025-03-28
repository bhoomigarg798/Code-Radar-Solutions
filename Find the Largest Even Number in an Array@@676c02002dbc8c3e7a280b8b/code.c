#include <stdio.h>
int even(int num) {
    if (num%2==0) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int max = arr[j]
    for (int i=0;i<N;i++) {
        for (int j=0;j<N-1;j++) {
            if (even[j]>even[j+1]) {
                max = arr[j];
            }
        }
    }
    printf("%d",max);
    return 0;
}