#include <stdio.h>

int main(void) {
    short int input = 0b10011101;

    short int mask = 0b00001111;

    printf("INPUT: %d, MASK: %d, OR: %d \n", input, mask, (input|mask));
}