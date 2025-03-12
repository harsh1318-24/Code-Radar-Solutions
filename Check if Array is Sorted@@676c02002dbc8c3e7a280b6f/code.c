// Your code here...
#include <stdio.h>

// Function to check if the array is sorted in non-decreasing order
int isSorted(int arr[], int n) {
    // Traverse the array and check if each element is <= the next one
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;  // Array is not sorted
        }
    }
    return 1;  // Array is sorted
}

int main() {
    int n;


    scanf("%d", &n);

    int arr[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

 
    if (isSorted(arr, n)) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }

    return 0;
}
