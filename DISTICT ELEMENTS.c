#include <stdio.h>

// Function to print distinct elements in an array
void printDistinct(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (i == j) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Distinct elements in the array: ");
    printDistinct(arr, n);

    return 0;
}
