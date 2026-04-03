#include <stdio.h>

int main(void) {
    int *ip = NULL;
    int number = 10;
    ip = &number;

    printf("Contents of pointer ip: %p\n", ip);
    printf("Value of address of ip: %d\n", *ip);
    printf("Address of pointer ip: %p\n", &ip);

    *ip = 20;
    printf("Contents of address ip: %d\n", number);
}