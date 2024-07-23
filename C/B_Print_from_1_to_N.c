#include <stdio.h>

void get_num(int n) {
    if (n == 0) return;
    get_num(n - 1);
    printf("%d\n", n);
}

int main() {
    int n;
    scanf("%d", &n);
    get_num(n);
    return 0;
}
