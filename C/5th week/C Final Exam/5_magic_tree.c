#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int numRow = 5;
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 1) {
            numRow++;
        }
    }

    int s, k;
    s = numRow - 1;
    k = 1;

    for (int i = 1; i <= numRow; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        s--;
        k += 2;
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf(" ");
        }

        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}