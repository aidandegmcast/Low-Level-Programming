#include <stdio.h>

int main(void) {
    printf("Please enter a character.\n");
    char ch;
    char A = scanf("%c", &ch);
    printf("The code for %c is %d", ch, ch);
}