#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int freq[100];
    for (int i=0;i<N;i++) {
        freq[arr[i]]++;
    }
    int max = freq[arr[0]];
    for (int i=0;i<N;i++) {
        if (max<freq[arr[i]]) {
            max = *freq[arr[i]];
        }
    }
    printf("%d",max);
    return 0;
}