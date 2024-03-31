#include <stdio.h>

int main() {
    // Declare a character array to store the string
    char str[100];

    // Input a string without using fgets() and getchar()
    printf("Enter a string: ");
    scanf("%s", str);

    // Print the entered string
    printf("Entered string: %s\n", str);

    // Calculate and print the length of the string without using strlen()
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
