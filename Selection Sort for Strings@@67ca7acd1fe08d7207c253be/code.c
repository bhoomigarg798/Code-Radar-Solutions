#include <stdio.h>
void selectionSort(char *arr[],int n) {
    for (int i=0;i<n-1;i++) {
        int min = i;
        for (int j=i+1;j<n;j++) {
            if (strcmp(arr[min],arr[j])>0) {
                min = j;
            }
        }
        if (min != i) {
            char *temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
void printArray(char *arr[], int n) {
    for (int i=0;i<n;i++) {
        printf("%s\n",arr[i]);
    }
}