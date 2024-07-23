#include<stdio.h>
int main() {
    int d, p;
    scanf("%d %d", &d, &p);
    float basePrice = p * (100.0 / (100 - d));
    printf("%.2f", basePrice);
    return 0;
}