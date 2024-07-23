#include<stdio.h>
int main() {
    int x, result;
    scanf("%d", &x);
    result = x / 3;
    if (x % 3 != 0) {
        result = result + 1;
    }
    printf("%d", result);
    return 0;
}