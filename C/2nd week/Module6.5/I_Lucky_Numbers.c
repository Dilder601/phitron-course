#include<stdio.h>
int main() {
    int n, x, y;
    scanf("%d", &n);
    x = n % 10;
    y = n / 10;
    if (n % 10 != 0) {
        if (x >= y) {
            if (x % y == 0) {
                printf("YES");
            }
            else {
                printf("NO");
            }
        }
        if (x < y) {
            if (y % x == 0) {
                printf("YES");
            }
            else {
                printf("NO");
            }
        }
    }
    else {
        printf("YES");
    }

    return 0;
}