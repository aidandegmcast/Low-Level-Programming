#include <stdio.h>
#include <string.h>

int main(void) {
    char word[10];
    printf("Input a string: ");
    int input = scanf("%9s", word);

    if (input) {
        printf("Size of input: %d\n", strlen(word));

        printf("Reverse: ");
        for (int i = strlen(word); i >= 0; i--) {
            printf("%c", word[i]);
        }
    }

    printf("\nFind a letter in the string: ");
    char letter;
    int input2 = scanf(" %c", &letter);
    int found = 0;
    
    if (input2) {
        for (int i = 0; i <= strlen(word); i++) {
            if(letter == word[i]) {
                found = 1;
            }
        }
    }

    if (found) {
        printf("Letter found!");
    } else {
        printf("Letter not found!");
    }

    return 0;
}