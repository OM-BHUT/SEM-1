#include <stdio.h>
#include <string.h>

typedef struct student {
    int roll;
    char name[20];
    char department[20];
    char course[20];
    int year;
} student;

void check(student a, student b) {
    // Use pointers for string comparison
    char *s1 = a.department;
    char *s2 = b.department;
    int i, flag = 1;  // Initialize flag to 1 for true

    // Use a loop to compare characters
    for (i = 0; i < strlen(s1); i++) {
        if (s1[i] != s2[i]) {  // Use != for comparison
            flag = 0;  // Set flag to 0 for false
            break;     // Break the loop when a difference is found
        }
    }

    if (flag == 1) {
        printf("Both strings are the same.\n");
    } else {
        printf("Different.\n");
    }
}

int main() {
    student a, b;
    a.roll = 3;
    strcpy(a.name, "ajay");
    strcpy(a.department, "cse");
    strcpy(a.course, "cse");
    a.year = 2003;

    b.roll = 3;
    strcpy(b.name, "jon");
    strcpy(b.department, "cse");
    strcpy(b.course, "maths");
    b.year = 2005;

    check(a, b);

    return 0;  // Return 0 to indicate successful execution
}
