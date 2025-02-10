#include <stdio.h>
int isPrime(num);
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
int isPrime(num) {
    for(int i=2;i*i<=num;i++){
        if (num%i!=0) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    return 0;
}
}