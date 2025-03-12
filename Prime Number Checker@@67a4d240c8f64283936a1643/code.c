#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // num is divisible by i, so it's not prime
        }
    }
    return 1;  // num is prime
}

int main() {
    int t;
    scanf("%d", &t);  // Input the number of test cases
    while (t--) {
        int num;
        scanf("%d", &num);  // Input the number to check if it's prime
        printf("%d \n", isPrime(num));  // Print 1 if prime, else 0
    }
    return 0;
}
