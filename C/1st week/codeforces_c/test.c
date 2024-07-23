#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int res = a % 10;
    int res2 = b % 10;
    int sum = res + res2;
    printf("%d", sum);
    return 0;
}