#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    int count =0;
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<N;i++) {
        for (int j=2;j*j<=i;j++) {
            if (i%j!=0) {
                count+=1;
            }
            else {
                continue;
            }
        }
    }
    printf("%d",count);
    return 0;

}