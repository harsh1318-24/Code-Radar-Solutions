// Your code here...
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // Numbers <= 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Found a divisor
    }
    return 1; // Number is prime
}

// Function to count prime numbers in the array
int countPrimes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    
    // Reading the size of the array
    scanf("%d", &n);
    int arr[n];
    
    // Reading array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Counting prime numbers and displaying the result
    int result = countPrimes(arr, n);
    printf("%d\n", result);

    return 0;
}
