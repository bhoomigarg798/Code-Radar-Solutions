#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int freq[100] = {0};
    int max = freq[arr[0]];
    for (int i=0;i<N;i++) {
        if (freq[i]>max) {
            max = freq[i];
        }
    }
    printf("%d",max);
    return 0;

}