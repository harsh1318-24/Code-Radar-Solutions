// Your code here...
#include <stdio.h>

// Function to find the maximum and minimum elements
void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int n;

    // Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;

    // Find the maximum and minimum elements
    findMaxMin(arr, n, &max, &min);

    // Print the result
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}

