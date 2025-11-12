#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main(void)
{
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);
    printf("Fibonacci(%u) = %llu\n", num, fibonacci(num));
    return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
    unsigned long long int a = 0, b = 1, temp;
    unsigned int i;
    if (n == 0)
        return 0;
    for (i = 2; i <= n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}
