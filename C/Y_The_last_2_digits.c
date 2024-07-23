#include<stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    long long int mul = (a % 100) * (b % 100) * (c % 100) * (d % 100);
    int lastTwoDigit = mul % 100;

    if (lastTwoDigit < 10) {
        printf("0%d", lastTwoDigit);
    }
    else {
        printf("%d", lastTwoDigit);
    }
    return 0;
}
