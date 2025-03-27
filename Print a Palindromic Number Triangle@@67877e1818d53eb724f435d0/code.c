#include <stdio.h>
int main() {
    int N;
    for (int i=1;i<=N;i++) {
        for (int j=i;j<=N;j++) {
            printf("%d",j);
        }
        for (int k=i;k<=i;k++) {
            printf("%d",k);
        }
    }
    printf("\n");
    return 0;
}