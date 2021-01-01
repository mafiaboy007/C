#include <stdio.h>

int main() {

    int array[3][3] = {
                    {2003, 2004, 2005},
                    {26, 12, 13},
                    {12, 11, 10}
                    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
