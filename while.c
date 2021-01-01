#include <stdio.h>

int main() {

    char username[10];
    strcpy(username, "mafiab");
    int password = 123456789;

    while(username != "mafiaboy" || password != 123456789) {
        printf("Wrong credentials, try again..");
        break;
    }

    int i = 0;
    do{
        printf("%d \n", i);
        i++;
    }while(i <= 1000000);
    return 0;
}
