#include <stdio.h>

/*
    Function to swap two integers using pointers
    through accessing the values in their adresses.
*/
void swap(int *a, int *b) {
    // Temporary variable to hold the value of *a
    int temp = *a;
    // Swap the values
    *a = *b;
    *b = temp;
}

// Function to perform selection sort on the array
void selectionSort(int arr[], int len) {
    // Loop through each element of the array (except the last one)
    for (int i = 0; i < len - 1; i++) {
        // Assume the minimum value is at the current index i
        int min = i;

        // Find the smallest element in the unsorted part of the array
        for (int j = i + 1; j < len; j++) {
            // If arr[j] is smaller than arr[min], update min to j
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // Swap the found minimum element with the element at index i
        swap(&arr[min], &arr[i]);
    }
}

// Function to print the array 
void printArr(int arr[], int len) {
    // Print the array, first to last index
    for (int i = 0; i < len - 1; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main () {
    // Array Initialization
    int arr[] = {50, 30, 10, 20, 40};

    // Calculate the length of the array
    int len = sizeof(arr) / sizeof(arr[0]);
    
    printf("Selection Sort: ");
    selectionSort(arr, len); 

    printArr(arr, len);

    return 0;
}
