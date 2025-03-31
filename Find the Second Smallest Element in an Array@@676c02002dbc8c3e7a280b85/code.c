#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int smallest = arr[0];
    int secondsmallest = -1;
    for (int i=1;i<N;i++) {
        if (arr[i]<smallest) {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i]>smallest && (secondsmallest == -1 || arr[i]< secondsmallest)) {
            secondsmallest = arr[i];
        }
    }
    if (secondsmallest!=-1) {
        printf("%d",secondsmallest);
    }
    else {
        printf("-1");
    }
    return 0;

}