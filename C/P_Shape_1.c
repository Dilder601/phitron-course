#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int s, k;
    s = 0;
    k = n;
    for (int i = 1; i <= n; i++) {
        // for (int j = 1; j >= s; j--) {
        //     printf(" ");
        // }
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        // s++;
        k--;
        printf("\n");
    }
    return 0;
}