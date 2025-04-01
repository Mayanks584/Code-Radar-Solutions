#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], n = 0;  // Array with max size 100, n counts elements

    // Read input until the end
    while (scanf("%d", &arr[n]) == 1) {  
        n++;  // Increase count of elements
    }

    bubbleSort(arr, n);  // Sort the array

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print sorted array
    }

    return 0;
}
