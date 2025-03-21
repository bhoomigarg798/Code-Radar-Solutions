#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int count=0;
    int odd_count=0;
    for (int i=0;i<N;i++) {
        if (arr[i]%2==0) {
            count+=1;
        }
        else {
            odd_count+=1;
        }
    }
    printf("%d %d",count , odd_count );
    return 0;
}