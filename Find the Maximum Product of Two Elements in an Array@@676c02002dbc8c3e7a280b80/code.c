// Your code here...
#include <stdio.h>

int main() {
    int N;

    
    scanf("%d", &N);

    // Ensure the array has at least 2 elements
    if (N < 2) {
      
        return 1;
    }

    int arr[N];

    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max product variables
    int max1 = -1e9, max2 = -1e9;
    int min1 = 1e9, min2 = 1e9;

    // Find the two largest and two smallest elements
    for (int i = 0; i < N; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    // Calculate maximum product
    int maxProduct = max1 * max2 > min1 * min2 ? max1 * max2 : min1 * min2;

    

    return 0;
}
