#include <stdio.h>
#include <time.h>  // Include the time.h library for time functions

// Function to compute a^n using exponentiation by squaring
long long power(long long a, int n) {
    long long result = 1;
    while (n > 0) {
        if (n % 2 == 1) {  // If n is odd
            result *= a;
        }
        a *= a;  // Square the base
        n /= 2;  // Reduce the exponent by half
    }
    return result;
}

int main() {
    long long a = 2;  // Base
    int n = 30;       // Exponent

    // Record the start time
    clock_t start = clock();

    // Compute a^n
    long long result = power(a, n);

    // Record the end time
    clock_t end = clock();

    // Calculate the time taken for the computation
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    // Print the result of a^n
    printf("%lld^%d = %lld\n", a, n, result);

    // Print the time taken for the computation
    printf("Time taken to compute %lld^%d: %.6f seconds\n", a, n, time_taken);

    return 0;
}
