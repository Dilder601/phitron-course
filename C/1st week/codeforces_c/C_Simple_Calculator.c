#include<stdio.h>
int main() {
    long long int x, y;
    scanf("%lld %lld", &x, &y);
    long long int sum = x + y;
    printf("%lld + %lld = %lld\n", x, y, sum);
    long long int mul = x * y;
    printf("%lld * %lld = %lld\n", x, y, mul);
    long long int sub = x - y;
    printf("%lld - %lld = %lld\n", x, y, sub);
    return 0;
}