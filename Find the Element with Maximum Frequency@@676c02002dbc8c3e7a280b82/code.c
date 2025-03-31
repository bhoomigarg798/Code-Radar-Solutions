#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&N);
    }
    int freq = {0};
    for (int i=0;i<N;i++) {
        freq[arr[i]]++;
    }
    int maxfreq = 0;
    int result = 0;
    for (int i=0;i<N;i++) {
        if (freq[arr[i]] > maxfreq) {
            maxfreq = freq[arr[i]];
            result = arr[i];
        }
    }
    printf("%d",result);
    return 0;
}