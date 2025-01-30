#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    while (a>0) {
        if (a>1) {
            printf("Prime");
        }
    }
    printf("Not Prime");
    return 0;
}