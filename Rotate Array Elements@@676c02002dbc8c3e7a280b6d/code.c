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
        printf("%d \n", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, k;

    
    scanf("%d", &n);

    int arr[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    scanf("%d", &k);

  
    rotateArray(arr, n, k);

    
    printArray(arr, n);

    return 0;
}
