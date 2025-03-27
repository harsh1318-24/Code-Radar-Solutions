#include <stdio.h>

// Function to calculate the sum of digits
#include <stdlib.h> // Required for abs()

int sumOfDigits(int number) {
    int sum = 0;
    number = abs(number); // Convert number to positive
    while (number != 0) {
        sum += number % 10; // Add the last digit to sum
        number /= 10;       // Remove the last digit
    }
    return sum;
}


int main() {
    int N;

    
    scanf("%d", &N);

    int arr[N], result[N];

   
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of digits for each element
    for (int i = 0; i < N; i++) {
        result[i] = sumOfDigits(arr[i]);
    }

    
    for (int i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

