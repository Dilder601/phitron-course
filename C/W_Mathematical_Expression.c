#include<stdio.h>
int main() {
    int a, b, c;
    char x, y;
    scanf("%d %c %d %c %d", &a, &x, &b, &y, &c);

    if (a + b == c) {
        printf("Yes");
    }
    else if (a - b == c) {
        printf("Yes");
    }
    else if (a * b == c) {
        printf("Yes");
    }
    else {
        if (x == '+') {
            int res = a + b;
            printf("%d", res);
        }
        if (x == '-') {
            int res = a - b;
            printf("%d", res);
        }
        if (x == '*') {
            int res = a * b;
            printf("%d", res);
        }

    }
    return 0;
}