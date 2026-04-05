#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char password[50];
    char confirm[50];
    int tries = 3;

    printf("Hi! Please update your password below\n ->>> ");
    scanf(" %s", password);

    while (tries > 0) {

        printf("Re-enter your password to confirm it. You have %d tries to confirm your pass word\n ->>> ", tries);
        scanf(" %s", confirm);
        
        if (!strcmp(password, confirm)) {
            printf("Confirmed!\n");
            break;
        } else {
            tries--;
            printf("Not Confirmed! %d tries left\n", tries);
        }
    }

    return 0;
}