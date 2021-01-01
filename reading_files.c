#include <stdio.h>

int main() {

    char lines[200];
    FILE *fp = fopen("random.txt", "r");

    fgets(lines, 200, fp);
    printf("%s", lines);

    fclose(fp);
    return 0;
}
