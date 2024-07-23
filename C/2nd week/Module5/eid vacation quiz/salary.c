#include<stdio.h>
int main() {
    double x;
    long long int res;
    scanf("%lf", &x);
    res = 365 * x;
    printf("%lld", res);
    return 0;
}