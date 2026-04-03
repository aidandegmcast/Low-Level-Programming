#include <stdio.h>
#include <limits.h>

int main() {
    int x = INT_MAX;

    printf("Before overflow: %d\n", x);

    x = x + 1;

    printf("After overflow: %d\n", x);
}