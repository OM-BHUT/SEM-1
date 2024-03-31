#include <stdio.h>

int main() {
    FILE *fp;

    // Demonstrate fprintf() and fputc()
    fp = fopen("output.txt", "w");
    fprintf(fp, "Hello, World!\n");
    fputc('A', fp);
    fclose(fp);

    // Demonstrate fscanf() and fgetc()
    fp = fopen("output.txt", "r");
    char ch;
    fscanf(fp, "%c", &ch);
    printf("Read from file: %c\n", ch);
    fclose(fp);

    // Demonstrate fseek() and rewind()
    fp = fopen("output.txt", "a");
    fseek(fp, 0, SEEK_END);
    fprintf(fp, "\nAppended Text");
    rewind(fp);
    fscanf(fp, "%c", &ch);
    printf("Read after rewind: %c\n", ch);
    fclose(fp);

    return 0;
}
