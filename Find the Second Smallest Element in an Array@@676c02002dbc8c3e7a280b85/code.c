#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int min = -10;
    for (int i=0;i<N;i++) {
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;



}