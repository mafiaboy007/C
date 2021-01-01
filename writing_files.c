#include <stdio.h>

int main() {

    FILE *pf = fopen("random.c", "w");

    fprintf(pf,"#include <stdio.h>\nint main() { \n printf() }");

    fclose(pf);

    return 0;
}
