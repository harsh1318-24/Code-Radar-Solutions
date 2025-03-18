// Your code here...
#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int index = 0; // Position for the next non-zero element

    // Traverse the array and move non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill the rest of the array with zeros
    while (index < n) {
        arr[index++] = 0;
    }
}

int main() {
    int n;
    
    // Reading the size of the array
    scanf("%d", &n);
    int arr[n];
    
    // Reading the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Move zeros to the end
    moveZerosToEnd(arr, n);
    
    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
