// Your code here...
#include <stdio.h>

int main() {
    int N;

  
    scanf("%d", &N);

    // Loop to print the pyramid
    for (int i = 1; i <= N; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
