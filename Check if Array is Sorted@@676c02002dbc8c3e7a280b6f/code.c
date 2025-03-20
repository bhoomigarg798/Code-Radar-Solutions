#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    int issorted=1;
    for (int i=0;i<=N;i++) {
        if (arr[i]>arr[i+1]) {
            printf("Not Sorted");
            break;
        }
        else {
            printf("sorted");
        }
    return 0;
}