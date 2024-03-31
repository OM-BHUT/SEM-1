#include <stdio.h>

int main() {  // Use 'int' as the return type for main.
    int n;
    printf("Enter value: ");  // Added quotes around the message.
    scanf("%d", &n);  // Added '&' before 'n' to correctly scan the value.
    
    for (int i = 4; i <= 3 * n + 1; i = i + 3) {
        printf("%d ", i);  // Added space to separate the numbers.
    }

    return 0;  // Return 0 to indicate successful execution.
}

