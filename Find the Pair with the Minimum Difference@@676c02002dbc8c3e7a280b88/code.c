#include <stdio.h>
int main() {
    int N;
    scanf("%d",N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int max = 0;
    int min = 0;
    for (int i=0;i<N;i++) {
        if (arr[i]>max) {
            max = arr[i];
        }
        else if (arr[i]<min) {
            min = arr[i];
        }
    }
    printf("%d",max-min);
    return 0;
}