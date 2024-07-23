#include<stdio.h>
int main() {
    int x, a, b, c, d, e;
    scanf("%d", &x);
    a = x / 5;
    b = a - 2;
    c = b - 2;
    d = a + 2;
    e = d + 2;
    printf("%d %d %d %d %d", c, b, a, d, e);
    return 0;
}