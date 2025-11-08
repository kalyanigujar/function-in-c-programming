//  read a no and find 10 multiples of it . 

// read a no - 5  

// 5 ,10,15....50 
#include <stdio.h>

int main() {
    int num, i; // Variable to store user input and loop counter

    // Read a number from the user
    printf("Enter a number: "); // Prompt user for input
    scanf("%d", &num);       // Read the number

    // Print first 10 multiples
    printf("The first 10 multiples of %d are:\n", num);  // Display message 
    for(i = 1; i <= 10; i++) {   // Loop from 1 to 10
        printf("%d ", num * i);  // Calculate and print each multiple
    }

    return 0;  
}
