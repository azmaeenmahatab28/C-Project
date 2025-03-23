#include <stdio.h>  // Include standard input-output library

// Main function - Entry point of the C program
int main() {

    // Declare variables
    int num;

    // Print a message
    printf("Enter a number: ");
    
    // Take input from the user
    scanf("%d", &num);
    
    // Print the entered number
    printf("You entered: %d\n", num);

    // Return 0 to indicate successful execution
    return 0;
}
