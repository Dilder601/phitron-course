#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int priSum = 0;
    int secSum = 0;

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            if (i == j) {
                priSum += a[i][j];
                secSum += a[i][n - i - 1];
            }
        }
    }

    int difference = abs(priSum - secSum);

    printf("%d", difference);

    return 0;
}
