#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int freq[100] = {0};
    for (int i=0;i<N;i++) {
        freq[arr[i]]++;
    }
    int result = 0;
    int mostfreq = 0;
    for (int i=0;i<N;i++) {
        if (freq[arr[i]] > result) {
            mostfreq = arr[i];
        }
    }
    printf("%d",mostfreq);
    return 0;
}