#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int i=0;i<N;i++) {
        for (int j=i;i<N-1;j++) {
            printf("*");
        }
    }
    printf("\n");
    return 0;
}