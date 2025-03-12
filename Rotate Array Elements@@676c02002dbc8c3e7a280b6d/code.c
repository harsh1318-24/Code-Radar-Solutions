// Your code here...
#include <stdio.h>

// Function to rotate the array by k positions
void rotateArray(int arr[], int n, int k) {
    // To handle cases when k is greater than n
    k = k % n;  // If k is greater than n, only k % n rotations are needed

    // Temporary array to store rotated result
    int temp[k];
    
    // Step 1: Store the last k elements in the temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Step 2: Shift the remaining elements of the array to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Step 3: Copy the elements from the temporary array to the front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, k;

    // Input the size of the array and the number of positions to rotate
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of positions to rotate
    printf("Enter the number of positions to rotate by: ");
    scanf("%d", &k);

    // Call the rotate function
    rotateArray(arr, n, k);

    // Output the rotated array
    printf("Array after rotation: ");
    printArray(arr, n);

    return 0;
}
