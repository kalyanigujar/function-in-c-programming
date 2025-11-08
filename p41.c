// Print all even nos in the range 0- 100 and print summation 

// 2 

// 4 

// -- 

// 2550 
#include <stdio.h>

int main() {
    int sum = 0;

    for(int i = 2; i <= 100; i += 2) {  // start from 2, step by 2
        printf("%d\n", i);               // print even number
        sum += i;                        // add to sum
    }

    printf("Sum of even numbers = %d\n", sum);

    return 0;
}
// Explanation of summation:
// Step by step:
// 2 + 4 = 6
// 6 + 6 = 12
// 12 + 8 = 20
// 20 + 10 = 30
// ...
// 2520 + 100 = 2620
// ✅ So, the sum of all even numbers from 2 to 100 is 2550.
// In short: Add all even numbers from 2 to 100, the result is 2550.  //This can also be calculated using the arithmetic series formula:
// Formula: n/2 * (first number + last number) = 50/2 * (2 + 100) = 25 * 102 = 2550
// where n is the count of even numbers from 1 to 100 (which is 50).


 