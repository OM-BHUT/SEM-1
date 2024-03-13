#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *numbers, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    numbers = (int *)malloc(n * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("Sum: %d\n", sum);

    // Deallocate memory
    free(numbers);

    return 0;
}
