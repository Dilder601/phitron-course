#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long int m, a, b, c;

        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int abc = a * b * c;

        long long int missingNumber = m / abc;

        if ((abc * missingNumber) == m) {
            printf("%lld\n", missingNumber);
        }
        else {
            printf("-1\n");
        }
    }

    return 0;
}