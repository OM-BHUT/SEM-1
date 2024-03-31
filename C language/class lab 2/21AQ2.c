#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int charCount = 0, spaceCount = 0, tabCount = 0, newlineCount = 0;

    fp = fopen("filename.txt", "r");

    if (fp == NULL) {
        printf("Error while opening file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        charCount++;

        if (ch == ' ')
            spaceCount++;
        else if (ch == '\t')
            tabCount++;
        else if (ch == '\n')
            newlineCount++;
    }

    fclose(fp);

    printf("Character count: %d\n", charCount);
    printf("Space count: %d\n", spaceCount);
    printf("Tab count: %d\n", tabCount);
    printf("Newline count: %d\n", newlineCount);

    return 0;
}
