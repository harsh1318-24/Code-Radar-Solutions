// Your code here...
#include <stdio.h>

int main() {
    char ch;

    
    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase");
    } else {
        printf("Not an alphabet");
    }

    return 0;
}
