#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long power(long base, long exponent);

int main(void)
{
    long b, e;
    printf("Enter base and exponent: ");
    scanf("%ld %ld", &b, &e);
    printf("%ld^%ld = %ld\n", b, e, power(b, e));
    return 0;
}

long power(long base, long exponent)
{
    if (exponent == 1)
        return base;
    else
        return base * power(base, exponent - 1);
}
