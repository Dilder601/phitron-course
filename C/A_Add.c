#include<stdio.h>
int sum(int x, int y) {
    int res = x + y;
    return res;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int res = sum(a, b);
    printf("%d", res);
    return 0;
}