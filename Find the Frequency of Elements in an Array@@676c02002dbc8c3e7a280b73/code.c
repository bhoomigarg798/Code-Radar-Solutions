#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int freq[101] = {0};
    for (int i=0;i<N;i++) {
        freq[arr[i]]++;
    }
    for (int i=0;i<N;i++) {
        if (freq[arr[i]]>0) {
            printf("%d %d\n",i,freq[arr[i]]);
            freq[arr[i]] = 0; // Avoid duplicate printing
        }
        else {
            continue;
        }
    }
    return 0;
}