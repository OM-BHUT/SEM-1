#include <stdio.h>

void main() {
    float feet, inches;

    // Input the value in feet
    printf("Enter the value in feet: ");
    scanf("%f", &feet);

    // Check if the value is non-negative
    if (feet >= 0) {
        // Convert feet to inches (1 foot = 12 inches)
        inches = feet * 12;

        // Print the result
        printf("%.2f feet is equal to %.2f inches\n", feet, inches);
    } else {
        printf("Invalid input. Please enter a non-negative value.\n");
    }

    
}

