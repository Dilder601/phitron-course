#include<stdio.h>
int main() {
    int x, a, b, c, d;
    scanf("%d", &x);
    a = (x / 4) - 1;
    b = a - 2;
    c = a + 2;
    d = c + 2;
    printf("%d %d %d %d", b, a, c, d);
    return 0;
}