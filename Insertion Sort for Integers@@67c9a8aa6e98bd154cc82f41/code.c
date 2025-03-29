#include <stdio.h>
void insertionSort(int arr[],int n) {
    for (int i=0;i<n-1;i++) {
        min = i;
        for (int j=i+1;j<n;j++) {
            if (arr[min] >arr[j]) {
                min = j;
            }
        }
        if  (min !=i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
 void printArray(int arr[],int n) {
    for (int i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
 }