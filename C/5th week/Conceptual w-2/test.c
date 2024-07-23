#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        int missingNumber = -1;

        for (int i = 0; i <= m; i++) {
            if (a * b * c * i == m) {
                missingNumber = i;
                break;
            }
        }

        if (m == 0) {
            printf("0\n");
        }
        else {
            printf("%d\n", missingNumber);
        }
    }

    return 0;
}