#include <stdio.h>

int main(void) {
    int *numPtr;

    numPtr = (int *)1000;
    *numPtr = 50;

    printf("%d", *numPtr);

    return 0;

    // b. Setting an arbitrary value to numPtr is possible because you are just storing a memory address.
    // c. Yes
    // d. If you try to change the contents of *numPtr the program may crash because that memory address
    //    is not necessarily free to use by the program.
}