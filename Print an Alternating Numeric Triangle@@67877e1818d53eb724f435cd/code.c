#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int i=0;i<=N;i++) {
        for (int j=i;j<=i;j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}