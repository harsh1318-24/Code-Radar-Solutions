// Your code here...
#include <stdio.h>

void findFrequency(int arr[], int n) {
    int frequency[n];
    

    for (int i = 0; i < n; i++) {
        frequency[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                frequency[j] = 0;
            }
        }
        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }


    for (int i = 0; i < n; i++) {
        if (frequency[i] != 0) {
            printf("%d %d\n", arr[i], frequency[i]);
        }
    }
}

int main() {
    int n;


    scanf("%d", &n);

    int arr[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    findFrequency(arr, n);

    return 0;
}
