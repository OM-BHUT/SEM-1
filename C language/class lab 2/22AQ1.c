#include <stdio.h>
#include <stdlib.h>

int main() {
    int *intPtr;
    char *charPtr;
    float *floatPtr;

    // Allocate memory
    intPtr = (int *)malloc(sizeof(int));
    charPtr = (char *)malloc(sizeof(char));
    floatPtr = (float *)malloc(sizeof(float));

    // Check if memory allocation is successful
    if (intPtr == NULL || charPtr == NULL || floatPtr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values
    *intPtr = 10;
    *charPtr = 'A';
    *floatPtr = 3.14;

    // Print values
    printf("Int Value: %d\n", *intPtr);
    printf("Char Value: %c\n", *charPtr);
    printf("Float Value: %f\n", *floatPtr);

    // Deallocate memory
    free(intPtr);
    free(charPtr);
    free(floatPtr);

    return 0;
}
