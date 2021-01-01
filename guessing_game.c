#include <stdio.h>

int guessTheNumber() {

    int secN = 2612;
    int guess;
    int limit = 10;

    printf("Enter ur guess (u have %d tries): ", limit);
    scanf("%d", &guess);

    while (guess != secN && limit != 1) {
        limit--;
        printf("Enter ur guess (u have %d tries): ", limit);
        scanf("%d", &guess);
    }

    if(guess == secN) {
        printf("Your guess is right !! ");
    } else {
        printf("Try again, LOOOOSER!");
    }
    return 0;
}


int main() {

    guessTheNumber();
    return 0;
}
