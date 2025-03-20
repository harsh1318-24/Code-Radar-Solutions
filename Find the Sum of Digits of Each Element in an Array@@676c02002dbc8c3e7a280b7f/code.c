// Your code here...
#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
   
    scanf("%d", &N);

    int array[N], result[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);

        result[i] = sumOfDigits(array[i]);
    }

   
    for (int i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
