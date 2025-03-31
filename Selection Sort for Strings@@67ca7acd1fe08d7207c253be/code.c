void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        char temp[100];

        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[min], arr[j]) > 0) {  // Correct comparison
                min = j;
            }
        }

        // Swap strings if a smaller element is found
        if (min != i) {
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min]);
            strcpy(arr[min], temp);
        }
    }
}

// Function to print an array of strings
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}