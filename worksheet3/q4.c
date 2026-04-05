#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char* memo = (char *)malloc(10*sizeof(char));

    memo = "aidan"; 
    printf("1 %s\n", memo);

    memo = (char *)malloc(20*sizeof(char));
    printf("2 %s\n", memo);

    memo = "aidandegiorgio"; 
    printf("3 %s\n", memo);
}