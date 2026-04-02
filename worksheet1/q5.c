#include <stdio.h>

int main(void) {
    printf("Please enter your name.\n");
    char name[50];
    int A = scanf("%s", &name);
    
    printf("Please enter your height.\n");
    float height;
    int B = scanf("%f", &height);

    printf("%s, you are %.2fm tall", name, height);
}