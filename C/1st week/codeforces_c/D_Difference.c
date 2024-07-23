#include<stdio.h>
int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int res = (a * b) - (c * d);
    printf("Difference = %lld", res);
    return 0;
}