#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char changeCase(char ch);

int main(void)
{
    char c;
    printf("Enter a letter: ");
    scanf("%c", &c);
    printf("Changed case: %c\n", changeCase(c));
    return 0;
}

char changeCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + ('a' - 'A');
    else if (ch >= 'a' && ch <= 'z')
        return ch - ('a' - 'A');
    else
        return ch;
}
