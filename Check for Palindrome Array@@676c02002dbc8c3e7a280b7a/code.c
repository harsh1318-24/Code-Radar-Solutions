// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the size of the array
    int arr[N];
    
    // Read the elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int isPalindrome = 1; // Assume the array is a palindrome
    for (int i = 0; i < N / 2; i++) {
        if (arr[i] != arr[N - i - 1]) {
            isPalindrome = 0; // Found a mismatch
            break;
        }
    }

    if (isPalindrome) {
        printf("YES\n"); // The array is a palindrome
    } else {
        printf("NO\n"); // The array is not a palindrome
    }

    return 0;
}
