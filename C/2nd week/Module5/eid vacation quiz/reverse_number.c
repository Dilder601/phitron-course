#include<stdio.h>
int main() {
    int x, a, aa, b, bb, c, cc, d;

    scanf("%d", &x);
    a = x % 10;
    aa = x / 10;
    b = aa % 10;
    bb = aa / 10;
    c = bb % 10;
    cc = bb / 10;
    d = cc % 10;
    printf("%d%d%d%d", a, b, c, d);
    return 0;
}