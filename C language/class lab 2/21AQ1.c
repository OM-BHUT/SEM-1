#include <stdio.h>

int main() {
    FILE *fp;  // Use FILE* for file pointers
    char ch; ,

    // Open the file for reading
    fp = fopen("file1.txt", "r");

    // Check if the file was opened successfully
    if (fp == NULL) {
        printf("Error opening file");
        return 1;  // Exit the program with an error code
    }

    // Read and print characters until the end of the file
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(fp);

    return 0;  // Exit the program successfully
}
