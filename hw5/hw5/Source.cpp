#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi(int n, char from, char aux, char to) {
    if (n == 1) {
        printf("%c -> %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, to, aux);
    printf("%c -> %c\n", from, to);
    hanoi(n - 1, aux, from, to);
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    hanoi(n, 'A', 'B', 'C');
    unsigned long long moves = (n >= 64) ? ~0ULL : ((1ULL << n) - 1ULL);
    printf("Total moves: %llu\n", moves);
    return 0;
}
