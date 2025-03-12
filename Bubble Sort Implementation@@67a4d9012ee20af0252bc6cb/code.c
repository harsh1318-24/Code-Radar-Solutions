#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    // Bubble Sort Algorithm
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    
    // Read the number of elements in the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the elements of the array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Call bubbleSort to sort the array
    bubbleSort(arr, n);
    
    // Call printArray to print the sorted array
    printArray(arr, n);
    
    return 0;
}

