// Read any name and print it for 20 times on the screen  

// read - Ankita 

// 1 Ankita  

// 2 Ankita 

// - 

// - 

// - 

// 20 Ankita
#include <stdio.h>

int main() {
    char name[50];  // Array to store the name

    printf("Enter a name: ");  // Prompt user for input
    scanf("%s", name);       // Read the name

    for(int i = 1; i <= 20; i++) {   // Loop from 1 to 20
        printf("%d %s\n", i, name);   // Print the count and the name
    }

    return 0;
}
