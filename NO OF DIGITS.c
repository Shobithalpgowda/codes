#include <stdio.h>

int main() {

int binaryNumber;
printf("Enter a binary number: ");
scanf("%d", &binaryNumber);

int decimalEquivalent = 0;
int base = 1;

// Defining a while loop for binary conversion
while (binaryNumber > 0) {
int binaryDigit = binaryNumber % 10; // Extract rightmost digit
decimalEquivalent += binaryDigit * base; // Add contribution to decimalEquivalent
base *= 2; // Update base for the next position
binaryNumber /= 10; // Remove rightmost digit
}

printf("Decimal equivalent: %d\n", decimalEquivalent);

return 0;
}
