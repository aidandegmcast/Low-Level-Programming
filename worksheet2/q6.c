#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ip = malloc(sizeof(int));

    if (ip == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ip = 3;
    printf("1.Pointer: %p\nAddress Value: %d\n", ip, *ip);

    free(ip);
    printf("2.Pointer: %p\nAddress Value: %d\n", ip, *ip);

    *ip = 4;
    printf("3.Pointer: %p\nAddress Value: %d\n", ip, *ip);

    // f. dereferencing works but before it was a dangling pointer since it
    //    was freed from the malloc(). Therefore the program might crash
    //    print garbage values or appear to work.

    return 0;
}