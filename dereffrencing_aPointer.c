#include <stdio.h>

int main() {

    int money = 500;
    double height = 2.3656;

    int *pMoney = &money;
    double *pHeight = &height;

    printf("%d\n", *pMoney);
    printf("%f\n", *pHeight);

    return 0;
}
