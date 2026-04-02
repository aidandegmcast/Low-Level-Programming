#include <stdio.h>

int main(void) {
    int A = 101;
    double B = 22.32;
    double C = 8.34e-09;
    float D = 12.50f;
    int E = 41218;
    char F = 'r';
    char G[] = "linguini";

    printf("%d\n", A);
    printf("%.2lf\n", B);
    printf("%.2E\n", C);
    printf("%.2f\n", D);
    printf("0x%X\n", E);
    printf("%c\n", F);
    printf("%s\n", G);
}