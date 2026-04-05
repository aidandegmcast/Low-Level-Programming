#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int age = 0;
    char input[4];

    while (!age) {
        
        printf("Input your age: ");
        scanf(" %s", input);
        age = atoi(input);

        if (age <= 100 && age >= 1) {
            printf("%d", age);
        } else {
            age = 0;
            printf("Invalid! (1 - 100)\n\n");
        }
    }
    

    return 0;
}