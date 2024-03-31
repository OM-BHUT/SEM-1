#include <stdio.h>

int main() {
    // Declare variables
    float side1, side2, side3;

    // Input sides of the triangle
    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check for a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Check for equilateral triangle
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is an Equilateral triangle.\n");
        }
        // Check for isosceles triangle
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is an Isosceles triangle.\n");
        }
        // Check for scalene triangle
        else {
            printf("The triangle is a Scalene triangle.\n");
        }

        // Check for a right-angled triangle
        if (side1 * side1 + side2 * side2 == side3 * side3 ||
            side1 * side1 + side3 * side3 == side2 * side2 ||
            side2 * side2 + side3 * side3 == side1 * side1) {
            printf("The triangle is also a Right-angled triangle.\n");
        }
    } else {
        printf("Invalid triangle with given side lengths.\n");
    }

    return 0;
}

