#include<stdio.h>
int main() {
    int x, y, res, rem;
    scanf("%d %d", &x, &y);
    res = x / y;
    rem = x % y;
    printf("%d %d", res, rem);
    return 0;
}