// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Ask the user for a number
    
    scanf("%d", &num);

    // Check if the number is divisible by both 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("Divisible");
    } else {
        printf("Not Divisible");
    }

    return 0;
}
