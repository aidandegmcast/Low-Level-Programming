#include <stdio.h>

int main(void){
    //Write a program to block (reset)(means set to 0) the first 4 bits of an 8-bit pattern

    short int input = 0b11011100; //some compilers allow you to write binary like this, 
    //otherwise you need to convert to base 10

    short int mask = 0b11110000;

    printf("The bitwise operation of 0x%x & 0x%x is 0x%x\n", input, mask, (input&mask));

    //write code to set (set to 1) the 7th bit of an 8-bit pattern

    input = 0b10011100;
    mask  = 0b01000000;
    //output=   11011100
    printf("The bitwise operation of 0x%x | 0x%x is 0x%x\n", input, mask, (input|mask));

}
