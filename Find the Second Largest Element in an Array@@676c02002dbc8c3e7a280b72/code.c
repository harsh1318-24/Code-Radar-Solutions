// Your code here...
#include <stdio.h>


int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1;  
    }
    
    int firstLargest = arr[0], secondLargest = -1;


    for (int i = 1; i < n; i++) {
        if (arr[i] > firstLargest) {
            firstLargest = arr[i];
        }
    }


    for (int i = 0; i < n; i++) {
        if (arr[i] != firstLargest) {
            if (secondLargest == -1 || arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }
    }

    return secondLargest;
}

int main() {
    int n;
    

    scanf("%d", &n);

    int arr[n];
    


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int secondLargest = findSecondLargest(arr, n);
    
    if (secondLargest != -1) {
        printf("%d", secondLargest);
    } else {
        printf("-1");
    }
    
    return 0;
}
