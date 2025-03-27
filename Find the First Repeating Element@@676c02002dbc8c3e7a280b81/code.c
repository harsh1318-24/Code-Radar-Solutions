#include <stdio.h>
#include <limits.h> // For INT_MAX

int main() {
    int N;

    
    scanf("%d", &N);

    int arr[N];
    int hash[100000] = {0}; // Assuming array values are within a large range

    
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
        printf("-1");
    } else {
        printf("%d", arr[minIndex]);
    }

    return 0;
}

