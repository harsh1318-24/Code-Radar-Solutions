// Your code here...
#include <stdio.h>

int main() {
    int a, b, c;

 
    scanf("%d", &a);
    
    
    scanf("%d", &b);
    
    
    scanf("%d", &c);

    // Check if the sides satisfy the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid");
    } else {
        printf("Invalid");
    }

    return 0;
}
