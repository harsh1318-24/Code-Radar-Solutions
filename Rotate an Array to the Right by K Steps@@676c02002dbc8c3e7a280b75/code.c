// Your code here...
#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    int result[n];
    
    k = k % n;

    for (int i = 0; i < k; i++) {
        result[i] = arr[n - k + i];
    }
    
    for (int i = 0; i < n - k; i++) {
        result[k + i] = arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] = result[i];
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
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

    // Rotate the array
    rotateArray(arr, n, k);
    

    printArray(arr, n);
    
    return 0;
}

