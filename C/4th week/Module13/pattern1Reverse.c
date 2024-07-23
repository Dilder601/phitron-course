#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int s = 0;
    int k = (n * 2) - 1;
    for (int i = 1; i <= n;i++) {
        for (int j = s; j >= 1; j--) {
            printf(" ");
        }
        for (int j = k; j >= 1; j--) {
            printf("*");
        }
        s++;
        k = k - 2;
        printf("\n");
    }
    return 0;
}