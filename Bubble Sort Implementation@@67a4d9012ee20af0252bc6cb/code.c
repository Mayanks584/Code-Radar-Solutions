#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Optimized Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;  // Flag to check if swapping occurred
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { 
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;  // Mark swap as done
            }
        }
        if (!swapped) break;  // Stop early if already sorted
    }
}

int main() {
    int n;
    scanf("%d", &n);  // Read the number of elements
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print sorted array
    }
    printf("\n");  // New line for better output formatting

    return 0;
}
