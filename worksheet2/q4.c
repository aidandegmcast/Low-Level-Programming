#include <stdio.h>

int main(void) {
    int intVar;
    
    int *pointer;

    pointer = &intVar;
    printf("%d, %d, %p\n", *pointer, intVar, pointer);

    pointer = pointer + 1;
    printf("%d, %p\n", *pointer, pointer);
}