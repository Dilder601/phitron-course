#include<stdio.h>

void rev_num(int n) {
    if (n == 0) return;
    printf("%d", n);
    if (n != 1)
        printf(" ");
    rev_num(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    rev_num(n);
    return 0;
}

