#include<stdio.h>

int sum(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int res = a + b;
    return res;
}

int main() {
    int res = sum();
    printf("%d\n", res);
    return 0;
}