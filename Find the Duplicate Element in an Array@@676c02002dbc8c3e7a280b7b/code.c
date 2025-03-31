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
    int result = freq[arr[0]];
    for (int i=1;i<N;i++) {
        if (freq[arr[i]] > result) {
            result = freq[arr[i]];
        }
    }
    printf("%d",result);
    return 0;
}