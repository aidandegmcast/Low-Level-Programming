#include <stdio.h>
#include <limits.h>

int main(void) {
    int num;
    int result;

    while (1) {
        printf("Enter a valid integer: ");

        result = scanf("%d", &num);

        if (result) {
            printf("Thank you! You entered: %d\n", num);
            break;
        } 
        else {
            printf("Error: Invalid input. Please enter numbers only.\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
        }
    }
}