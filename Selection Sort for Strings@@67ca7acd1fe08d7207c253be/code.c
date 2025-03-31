#include <stdio.h>
#include <string.h>
void selectionSort(char arr[][100] ,int n) {
    for (int i=0;i<n-1;i++) {
        char min = i;
        for (int j=i+1;j<n;j++) {
            if (arr[min],arr[j]){
                min = j;
            }
        }
        if (min != i) {
             strcpy(char temp , arr[i]);
            strcpy(arr[i] , arr[min]);
            strcpy(arr[min] , temp);
        }
    }
}
void printArray(char arr[][100], int n) {
    for (int i=0;i<n;i++) {
        printf("%s\n",arr[i]);
    }
}