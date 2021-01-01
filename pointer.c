#include <stdio.h>

int main() {

    char name[] = "idir";
    printf("%p\n", &name); // printing the memory addess of the variable name.

    char *pName = &name; // this is a pointer variable that stores the memory address of---
    printf("%p", pName); // ---->the name variable.

    return 0;
}
