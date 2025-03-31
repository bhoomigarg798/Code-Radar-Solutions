#include <stdio.h>
#include <string.h>
void bubbleSort(char arr[][100],int n) {
    for (int i=0;i<n-1;i++) {
        for (int j = i+1;j<n-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(char arr[][100],int n) {
    for (int i=0;i<n;i++) {
        printf("%s",char[i]);
    }
}