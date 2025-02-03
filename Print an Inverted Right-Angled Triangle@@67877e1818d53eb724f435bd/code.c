#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int i=N ; 0<i<=N ; i=i-1) {
        printf("*");
    }
    return 0; 
}