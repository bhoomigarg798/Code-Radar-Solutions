#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k = k%n;
    for (int i=0;i<k;i++) {
        int last = arr[n-1];
        for (int j=n-1;j>0;j--) {
        arr[j] = arr[j-1];
    }
    for (int i=0;i<n;i++) {
        printf("%d ",i);
    }
  }
  return 0;
}
