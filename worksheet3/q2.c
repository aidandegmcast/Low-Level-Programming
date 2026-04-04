#include <stdio.h>
#include <string.h>

int main(void) {
    char wordOne[10];
    char wordTwo[10];

    printf("Input two words below...\nWord 1: ");
    scanf(" %9s", &wordOne);
    printf("Word 2: ");
    scanf(" %9s", &wordTwo);

    printf("Inputted: %s & %s\n", wordOne, wordTwo);

    if (!strcmp(wordOne,wordTwo)) {
        printf("Both words are identical.");
    } else {
        printf("Both words are different.");
    }
}