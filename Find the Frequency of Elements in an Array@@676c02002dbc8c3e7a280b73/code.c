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
    for (int i=0;i<100;i++) {
        if (freq[i]>0) {
            printf("%d %d\n",i,freq[i]);
        }
        else {
            continue;
        }
    }
    return 0;
}