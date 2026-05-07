#include <stdio.h>

int main(void) {
    short int input = 0b10011101;

    short int mask = 0b11110000;

    printf("INPUT: %d, MASK: %d, AND: %d \n", input, mask, (input&mask));
}