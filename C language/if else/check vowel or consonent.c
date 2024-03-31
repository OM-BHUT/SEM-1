#include <stdio.h>
#include <ctype.h>

void main() {
    char ch;

    // Read character input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the input is an alphabet character
    if (isalpha(ch)) {
        // Convert the character to lowercase for easier comparison
        ch = tolower(ch);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input: Not an alphabet character.\n");
    }

 
}

