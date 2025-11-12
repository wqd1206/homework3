#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(void)
{
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("LCM of %d and %d is %d\n", x, y, lcm(x, y));
    return 0;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
