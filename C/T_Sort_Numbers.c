#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int x = a, y = b, z = c;
    int tmp;
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c) {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }
    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
