#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    int a, max = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        if (a > max) {
            max = a;
        }
    }
    printf("%d", max);
    return 0;
}