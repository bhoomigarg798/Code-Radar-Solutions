#include <stdio.h>
void selectionSort(int arr[],int n){
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-1-i;j++) {
            if (arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void kthSmallest(int arr[],int n,int K){
    for (int i=0;i<n;i++) {
        printf("%d",arr[n-K]);
        }

    }
    
