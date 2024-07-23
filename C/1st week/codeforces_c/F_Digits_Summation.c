#include <stdio.h>
int main() {
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    long long int res1 = n % 10;
    long long int res2 = m % 10;

    long long int sum = res1 + res2;

    printf("%lld", sum);
    return 0;
}