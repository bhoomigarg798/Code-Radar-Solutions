#include <stdio.h>
void isprime(int num) {
    if (num<2) {
        return 0;
    }
    for (int i=2;i*i<=num;i++) {
        if (num%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    int count =0;
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<N;i++) {
        if (isprime(arr[i])) {
            count +=1
        }
        continue;
    }
    printf("%d",count);
    return 0;
    
}