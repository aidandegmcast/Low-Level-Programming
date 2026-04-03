#include <stdio.h>

int main(void) {
    char *cPtr1;
    char *cPtr2;

    char ch = 'A';
    
    cPtr1 = &ch;

    cPtr2 = cPtr1;

    printf("1: %p\t 2: %p", cPtr1, cPtr2);
}