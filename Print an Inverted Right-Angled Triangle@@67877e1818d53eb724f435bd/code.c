// Your code here...
#include <stdio.h>

int main() {
    int N;
    
   
    scanf("%d", &N);
    
    // Loop to print the triangle
    for (int i = N; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
