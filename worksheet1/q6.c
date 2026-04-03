#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    int A;
    short int B;
    long int C;
    long long int D;
    unsigned int E;
    float F;
    double G;
    long double H;
    char I;

    printf("INT SIZE:\t%d\t|\tINT MIN:\t%d\t\t|\tINT MAX:\t%d\n", sizeof(A), INT_MIN, INT_MAX);
    printf("SHORT SIZE:\t%d\t|\tSHORT MIN:\t%d\t\t\t|\tSHORT MAX:\t%d\n", sizeof(B), SHRT_MIN, SHRT_MAX);
    printf("LONG SIZE:\t%d\t|\tLONG MIN:\t%d\t\t|\tLONG MAX:\t%d\n", sizeof(C), LONG_MIN, LONG_MAX);
    printf("LLONG SIZE:\t%d\t|\tLLONG MIN:\t%lld\t|\tLLONG MAX:\t%lld\n", sizeof(D), LLONG_MIN, LLONG_MAX);
    printf("U INT SIZE:\t%d\t|\tU INT MIN:\t%d\t\t\t|\tU INT MAX:\t%u\n", sizeof(E), 0, UINT_MAX);
    printf("FLOAT SIZE:\t%d\t|\tFLOAT MIN:\t%d\t\t\t|\tFLOAT MAX:\t%d\n", sizeof(F), FLT_MIN, FLT_MAX);
    printf("DOUBLE SIZE:\t%d\t|\tDOUBLE MIN:\t%d\t\t\t|\tDOUBLE MAX:\t%d\n", sizeof(G), DBL_MIN, DBL_MAX);
    printf("LDOUBLE SIZE:\t%d\t|\tLDOUBLE MIN:\t%lld\t|\tLDOUBLE MAX:\t%llu\n", sizeof(H), LDBL_MIN, LDBL_MAX);
    printf("CHAR SIZE:\t%d\t|\tCHAR MIN:\t%d\t\t\t|\tCHAR MAX:\t%d\n", sizeof(I), CHAR_MIN, CHAR_MAX);
}