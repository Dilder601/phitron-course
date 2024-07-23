#include<stdio.h>
int main() {
    long long int a;
    long long int sum = 0;
    scanf("%lld", &a);
    sum = (a * (a + 1)) / 2;
    printf("%lld", sum);
    return 0;
}