#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++) {
        for (int j=i;j<=i+1;j++) {
            printf("%d",j);
        }
        for (int k=i;k<=i;k++) {
            printf("%d",k);
        }
    }
    printf("\n");
    return 0;
}