#include <stdio.h>
void selectionSort(int arr[],int n) {
    for (int i=0;i<n-1;i++) {
        min = arr[i];
        for (int j=i+1;j<n;j++) {
            if (min >arr[j]) {
                min = j;
            }
        }
        int temp = min;
        min = arr[j];
        arr[j] = min;
    }
}
 void printArray(int arr[],int n) {
    for (int i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
 }