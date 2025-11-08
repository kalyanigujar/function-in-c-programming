//. Read a no to find their digital sum  

// i.p- 1234 

// o.p - 10 
#include <stdio.h>

int main() { 
    int num, sum = 0;  // Variable to store user input and sum of digits

    printf("Enter a number: "); // Prompt user for input
    scanf("%d", &num);          // Read the number

    while(num > 0) {         // Loop until all digits are processed
        sum += num % 10;  // Add last digit to sum  
        num /= 10;         // Remove last digit
    }

    printf("Digital sum = %d\n", sum);  // Display the result
    return 0;  // End of program
}

