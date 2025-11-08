// Read a no and radix of a no to find power  

// base -2 

// radix -5	 

// power(2,5)  

 

// power - 32 
#include <stdio.h>
#include <math.h>

int main() {
    int base, exponent, result;  // Variables to store base, exponent, and result

    printf("Enter base: ");      // Prompt user for base
    scanf("%d", &base);           // Read base

    printf("Enter exponent: ");   // Prompt user for exponent
    scanf("%d", &exponent);       // Read exponent

    result = pow(base, exponent);  // calculate power
    printf("%d^%d = %d\n", base, exponent, result);  // Display the result
 
    return 0;
} 

// Explanation of power calculation:
// Step by step:

// 2 × 2 = 4

// 4 × 2 = 8

// 8 × 2 = 16

// 16 × 2 = 32

// ✅ So, 2^5 = 32

// In short: Multiply the base (2) 5 times, the result is 32.

 