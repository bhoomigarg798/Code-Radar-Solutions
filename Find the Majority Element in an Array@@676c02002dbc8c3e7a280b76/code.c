#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int freq[1000] = {0};
    for (int i=0;i<N;i++) {
        freq[arr[i]]++;
    }
    int mostfreq = 0;
    int majorityelement = -1;
    for (int i=0;i<N;i++) {
        if (freq[arr[i]]>mostfreq) {
            mostfreq = freq[arr[i]];
            majorityelement = arr[i];
        }
    }
    if (mostfreq>=N/2) {
        printf("%d",majorityelement);
    }
    else {
        printf("-1");
    }
}