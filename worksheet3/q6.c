#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char secretWord[10];
    char letter;
    char correctLetters[10];
    int health = 5;

    // Initial Game Setup
    printf("GAME MASTER, please enter your secret word ->>> ");
    scanf("%9s", secretWord);
    printf("Secret Word is '%s', game will start in \n\n\n1\n\n\n2\n\n\n3\n\n\n\n\n\n\n\n\n\n");
    
    // Setting the blank word according to the length of the secret word
    for (int i = 0; i < strlen(secretWord); i++) {
        correctLetters[i] = '-';
    }
    correctLetters[strlen(secretWord)] = '\0'; // closing off the string to prevent from storing garbage data

    // Game Loop
    while (1) {

        int foundLetter = 0;

        printf("\nGuess this word in %d tries ->>> %s\n", health, correctLetters);
        printf("\nInput a letter ->>> ");
        scanf(" %c", &letter);
        
        for (int i = 0; i < strlen(secretWord); i++) {

            if (letter == secretWord[i]) {
                correctLetters[i] = letter;
                foundLetter = 1;
                //printf("%c", secretWord[i]);
            } else {
                //printf("%c", correctLetters[i]);
            }
        }

        if (!foundLetter) {
            health--;
        }

        if (!strcmp(secretWord, correctLetters)) {
            printf("\nYou win!");
            break;
        } else if (health == 0) {
            printf("\nYou lose!");
            break;
        }
    }
}