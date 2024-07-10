#include <stdio.h>

// Function to calculate sum of elements in array using divide and conquer
int arraySumDC(int arr[], int l, int r) {
    if (l == r) {
        return arr[l]; // Base case: when l == r, return the single element
    } else {
        int m = l + (r - l) / 2; // Divide the array into two halves
        // Recursively calculate sum of two halves and combine them
        return arraySumDC(arr, l, m) + arraySumDC(arr, m + 1, r);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = arraySumDC(arr, 0, size - 1);

    printf("Sum of the array elements using divide and conquer: %d\n", sum);

    return 0;
}
