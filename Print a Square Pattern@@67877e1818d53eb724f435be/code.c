// Your code here...
#include <stdio.h>

int main() {
    int N;

    
    scanf("%d", &N);

    // Print the square pattern
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
