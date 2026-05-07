#include <stdio.h>

int main(void) {
     short int input = 0b01100011;

     short int mask = 0b11101101;

     printf("INPUT: %d, MASK: %d, AND: %d \n", input, mask, (input&mask));
}