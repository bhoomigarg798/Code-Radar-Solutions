#include <stdio.h>
int main() {
    int N;
    int num = 1;
    scanf("%d",&N);
    for (int i=1;i<=N;i++) {
        for (int j=i;j<=N;j++) {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}