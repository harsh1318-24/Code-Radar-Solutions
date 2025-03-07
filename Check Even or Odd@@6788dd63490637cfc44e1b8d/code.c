// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Ask the user for a number
    
    scanf("%d", &num);

    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
