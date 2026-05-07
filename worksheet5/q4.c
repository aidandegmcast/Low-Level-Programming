#include <stdio.h>

int main(void) {

    char letter;

    int input = scanf("%c", &letter);

    printf("%c", letter);

    int age = 10;
    int* pAge = &age;
    int* ppAge = pAge;

    printf("%p \n", &age);
    printf("%p \n", pAge);
    printf("%d \n", *pAge);
}