#include <stdio.h>

int main(void) {
    int *numPtr;

    *numPtr = 100;

    printf("%d", &numPtr);
}