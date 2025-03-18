// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers (for qsort)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find the length of the longest consecutive sequence
int longestConsecutiveSequence(int arr[], int n) {
    if (n == 0) return 0;

    qsort(arr, n, sizeof(int), compare);

    int maxLength = 1, currentLength = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currentLength++;
        } else if (arr[i] != arr[i - 1]) {
            currentLength = 1;
        }
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
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

    // Finding and printing the length of the longest consecutive sequence
    int result = longestConsecutiveSequence(arr, n);
    printf("%d\n", result);

    return 0;
}
