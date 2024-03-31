#include <stdio.h>

struct ExampleStruct {
    int x;
    char y;
};

union ExampleUnion {
    int x;
    char y;
};

int main() {
    // Size of structure and union
    printf("Size of Struct: %d bytes\n", sizeof(struct ExampleStruct));
    printf("Size of Union: %d bytes\n", sizeof(union ExampleUnion));

    return 0;
}
