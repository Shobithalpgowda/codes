#Include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Error message for negative input
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        // Calculate factorial using a loop
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
