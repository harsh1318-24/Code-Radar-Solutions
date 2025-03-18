// Your code here...
#include <stdio.h>

int smallestMissingPositive(int arr[], int n) {
    // Mark non-positive numbers and numbers greater than n as out of range
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0 || arr[i] > n) {
            arr[i] = n + 1;
        }
    }

    // Use the indices of the array to mark presence of numbers
    for (int i = 0; i < n; i++) {
        int val = arr[i];
        if (val < 0) {
            val = -val; // Convert to positive manually
        }
        if (val <= n && arr[val - 1] > 0) {
            arr[val - 1] = -arr[val - 1];
        }
    }

    // Find the first missing positive number
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            return i + 1;
        }
    }

    return n + 1;
}

int main() {
    int n;
    
    // Reading size of the array
    scanf("%d", &n);
    int arr[n];
    
    // Reading the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Finding and printing the smallest missing positive integer
    int result = smallestMissingPositive(arr, n);
    printf("%d\n", result);

    return 0;
}

