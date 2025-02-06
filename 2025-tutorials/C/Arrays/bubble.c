#include <stdio.h>

/*
    Function to swap two integers using pointers
    through accessing the values in their adresses.
*/
void swap(int *a, int *b) {
    // Temporary variable to store the value of *a
    int temp = *a;
    
    // Swap the values of *a and *b
    *a = *b;
    *b = temp;
}

// Function to perform Bubble Sort on the array
void bubbleSort(int arr[], int len) {
    // Outer loop: Iterates through each element of the array
    for (int i = 0; i < len - 1; i++) {
        // Inner loop: Compares adjacent elements and swaps them if necessary
        for (int j = 0; j < len - i - 1; j++) {
            // If the current element is greater than the next, swap them
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to print the array
void printArr(int arr[], int len) {
    // Loop through the array and print each element
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main () {
     // Array Initialization
    int arr[] = {50, 30, 10, 20, 40};

    // Calculate the length of the array
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Bubble Sort: ");
    bubbleSort(arr, len);

    // Print the sorted array
    printArr(arr, len);

    return 0;
}
