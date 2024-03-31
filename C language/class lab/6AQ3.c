#include <stdio.h>

int main() {
    char ch;

    // Input the character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is an uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    }
    // Check if the character is a lowercase letter
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    // The character is a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}

