#include <stdio.h>
#include <limits.h> // For INT_MAX

int main() {
    int N;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    int hash[100000] = {0}; // Assuming array values are within a large range

    // Input the array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int minIndex = INT_MAX; // Initialize to a very high value

    // Traverse the array from right to left
    for (int i = N - 1; i >= 0; i--) {
        if (hash[arr[i]]) {
            minIndex = i; // Update the index if a repeat is found
        }
        hash[arr[i]]++; // Mark the element as visited
    }

    if (minIndex == INT_MAX) {
        printf("No repeating elements found.\n");
    } else {
        printf("The first repeating element is: %d (at index %d)\n", arr[minIndex], minIndex);
    }

    return 0;
}

