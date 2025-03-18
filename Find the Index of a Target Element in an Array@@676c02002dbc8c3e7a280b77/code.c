// Your code here...
#include <stdio.h>

int findIndex(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the first occurrence
        }
    }
    return -1; // If the target is not found
}

int main() {
    int n, target;
    
    // Reading the size of the array
    scanf("%d", &n);
    int arr[n];
    
    // Reading the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Reading the target element
    scanf("%d", &target);
    
    // Finding and printing the index of the target
    int result = findIndex(arr, n, target);
    printf("%d\n", result);
    
    return 0;
}
