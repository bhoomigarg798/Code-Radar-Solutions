#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int increasing = 0;
    int decreasing = 0;
    for (int i=0;i<N;i++) {
        if (arr[i]<=arr[i+1]) {
            increasing = 1;
        }
        else if(arr[i]>=arr[i+1]) {
            decreasing = 1;
        }
    }
    if (increasing) {
        printf("YES");
    }
    else if(decreasing) {
        printf("NO");
    }
    return 0;
}